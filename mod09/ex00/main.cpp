/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:24:41 by ssabbaji          #+#    #+#             */
/*   Updated: 2023/03/27 12:56:23 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <algorithm>

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
    std::getline(ss >> std::ws , price);
    
    try
    {
        float price_float = std::atof(trim_white(price).c_str());
        btc[trim_white(date)] = price_float;
    }
    catch (const std::invalid_argument &e)
    {
        std::cout << "Error: invalid input in line \"" << line << "\"" << std::endl;
    }
}

int parse_input(const std::string &input, std::string &date, float &value)
{
    std::istringstream iss(input);
    std::string token;

    if (std::getline(iss, token, '|'))
    {
        date = token;
        date.erase(std::remove_if(date.begin(), date.end(), ::isspace), date.end());
    }
    else
    {
        std::cerr << "Error: missing date" << std::endl;
        return 0;
    }
    if (std::getline(iss, token, '|'))
    {
        token = trim_white(token);
        if (!token.empty())
            value = std::atof(token.c_str());
    }
    else
    {
        std::cout << "Error: bad input => \"" << input << "\"" << std::endl;
        return BAD_INPUT;
    }
    if (std::getline(iss, token))
    {
        std::cerr << "Warning: extra input ignored" << std::endl;
    }
    return 0;
}

float find_btc_price(const std::string &date, const std::map<std::string, float> &btc)
{
    std::map<std::string, float>::const_iterator it = btc.find(date);
    if (it != btc.end())
        return (it->second);
    std::cout << "Error: no Bitcoin price found for date :" << date << std::endl;
    return (9999999999);
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
        if (parse_input(line2, date, value) == BAD_INPUT)
            continue;
        if (value <= 0)
            std::cout << RED << "Error: not a valid value : "<< value << RESET << std::endl;
        else if (value > 1000000)
            std::cout << RED << "Error: too big number" << RESET << std::endl;
        else
        {
            float btc_price = find_btc_price(date, btc_prices);
            if (btc_price == NO_PRICE)
                continue;
            std::cout << date << "=> " << value << " = " << value * btc_price << std::endl;
        }
    }
    input.close();
    return (0);
}