/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:05:10 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/28 10:39:52 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.Class.hpp"
#include "../include/ScavTrap.Class.hpp"

int main( void ){
	ClapTrap robot("CL-1B");
	ScavTrap robot_scav("SC-2C");
	robot.attack( "PX-8A" );
	robot.takeDamage(8);
	robot.beRepaired(8);
	robot.beRepaired(8);
	robot_scav.attack( "Human" );
	robot_scav.guardGate();
	return (1);
}
