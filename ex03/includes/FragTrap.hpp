/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:52:37 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/28 16:58:59 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP
#define __FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
	void _isDeadMessage() const override;
	void _isNoEnergyMessage() const override;

public:
	FragTrap();
	FragTrap(const FragTrap &other);
	FragTrap& operator=(const FragTrap &other);
	~FragTrap();

	FragTrap(const std::string& name);

	void highFivesGuys();
};



#endif