/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:56:05 by joklein           #+#    #+#             */
/*   Updated: 2025/05/20 14:06:41 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap clap("Clappi");
	ScavTrap scav("Scavi");
	FragTrap frag("Fragi");
	
	scav.guardGate();
	clap.attack("Dog");
	clap.takeDamage(5);
	for(int i = 0; i < 10; i++)
		clap.beRepaired(1);
	clap.takeDamage(10);
	clap.attack("Dog");
	clap.takeDamage(10);
	clap.attack("Dog");

	scav.attack("Dog");
	scav.takeDamage(50);
	scav.beRepaired(30);
	scav.takeDamage(10);
	scav.attack("Dog");
	scav.takeDamage(10);
	scav.attack("Dog");
	std::cout << "Dog died" << std::endl;
	scav.guardGate();

	frag.highFivesGuys();
	return (0);
}
