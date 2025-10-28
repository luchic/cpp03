/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:22:35 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/28 15:41:21 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	FragTrap ft1("Fraggy");
	ft1.attack("TargetDummy");
	ft1.takeDamage(20);
	ft1.beRepaired(10);
	ft1.highFivesGuys();
	return 0;
}