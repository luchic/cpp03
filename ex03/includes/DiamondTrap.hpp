/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:00:08 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/28 17:04:42 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP
#define __DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

protected:
	void _isDeadMessage() const override;
	void _isNoEnergyMessage() const override;
	
public:
	DiamondTrap();
	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& other);
	~DiamondTrap();

	void whoAmI();
	void attack(const std::string& target);

private:
	std::string _name;
};

#endif