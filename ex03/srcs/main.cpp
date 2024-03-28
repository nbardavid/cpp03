/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:05:10 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/28 15:13:02 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.Class.hpp"
#include "../include/ScavTrap.Class.hpp"
#include "../include/FragTrap.Class.hpp"
#include "../include/DiamondTrap.Class.hpp"
#include <iostream>

int main( void ){
	DiamondTrap robot("FT-1B");
	std::cout << robot << std::endl;
	return (1);
}
