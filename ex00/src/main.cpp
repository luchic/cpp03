/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:22:35 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/28 14:17:06 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap ct1("Clappy");
	ClapTrap ct2("Trapster");

	ct1.attack("Trapster");
	ct2.takeDamage(5);
	ct2.beRepaired(3);
	ct2.attack("Clappy");
	ct1.takeDamage(4);
	ct1.beRepaired(2);

	return 0;
}