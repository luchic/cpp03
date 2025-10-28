/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:07:37 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/28 15:35:00 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP
#define __CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
	virtual void _isDeadMessage() const;
	virtual void _isNoEnergyMessage() const;

	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

public:
	ClapTrap();
	ClapTrap(const ClapTrap &other);
	ClapTrap& operator=(const ClapTrap &other);
	~ClapTrap();

	ClapTrap(const std::string& name);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif