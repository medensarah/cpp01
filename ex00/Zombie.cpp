/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 19:02:33 by smedenec          #+#    #+#             */
/*   Updated: 2026/09/17 21:37:37 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::setName(const std::string &str)
{
	name = str;
}

std::string	Zombie::getName() const
{
	return (name);
}

void	Zombie::announce() const
{
	std::cout << name << " : " << "BraiiiiiiinnnzzzZ..." << std::endl;
}