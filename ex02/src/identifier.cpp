/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifier.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:07:40 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/08 17:32:53 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/identifier.hpp"

Base	*generate( void ) {
	Base	*base;
	int		random;

	//Set seed for rand
	srand(time(0));

	random = rand() % 3;

	switch (random) {
		case 0:
			// std::cout << GREEN << "Generated \"A\"" << RESET << std::endl;
			base = dynamic_cast<Base *>(new A());
			break;
		case 1:
			// std::cout << GREEN << "Generated \"B\"" << RESET << std::endl;
			base = dynamic_cast<Base *>(new B());
			break;
		case 2:
			// std::cout << GREEN << "Generated \"C\"" << RESET << std::endl;
			base = dynamic_cast<Base *>(new C());
			break;
	}
	return (base);
}

void	identify( Base *p ) {
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << GREEN << "Object is of type \"A\"" << RESET << std::endl;

	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << GREEN << "Object is of type \"B\"" << RESET << std::endl;

	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << GREEN << "Object is of type \"C\"" << RESET << std::endl;

	else
		std::cout << RED << "Object is not of type \"A\", \"B\" or \"C\"" << RESET << std::endl;
}

void	identify( Base &p ) {
	Base	base;

	try {
		base = dynamic_cast<A &>(p);
		std::cout << GREEN << "Object is of type \"A\"" << RESET << std::endl;
		return;
	}
	catch (std::exception e) {}

	try {
		base = dynamic_cast<B &>(p);
		std::cout << GREEN << "Object is of type \"B\"" << RESET << std::endl;
		return;
	}
	catch (std::exception e) {}

	try {
		base = dynamic_cast<C &>(p);
		std::cout << GREEN << "Object is of type \"C\"" << RESET << std::endl;
		return;
	}
	catch (std::exception e) {}

	std::cout << RED << "Object is not of type \"A\", \"B\" or \"C\"" << RESET << std::endl;
}