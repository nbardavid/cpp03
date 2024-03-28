/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:16:52 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/28 10:32:29 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
#define CLAPTRAP_CLASS_HPP

#include <string>

class ClapTrap {
public:

	// ************************************************
	// *                	Constructors              *
	// ************************************************
    ClapTrap( const std::string& name );
    ClapTrap(const ClapTrap& other);

	~ClapTrap();
	
	ClapTrap& operator=(const ClapTrap& other);
	
	// ************************************************
	// *                  Functions                   *
	// ************************************************

	virtual void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	

	// ************************************************
	// *                	Get Functions             *
	// ************************************************

	std::string getName() const;
	int getHitPoint() const;
	int getEnergyPoint() const;
	int getAttackDamage() const;

protected:

	ClapTrap(const std::string& name, const int& hitPoint, const int& energyPoint, const int& attackDamage);

	// ************************************************
	// *                	Set Functions             *
	// ************************************************

	void setName( const std::string& name );
	void setHitPoint( const int& value);
	void setEnergyPoint( const int& value);
	void setAttackDamage( const int& value);

private:
	std::string _name;
	int _hitPoint;
	int _energyPoint;
	int	_attackDamage;
};

#endif
