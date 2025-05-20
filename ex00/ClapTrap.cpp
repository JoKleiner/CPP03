/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:38:29 by joklein           #+#    #+#             */
/*   Updated: 2025/05/20 12:13:01 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default constructor called" << std::endl;
	m_name = "unnamed";
	m_hit_points = 10;
	m_energy_points = 10;
	m_attack_dmg = 0;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "Setname constructor called" << std::endl;
	m_name = name;
	m_hit_points = 10;
	m_energy_points = 10;
	m_attack_dmg = 0;
	std::cout << "ClapTrap " << m_name << " | hit-points: " << m_hit_points << ", energy-points: " << m_energy_points << ", attack_dmg: " << m_attack_dmg << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	std::cout << "Copy constructor called" << std::endl;
	m_name = other.m_name;
	m_hit_points = other.m_hit_points;
	m_energy_points = other.m_energy_points;
	m_attack_dmg = other.m_attack_dmg;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->m_name = other.m_name;
		this->m_hit_points = other.m_hit_points;
		this->m_energy_points = other.m_energy_points;
		this->m_attack_dmg = other.m_attack_dmg;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->m_hit_points <= 0)	{
		std::cout << "ClapTrap " << m_name << " is out of hit-points" << std::endl;
		return ;
	}
	if (this->m_energy_points <= 0)	{
		std::cout << "ClapTrap " << m_name << " is out of energy-points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attack_dmg << " points of damage!" << std::endl;
	this->m_energy_points--;
	std::cout << "ClapTrap " << m_name << " | hit-points: " << m_hit_points << ", energy-points: " << m_energy_points << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << m_name << " takes " << amount << " points of damage!" << std::endl;
	this->m_hit_points -= amount;
	std::cout << "ClapTrap " << m_name << " | hit-points: " << m_hit_points << ", energy-points: " << m_energy_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->m_hit_points <= 0)	{
		std::cout << "ClapTrap " << m_name << " is out of hit-points" << std::endl;
		return ;
	}
	if (this->m_energy_points <= 0)	{
		std::cout << "ClapTrap " << m_name << " is out of energy-points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->m_name << " repaires " << amount << " Hit-points!" << std::endl;
	this->m_hit_points += amount;
	this->m_energy_points--;
	std::cout << "ClapTrap " << m_name << " | hit-points: " << m_hit_points << ", energy-points: " << m_energy_points << std::endl;
}
