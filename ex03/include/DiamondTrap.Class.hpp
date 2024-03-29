/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.Class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:59:07 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/29 14:19:09 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_HPP
#define DIAMONDTRAP_CLASS_HPP

#include <string>
#include "ScavTrap.Class.hpp"
#include "FragTrap.Class.hpp"

#define FTHITPOINT 100
#define STENERGYPOINT 50
#define FTATTACKDAMAGE 30

class DiamondTrap:public ScavTrap, public FragTrap{
public:
	
	DiamondTrap();
	DiamondTrap( const std::string& name );
	DiamondTrap (const DiamondTrap& other);

    ~DiamondTrap();
	
	DiamondTrap& operator=(const DiamondTrap& other);

	void WhoAmI( void );
	
	std::string getName() const;
private:
	std::string _name;
};

std::ostream& operator<<(std::ostream& out, const DiamondTrap& f);

#endif

