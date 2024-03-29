/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:25:03 by nbardavi          #+#    #+#             */
/*   Updated: 2024/03/29 11:04:08 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.Class.hpp"
#include "../include/colors.h"
#include <iostream>

// ************************************************
// *                 Constructors                  *
// ************************************************

ClapTrap::ClapTrap(){
	return ;
}

ClapTrap::ClapTrap( const std::string& name ):_name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0){
	std::cout << Color::GREEN << "New ClapTrap have been created, is name is : " << this->getName() << Color::RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other):_name(other._name), _hitPoint(other._hitPoint), _energyPoint(other._energyPoint), _attackDamage(other._attackDamage){
	std::cout << Color::GREEN << "New ClapTrap have been created, is name is : " << this->getName() << Color::RESET << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << Color::RED << "ClapTrap " << this->getName() << " has been destructed" << Color::RESET << std::endl;
}

ClapTrap::ClapTrap( const std::string& name, const int& hitPoint, const int& energyPoint, const int& attackDamage):_name(name), _hitPoint(hitPoint), _energyPoint(energyPoint), _attackDamage(attackDamage){
	std::cout << Color::GREEN << "New ClapTrap have been created, is name is : " << this->getName() << Color::RESET << std::endl;
}
// ************************************************
// *                  Operators                  *
// ************************************************

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	if (this != &other) {
		this->setName(other.getName());
		this->setHitPoint(other.getHitPoint());
		this->setEnergyPoint(other.getEnergyPoint());
		this->setAttackDamage(other.getAttackDamage());
	}
    return *this;
}

// ************************************************
// *                Get Functions                *
// ************************************************

std::string ClapTrap::getName( void ) const{
	return (this->_name);
}

int ClapTrap::getHitPoint( void ) const{
	return (this->_hitPoint);
}

int ClapTrap::getEnergyPoint( void ) const{
	return (this->_energyPoint);
}

int ClapTrap::getAttackDamage( void ) const{
	return (this->_attackDamage);
}

// ************************************************
// *                Set Functions                *
// ************************************************

void ClapTrap::setName( const std::string& name ){
	this->_name = name;
}

void ClapTrap::setHitPoint( const int& value ){
	this->_hitPoint = value;
}

void ClapTrap::setEnergyPoint( const int& value ){
	this->_energyPoint = value;
}

void ClapTrap::setAttackDamage( const int& value ){
	this->_attackDamage = value;
}

// ************************************************
// *                  Functions                  *
// ************************************************

void ClapTrap::attack( const std::string& target ){
	if (this->getEnergyPoint() <= 0){
		std::cout << Color::RED << "ClapTrap " << this->getName() << "doesn't have any energy points" << Color::RESET << std::endl;
	}
	std::cout << Color::BLUE << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << Color::RESET << std::endl; 
	this->setEnergyPoint(this->getEnergyPoint() - 1);
}

void ClapTrap::takeDamage( unsigned int amount ){
	if (this->getHitPoint() > 0){
		if ((unsigned int)this->getHitPoint() < amount){
			amount = this->getHitPoint();
		}
		std::cout << Color::BLUE << "ClapTrap " << this->getName() << " taked " << amount << " HitPoint(s)" << Color::RESET << std::endl;
		this->setHitPoint(this->getHitPoint() - amount);
	}
}

void ClapTrap::beRepaired( unsigned int amount ){
	if ((unsigned int)this->getEnergyPoint() < amount){
		std::cout << Color::RED << "ClapTrap " << this->getName() << " doesn't have enough energy point(s) to do that" << Color::RESET << std::endl;
	}
	else {
		std::cout << Color::BLUE << "ClapTrap " << this->getName() << " have been repaired of " << amount << " HitPoint(s)" << Color::RESET << std::endl;
		this->setHitPoint(this->getHitPoint() + amount);
		this->setEnergyPoint(this->getEnergyPoint() - amount);
	}
}
