/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:35:22 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/28 15:40:15 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() :
	ClapTrap("Default_ScavTrap")
{
	_energyPoints = 50;
	_attackDamage = 20;
	_hitPoints = 100;
	std::cout << "ScavTrap " << _name << " constructed with default values." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) :
	ClapTrap(name)
{
	_energyPoints = 50;
	_attackDamage = 20;
	_hitPoints = 100;
	std::cout << "ScavTrap " << _name << " constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	_energyPoints = 50;
	_attackDamage = 20;
	_hitPoints = 100;
	std::cout << "ScavTrap " << _name << " copy constructed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	ClapTrap::operator=(other);
	std::cout << "ScavTrap " << _name << " assigned." << std::endl;
	return *this;
}

void ScavTrap::_isDeadMessage() const
{
	std::cout << "ScavTrap "
		<< _name << " is dead and cannot perform this action." << std::endl;
}

void ScavTrap::_isNoEnergyMessage() const
{
	std::cout << "ScavTrap "
		<< _name << " has no energy left to perform this action." << std::endl;
}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap " << _name << " destructed." << std::endl;
}

void ScavTrap::guardGate()
{
	if (_hitPoints == 0)
	{
		_isDeadMessage();
		return;
	}
	if (_energyPoints == 0)
	{
		_isNoEnergyMessage();
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap "
		<< _name << " is now in Gate Keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
		_isDeadMessage();
	else if (_energyPoints == 0)
		_isNoEnergyMessage();
	else
	{
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target
				<< ", causing " << _attackDamage << " points of damage!"
				<< std::endl;
	}
}