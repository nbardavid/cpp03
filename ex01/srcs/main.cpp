/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:05:10 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/27 13:43:34 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.Class.hpp"

int main( void ){
	ClapTrap robot("RX-1B");
	robot.attack( "PX-8A" );
	robot.takeDamage(8);
	robot.beRepaired(8);
	robot.beRepaired(8);
	return (1);
}
