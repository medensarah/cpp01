/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 19:01:54 by smedenec          #+#    #+#             */
/*   Updated: 2026/09/19 18:41:22 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int	main()
{
	Zombie		*zombies;
	int			N = 6;
	std::string	name = "Soldier";
	
	// Create zombieHorde with heap
	zombies = zombieHorde(N, name);
	if (!zombies)
		return (1);
	
	// Announce all zombies
	for (int i = 0; i < N; i++)
		zombies[i].announce();

	delete[] zombies;
	return (0);
}
