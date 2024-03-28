/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:25:03 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/28 11:01:18 by nbardavi         ###   ########.fr       */
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

void FragTrap::highFiveGuys( void ){
	std::cout << Color::BLUE << "FragTrap " << this->getName() << " ask for highFive" << Color::RESET << std::endl; 
}
