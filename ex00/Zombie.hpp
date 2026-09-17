/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 19:02:36 by smedenec          #+#    #+#             */
/*   Updated: 2026/09/17 19:37:22 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

class	Zombie
{
	private:
		std::string	name;
	
	public:
		Zombie();
		
		void		setName(const std::string &str);

		std::string	getName(); const;

		void		announce(); const;
};

Zombie*	newZombie(std::string name);

void	randomChump(std::string name);

#endif