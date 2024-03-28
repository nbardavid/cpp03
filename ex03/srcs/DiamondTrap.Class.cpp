/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.Class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:25:03 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/28 14:58:32 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.Class.hpp"
#include "../include/DiamondTrap.Class.hpp"
#include "../include/colors.h"
#include <iostream>

// ************************************************
// *                 Constructors                 *
// ************************************************

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
    this->_name = name;
    this->_hitPoint = FragTrap::_hitPoint;
    this->_energyPoint = ScavTrap::_energyPoint;
    this->_attackDamage = FragTrap::_attackDamage;

	std::cout << Color::GREEN << "New DiamondTrap have been created, is name is : " << this->getName() << Color::RESET << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << Color::RED << "DiamondTrap " << this->getName() << " has been destructed" << Color::RESET << std::endl;
}

std::ostream& operator<<(std::ostream& out, const DiamondTrap& f) {
	out << "########################################" << std::endl << "Type : DiamondTrap" << std::endl << "name: " << f.getName() << std::endl << "_hitPoint: " << f.getHitPoint() << std::endl;
	out << "_energyPoint: " << f.getEnergyPoint() << std::endl << "_attackDamage: " << f.getAttackDamage() << std::endl << "########################################" << std::endl ;
    return out;
}
