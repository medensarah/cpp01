/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 19:02:27 by smedenec          #+#    #+#             */
/*   Updated: 2026/09/17 19:51:03 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*newZombie;

	newZombie = new Zombie;
	//name.isprintable
	if (name.empty())
	{
		newZombie = delete Zombie;
		return (NULL);
	}
	newZombie->setName(name);
	newZombie->announce();
	return (newZombie);
}
