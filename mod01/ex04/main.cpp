/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:47:29 by ssabbaji          #+#    #+#             */
/*   Updated: 2022/11/18 14:59:36 by ssabbaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace(char **argv, std::string rep)
{
     std::ofstream  outfile;
     std::string    o_file, r_file;
     int            pos;
     
     o_file = argv[1];
     r_file = o_file.append(".replace");
     outfile.open(r_file);
     if (!outfile)
     {
          std::cout << "Error in creating file" << std::endl;
          exit (1);
     }
	for (int i = 0; i < (int)rep.size(); i++)
	{
          if (std::string(argv[2]).empty())
               break;
          pos = rep.find(argv[2], i);
		if (pos == i && pos != -1)
		{
			outfile << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			outfile << rep[i];
	}
	outfile.close();
}  

int main(int argc, char **argv)
{
     std::ifstream  infile;
     std::string    str, rep;
     
     (void)argc;
     if (argc != 4)
     {
          std::cout << "error , usage : filename s1 s2" << std::endl;
          exit(1);
     }
     infile.open(argv[1]);
     if (infile.fail())
     {
          std::cout << argv[1] << std::endl;
          exit(1);
     }
     if (infile.is_open())
     {
          while (!infile.eof() && getline(infile, str))
          {
               if (infile.bad())
                    exit(1);
               rep.append(str);
               rep.append("\n");
          }
          infile.close();
          replace(argv, rep);
     }
     else
     {
          std::cout << "your file isnt open" << std::endl;
          return (1);
     }
     return (0);
}