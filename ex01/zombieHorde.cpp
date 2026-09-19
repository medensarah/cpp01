/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 19:02:27 by smedenec          #+#    #+#             */
/*   Updated: 2026/09/19 18:54:32 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);

	Zombie	*zombie = new (std::nothrow) Zombie[N];
	if (!zombie)
		return (NULL);

	for (int i = 0; i < N ; i++)
		zombie[i].setName(name);
	return (zombie);
}
