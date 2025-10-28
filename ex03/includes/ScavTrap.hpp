/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:29:56 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/28 16:59:06 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP
#define __SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap
{
protected:
	void _isDeadMessage() const override;
	void _isNoEnergyMessage() const override;

public:
	ScavTrap();
	ScavTrap(const ScavTrap &other);
	ScavTrap& operator=(const ScavTrap &other);
	~ScavTrap();

	ScavTrap(const std::string& name);

	void guardGate();
	void attack(const std::string& target);
};


#endif