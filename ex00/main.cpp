/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:56:05 by joklein           #+#    #+#             */
/*   Updated: 2025/05/20 11:47:50 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("clappi");
	
	clap.attack("Dog");
	clap.takeDamage(5);
	for(int i = 0; i < 10; i++)
		clap.beRepaired(1);
	clap.takeDamage(10);
	clap.attack("Dog");
	clap.takeDamage(10);
	clap.attack("Dog");
	return (0);
}
