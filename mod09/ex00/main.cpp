/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:24:41 by ssabbaji          #+#    #+#             */
/*   Updated: 2023/03/24 12:00:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string trim_white(const std::string &str)
{
    std::string res;
    int i = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n')
        i++;
    while (str[i])
    {
        res += str[i];
        i++;
    }
    return (res);
}

void parse_btc(std::string &line, std::map<std::string, float> &btc)
{
    std::string date, price;
    std::stringstream ss(line);
    std::getline(ss, date, ',');
    std::getline(ss, price, ',');
    try 
    {
        float price_float = std::stof(trim_white(price));
        btc[trim_white(date)] = price_float;
    }
    catch (const std::invalid_argument& e) 
    {
        std::cout << "Error: invalid input in line \"" << line << "\"" << std::endl;
    }
}


void parse_input(std::string &line, std::string& date, float& value)
{
    std::stringstream ss(line);
    std::string datestr, valuestr;
    std::getline(ss, datestr, '|');
    std::getline(ss, valuestr, '|');
    date = trim_white(datestr);
    valuestr = std::stof(valuestr);
    char *end;
    value = std::strtof(valuestr.c_str(), &end);
    if (*end != '\0' || value < 0 || value > 1000)
    {
        std::cout << RED << "Error : not a valid value" << RESET << std::endl;
        exit(1);
    }
    date.erase(std::remove_if(date.begin(), date.end(), ::isspace), date.end());
    if (date.length() != 10)
    {
        std::cout << RED << "Error : not a valid date" << RESET << std::endl;
        exit(1);
    }
}


// float find_btc_price(const std::string& date, const std::map<std::string, float>& btc)
// {
//     // std::map<std::string, float>::const_iterator it;
//     // for (it = btc.begin(); it != btc.end(); it++)
//     // {
//     //     std::cout << it->first << "|" << date << std::endl;
//     //     if (strcmp(it->first.c_str(), date.c_str()) == 0)
//     //     {
//     //         std::cout << GREEN << "Found date " << date << RESET << std::endl;
//     //         return (it->second);
//     //     }
//     // }
    
//     std::cout << "date: " << trim_white(date)  << "size : " << date << std::endl;
//     std::cout << "otehr size : "  <<  std::string("2012-01-11").size() << std::endl;
//     std::map<std::string, float>::const_iterator it = btc.find("2012-01-11");
//     std::cout << "date: " << date << std::endl;
//     if (it != btc.end())
//         return (it->second);
//     // std::cout << "second:" << it->second << std::endl;

//     (void)date;
//     // std::cout << it->first << "|" << it->second << std::endl;
//     // std::cout << RED << "Error: could not find date " << date << RESET << std::endl;
//     return (0);
// }

float find_btc_price (const std::string& date, const std::map<std::string, float>&btc)
{
    std::map<std::string, float>::const_iterator it = btc.find(date);

    if (it == btc.begin())
        return (it->second);
    else if (it == btc.end())
    {
        --it;
        return (it->second);
    }
    else 
    {
        std::map<std::string, float>::const_iterator it2 = it;
        --it2;
        if (it->first == date)
            return (it->second);
        else if (it2->first == date)
            return (it2->second);
    }
    return (0);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << RED << "Error usage : ./btc [filename] " << RESET << std::endl;
        return (1);
    }
    std::ifstream file("data.csv");
    if (!file.is_open())
    {
        std::cout << RED << "Error: could not open CSV file" << RESET << std::endl;
        return (1);
    }
    std::string line, line2;
    std::map<std::string, float> btc_prices;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        parse_btc(line, btc_prices);
    }
    file.close();
    std::ifstream input(argv[1]);
    if (!input.is_open())
    {
        std::cout << RED << "Error: could not open input file" << RESET << std::endl;
        return (1);
    }
    std::getline(input, line2);
    while (std::getline(input, line2))
    {
        std::string date;
        float value;
        parse_input(line2, date, value);
        float btc_price = find_btc_price(date, btc_prices);
        std::cout << date << "=> " << value << " = " << value * btc_price << std::endl;
    }
    input.close();
    return (0);
}