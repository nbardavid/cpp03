/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.Class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:59:07 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/28 14:42:48 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_HPP
#define DIAMONDTRAP_CLASS_HPP

#include <string>
#include "ScavTrap.Class.hpp"
#include "FragTrap.Class.hpp"

class DiamondTrap:public ScavTrap, public FragTrap{
public:
	DiamondTrap( const std::string& name );
    ~DiamondTrap();
private:
	std::string _name;

};

std::ostream& operator<<(std::ostream& out, const DiamondTrap& f);

#endif

