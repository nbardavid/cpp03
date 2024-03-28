/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:05:10 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/28 14:37:18 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.Class.hpp"
#include "../include/ScavTrap.Class.hpp"
#include "../include/FragTrap.Class.hpp"
#include <iostream>

int main( void ){
	FragTrap robot("FT-1B");
	std::cout << robot.getHitPoint() << std::endl;
	robot.attack( "PX-8A" );
	robot.takeDamage(8);
	robot.beRepaired(8);
	robot.beRepaired(8);
	robot.highFiveGuys();
	return (1);
}
