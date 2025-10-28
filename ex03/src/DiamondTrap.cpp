/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:33:20 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/28 17:04:56 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() :
	ClapTrap("Default_DiamondTrap_clap_name"),
	_name("Default_DiamondTrap")
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = 50;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " constructed with default values." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) :
	ClapTrap(name + "_clap_name"),
	_name(name)
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = 50;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " constructed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) :
	ClapTrap(other),
	ScavTrap(other),
	FragTrap(other),
	_name(other._name)
{
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "DiamondTrap " << _name << " copy constructed." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		_name = other._name;
	}
	std::cout << "DiamondTrap " << _name << " assigned." << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " destructed." << std::endl;
}

void DiamondTrap::_isDeadMessage() const
{
	std::cout << "DiamondTrap "
		<< _name << " is dead and cannot perform this action." << std::endl;
}

void DiamondTrap::_isNoEnergyMessage() const
{
	std::cout << "DiamondTrap "
		<< _name << " has no energy points left to perform this action."
		<< std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << _name
		<< ", ClapTrap name: " << ClapTrap::_name << std::endl;
	std::cout << "Hit Points: " << _hitPoints
		<< ", Energy Points: " << _energyPoints
		<< ", Attack Damage: " << _attackDamage << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}