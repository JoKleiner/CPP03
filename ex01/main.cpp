/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:56:05 by joklein           #+#    #+#             */
/*   Updated: 2025/05/21 13:16:03 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap clap("Clappi");
	ScavTrap scav("Scavi");
	// ClapTrap *scav = new ScavTrap("Scavi");   for virtual testing
	
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
	// delete scav;
	return (0);
}
