/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:59:48 by joklein           #+#    #+#             */
/*   Updated: 2025/05/21 13:32:09 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "Default FragTrap constructor called" << std::endl;
	m_hit_points = 100;
	m_energy_points = 100;
	m_attack_dmg = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "Setname FragTrap constructor called" << std::endl;
	m_hit_points = 100;
	m_energy_points = 100;
	m_attack_dmg = 30;
	std::cout << "FragTrap " << m_name << " | hit-points: " << m_hit_points << ", energy-points: " << m_energy_points << ", attack_dmg: " << m_attack_dmg << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other.m_name){
	std::cout << "Copy FragTrap constructor called" << std::endl;
	m_hit_points = other.m_hit_points;
	m_energy_points = other.m_energy_points;
	m_attack_dmg = other.m_attack_dmg;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "Copy FragTrap assignment operator called" << std::endl;
	if (this != &other)
	{
		this->m_name = other.m_name;
		this->m_hit_points = other.m_hit_points;
		this->m_energy_points = other.m_energy_points;
		this->m_attack_dmg = other.m_attack_dmg;
	}
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "Destructor FragTrap called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (this->m_hit_points <= 0)
	{
		std::cout << "FragTrap " << m_name << " is out of hit-points" << std::endl;
		return ;
	}
	if (this->m_energy_points <= 0)
	{
		std::cout << "FragTrap " << m_name << " is out of energy-points" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << m_name << " attacks " << target << ", causing " << m_attack_dmg << " points of damage!" << std::endl;
	this->m_energy_points--;
	std::cout << "FragTrap " << m_name << " | hit-points: " << m_hit_points << ", energy-points: " << m_energy_points << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << m_name << ": \033[1;31m\"wow: \033[0;3;33mhigh5..\033[1;31m\"\033[0m" << std::endl;
}
