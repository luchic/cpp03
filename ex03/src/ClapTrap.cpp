/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:17:50 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/28 15:40:15 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() :
	_name("Default"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap " << 
		_name << " constructed with default values." << std::endl;
}
ClapTrap::ClapTrap(const std::string& name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "ClapTrap " << _name << " copy constructed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap " << _name << " assigned." << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructed." << std::endl;
}

void ClapTrap::_isDeadMessage() const
{
	std::cout << "ClapTrap "
		<< _name << " is dead and cannot perform this action." << std::endl;
}

void ClapTrap::_isNoEnergyMessage() const
{
	std::cout << "ClapTrap "
		<< _name << " has no energy points left to perform this action."
		<< std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
		_isDeadMessage();
	else if (_energyPoints == 0)
		_isNoEnergyMessage();
	else
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target
				<< ", causing " << _attackDamage << " points of damage!"
				<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
		return _isDeadMessage();
	if (amount < _hitPoints)
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes "
			<< amount << " points of damage! "
			<< _hitPoints << " hit points remaining." << std::endl;
	}
	else
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name
			<< " takes " << amount
			<< " points of damage and is now dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
		_isDeadMessage();
	else if (_energyPoints == 0)
		_isNoEnergyMessage();
	else
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " is repaired for "
			<< amount << " hit points! "
			<< _hitPoints << " hit points now." << std::endl;
	}
}