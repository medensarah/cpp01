/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 21:13:46 by smedenec          #+#    #+#             */
/*   Updated: 2026/09/27 17:06:22 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: wrong number of arguments." << std::endl;
		return (1);
	}
	if (!argv[2][0])
	{
		std::cerr << "Error: s1 cannot be empty." << std::endl;
		return (1);
	}
	//init
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	// input
	std::ifstream fd(filename.c_str());
	if (!fd)
	{
		std::cerr << "Error: could not open input file." << std::endl;
		return (1);
	}
	
	// output
	std::string	fileReplace = filename + ".replace";
	std::ofstream	new_fd(fileReplace.c_str());
	if (!new_fd)
	{
		std::cerr << "Error: could not create output file." << std::endl;
		return (1);
	}

	// buf
	std::ostringstream	buf;
	buf << fd.rdbuf();
	if (!fd.eof() && fd.fail())
	{
		std::cerr << "Error: could not read input file." << std::endl;
		return (1);
	}
	std::string	content = buf.str();

	// Replace every occurrence of s1 by s2
	std::string	res;
	std::size_t	pos = 0;
	std::size_t	found;
	while ((found = content.find(s1, pos)) != std::string::npos)
	{
		res += content.substr(pos, found - pos);
		res += s2;
		pos = found + s1.length();
	}
	res += content.substr(pos);

	// Write
	new_fd << res;
	if (!new_fd)
	{
		std::cerr << "Error: could not write to output file." << std::endl;
		return (1);
	}

	return (0);
}
