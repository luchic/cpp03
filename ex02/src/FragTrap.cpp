/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:05:46 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/28 15:42:48 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() :
	ClapTrap("Default_FragTrap")
{
	_energyPoints = 100;
	_attackDamage = 30;
	_hitPoints = 100;
	std::cout << "FragTrap " << _name << " constructed with default values." << std::endl;
}

FragTrap::FragTrap(const std::string& name) :
	ClapTrap(name)
{
	_energyPoints = 100;
	_attackDamage = 30;
	_hitPoints = 100;
	std::cout << "FragTrap " << _name << " constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	_energyPoints = 100;
	_attackDamage = 30;
	_hitPoints = 100;
	std::cout << "FragTrap " << _name << " copy constructed." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	ClapTrap::operator=(other);
	std::cout << "FragTrap " << _name << " assigned." << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destructed." << std::endl;
}

void FragTrap::_isDeadMessage() const
{
	std::cout << "FragTrap "
		<< _name << " is dead and cannot perform this action." << std::endl;
}

void FragTrap::_isNoEnergyMessage() const
{
	std::cout << "FragTrap "
		<< _name << " has no energy left to perform this action." << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (_hitPoints == 0)
		_isDeadMessage();
	else
		std::cout << "FragTrap " << _name << " is requesting a high five! ✋" << std::endl;
}