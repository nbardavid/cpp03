/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:59:07 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/29 11:23:39 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

#include <string>
#include "ClapTrap.Class.hpp"

#define SCAV_HITPOINT 100
#define SCAV_ENERGYPOINT 50
#define SCAV_ATTACKDAMAGE 20

class ScavTrap:virtual public ClapTrap {
public:
	ScavTrap();
	ScavTrap( const std::string& name );
    ~ScavTrap();
    ScavTrap(const ScavTrap& other);
    void guardGate();
	void attack( const std::string& target );
};

#endif
