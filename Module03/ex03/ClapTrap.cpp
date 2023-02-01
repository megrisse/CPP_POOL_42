/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:26:45 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/01 16:54:35 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : HitPoint(10), EnergyPoint(10), AttackDamage(0) {

	std::cout << "ClapTrap : Constructer Called" << std::endl;
	Name = name;
}

ClapTrap::ClapTrap() : HitPoint(10), EnergyPoint(10), AttackDamage(0) {

	std::cout << "ClapTrap : Default Constructer Called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap : Default Destructer Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & name) {

	this->Name = name.Name;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& name) {

	if (this != &name)
		this->Name = name.getName();
	return *this;
}

void    ClapTrap::setName(std::string name) {

	Name = name;
}

void	ClapTrap::setHitPoint(int amount) {

	HitPoint = amount;
}

void	ClapTrap::setEnergyPoint(int amount) {

	EnergyPoint = amount;
}

void	ClapTrap::setAttackDamage(int amount) {

	AttackDamage = amount;
}

std::string	ClapTrap::getName() const {

	return this->Name;
}

int	ClapTrap::getHitPoint() {

	return (HitPoint);
}

int	ClapTrap::getEnergyPoint() {

	return (EnergyPoint);
}

int	ClapTrap::getAttackDamage() {
	
	return (AttackDamage);
}

void    ClapTrap::attack(const std::string& target) {

	if (this->HitPoint == 0)
		return ;
	std::cout << "ClapTrap " << Name << " attacks " << target << " ,causing " << AttackDamage << " Dammage" << std::endl; 
}

void    ClapTrap::takeDamage(unsigned int amount) {

	if (this->HitPoint == 0)
		return ;
	if (HitPoint >= (int)amount)
		this->HitPoint -= amount;
	else
		HitPoint = 0;
	std::cout << "ClapTrap " << Name << " takeDamage : " << amount << " hitPoint left : " << HitPoint << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {

	if (this->HitPoint == 0)
		return ;
	std::cout << "ClapTrap " << Name << " Repaired " << amount << " which  EnergyPoints : " << HitPoint + amount << std::endl;
	this->HitPoint += amount;
}