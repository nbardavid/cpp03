/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.Class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:25:03 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/29 15:09:26 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.Class.hpp"
#include "../include/DiamondTrap.Class.hpp"
#include "../include/colors.h"
#include <iostream>

// ************************************************
// *                 Constructors                 *
// ************************************************

DiamondTrap::DiamondTrap( void ):ScavTrap(), FragTrap(){
}

DiamondTrap::DiamondTrap(const std::string& name) {
	this->ClapTrap::setName(name + "_clap_name");
    this->_name = name;
    this->_hitPoint = FTHITPOINT;
    this->_energyPoint = STENERGYPOINT;
    this->_attackDamage = FTATTACKDAMAGE;

	std::cout << Color::GREEN << "New DiamondTrap have been created, is name is : " << this->getName() << Color::RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other):ClapTrap(other), ScavTrap(other), FragTrap(other){
	_name = other._name;
	std::cout << Color::GREEN << "New copy of DiamondTrap have been created, is name is : " << this->getName() << Color::RESET << std::endl;
}


DiamondTrap::~DiamondTrap(){
	std::cout << Color::RED << "DiamondTrap " << this->getName() << " has been destructed" << Color::RESET << std::endl;
}

// ************************************************
// *                  Operators                   *
// ************************************************

std::ostream& operator<<(std::ostream& out, const DiamondTrap& f) {
	out << "########################################" << std::endl << "Type : DiamondTrap" << std::endl << "name: " << f.getName() << std::endl << "_hitPoint: " << f.getHitPoint() << std::endl;
	out << "_energyPoint: " << f.getEnergyPoint() << std::endl << "_attackDamage: " << f.getAttackDamage() << std::endl << "########################################" << std::endl ;
    return out;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		_name = other._name;
	}
	return *this;
}

// ************************************************
// *                  Functions                   *
// ************************************************

std::string DiamondTrap::getName( void ) const{
	return (this->_name);
}

void DiamondTrap::WhoAmI( void ){
	std::cout << Color::BLUE << "name: " << this->getName() << std::endl << "ClapTrap name: " << ClapTrap::_name << Color::RESET << std::endl;
}
