/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:59:07 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/29 14:28:46 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
#define FRAGTRAP_CLASS_HPP

#include <string>
#include "ClapTrap.Class.hpp"

class FragTrap:virtual public ClapTrap {
public:
	FragTrap();
	FragTrap( const std::string& name );
    ~FragTrap();
	FragTrap& operator=(const FragTrap& other);
	FragTrap (const FragTrap& other);
    void highFiveGuys( void );
};

#endif
