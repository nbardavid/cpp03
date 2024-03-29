/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:25:03 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/29 11:27:21 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.Class.hpp"
#include "../include/colors.h"
#include <iostream>

// ************************************************
// *                 Constructors                  *
// ************************************************
ScavTrap::ScavTrap(): ClapTrap(){
	this->setHitPoint(SCAV_HITPOINT);
	this->setEnergyPoint(SCAV_ENERGYPOINT);
	this->setAttackDamage(SCAV_ATTACKDAMAGE);
	return ;
}

ScavTrap::ScavTrap( const std::string& name ):ClapTrap(name){
	std::cout << Color::GREEN << "New ScavTrap have been created, is name is : " << this->getName() << Color::RESET << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << Color::RED << "ScavTrap " << this->getName() << " has been destructed" << Color::RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other):ClapTrap(other){
	std::cout << Color::GREEN << "New ScavTrap have been copied, is name is : " << this->getName() << Color::RESET << std::endl;
}

// ************************************************
// *                  Functions                  *
// ************************************************

void ScavTrap::attack( const std::string& target ){
	if (this->getEnergyPoint() <= 0){
		std::cout << Color::RED << "ScavTrap " << this->getName() << "doesn't have any energy points" << Color::RESET << std::endl;
	}
	std::cout << Color::BLUE << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << Color::RESET << std::endl; 
	this->setEnergyPoint(this->getEnergyPoint() - 1);
}

void ScavTrap::guardGate(){
	std::cout << Color::BLUE << "ScavTrap " << this->getName() << " is now in guard mod" << Color::RESET << std::endl; 
}
