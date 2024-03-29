/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:25:03 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/29 14:28:02 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.Class.hpp"
#include "../include/colors.h"
#include <iostream>

// ************************************************
// *                 Constructors                  *
// ************************************************
//
FragTrap::FragTrap(): ClapTrap(){
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttackDamage(30);
	return ;
}

FragTrap::FragTrap( const std::string& name ):ClapTrap(name){
	std::cout << Color::GREEN << "New FragTrap have been created, is name is : " << this->getName() << Color::RESET << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << Color::RED << "FragTrap " << this->getName() << " has been destructed" << Color::RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& other):ClapTrap(other){
	std::cout << Color::GREEN << "New FragTrap have been copied, is name is : " << this->getName() << Color::RESET << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return *this;
}

// ************************************************
// *                  Functions                  *
// ************************************************

void FragTrap::highFiveGuys( void ){
	std::cout << Color::BLUE << "FragTrap " << this->getName() << " ask for highFive" << Color::RESET << std::endl; 
}
