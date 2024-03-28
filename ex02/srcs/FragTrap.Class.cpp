/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:25:03 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/28 10:50:31 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.Class.hpp"
#include "../include/colors.h"
#include <iostream>

// ************************************************
// *                 Constructors                  *
// ************************************************

FragTrap::FragTrap( const std::string& name ):ClapTrap(name, 100, 50, 20){
	std::cout << Color::GREEN << "New FragTrap have been created, is name is : " << this->getName() << Color::RESET << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << Color::RED << "FragTrap " << this->getName() << " has been destructed" << Color::RESET << std::endl;
}

// ************************************************
// *                  Functions                  *
// ************************************************

void FragTrap::attack( const std::string& target ){
	if (this->getEnergyPoint() <= 0){
		std::cout << Color::RED << "FragTrap " << this->getName() << "doesn't have any energy points" << Color::RESET << std::endl;
	}
	std::cout << Color::BLUE << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << Color::RESET << std::endl; 
	this->setEnergyPoint(this->getEnergyPoint() - 1);
}

void FragTrap::guardGate(){
	std::cout << Color::BLUE << "FragTrap " << this->getName() << " is now in guard mod" << Color::RESET << std::endl; 
}
