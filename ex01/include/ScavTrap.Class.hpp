/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:59:07 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/27 14:57:55 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

#include <string>
#include "ClapTrap.Class.hpp"

class ScavTrap:public ClapTrap {
public:
    ScavTrap(const std::string& name);
    ~ScavTrap();
    void guardGate();
};

#endif
