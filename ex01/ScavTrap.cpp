/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:04:52 by joklein           #+#    #+#             */
/*   Updated: 2025/05/20 13:55:26 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "Default ScavTrap constructor called" << std::endl;
	m_hit_points = 100;
	m_energy_points = 50;
	m_attack_dmg = 20;
	m_guard = false;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "Setname ScavTrap constructor called" << std::endl;
	m_hit_points = 100;
	m_energy_points = 50;
	m_attack_dmg = 20;
	m_guard = false;
	std::cout << "ScavTrap " << m_name << " | hit-points: " << m_hit_points << ", energy-points: " << m_energy_points << ", attack_dmg: " << m_attack_dmg << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other.m_name){
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	m_hit_points = other.m_hit_points;
	m_energy_points = other.m_energy_points;
	m_attack_dmg = other.m_attack_dmg;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "Copy ScavTrap assignment operator called" << std::endl;
	if (this != &other)
	{
		this->m_name = other.m_name;
		this->m_hit_points = other.m_hit_points;
		this->m_energy_points = other.m_energy_points;
		this->m_attack_dmg = other.m_attack_dmg;
	}
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "Destructor ScavTrap called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (m_guard == true)
	{
		std::cout << m_name << " leaves the Gate keeper mode!" << std::endl;
		m_guard = false;
	}
	if (this->m_hit_points <= 0)
	{
		std::cout << "ScavTrap " << m_name << " is out of hit-points" << std::endl;
		return ;
	}
	if (this->m_energy_points <= 0)
	{
		std::cout << "ScavTrap " << m_name << " is out of energy-points" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << m_name << " attacks " << target << ", causing " << m_attack_dmg << " points of damage!" << std::endl;
	this->m_energy_points--;
	std::cout << "ScavTrap " << m_name << " | hit-points: " << m_hit_points << ", energy-points: " << m_energy_points << std::endl;
}

void ScavTrap::guardGate()
{
	if (m_guard == false)
	{
		std::cout << m_name << " is now in Gate keeper mode!" << std::endl;
		m_guard = true;
	}
	else
		std::cout << m_name << " is already in Gate keeper mode." << std::endl;
}