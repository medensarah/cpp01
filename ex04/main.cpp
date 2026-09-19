/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 21:13:46 by smedenec          #+#    #+#             */
/*   Updated: 2026/09/19 21:56:17 by smedenec         ###   ########.fr       */
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
	if (!argv[2] || !argv[2][0])
	{
		std::cerr << "Error: s1 cannot be empty." << std::endl;
		return (1);
	}
	
	//init
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	// Reading file
	std::ifstream input(filename.c_str());
	// Test if file is open
	if (!input)
	{
		std::cerr << "Error: could not open input file." << std::endl;
		return (1);
	}
	
	// Rename new file
	std::string	fileReplace = filename + ".replace";
	// Create new file
	std::ofstream	output(fileReplace.c_str());
	// Test if file is create
	if (!output)
	{
		std::cerr << "Error: could not create output file." << std::endl;
		return (1);
	}
	
	// Display Before
	std::cout << "file: " << filename << std::endl;
	std::cout << "s1: " << s1 << std::endl;
	std::cout << "s2: " << s2 << std::endl;

	// Read file
	std::ostringstream	buf;
	buf << input.rdbuf();

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

	// Add the remaining part of the file
	res += content.substr(pos);

	// Write the result into the new file
	output << res;

	return (0);
}
