/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:09:17 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/08 17:33:11 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/identifier.hpp"

int	main( void ) {
	{ // Generate and identify 6
		std::cout << INVERT << "Generate and identify random:" << RESET << std::endl;
		Base *random = generate();

		std::cout << "*random: ";
		identify(random);

		std::cout << "&random: ";
		identify(*random);

		delete random;
	}
	{ // Identify each base
		std::cout << std::endl << std::endl << INVERT << "Identify A, B and C:" << RESET << std::endl;
		Base *a = new A;
		Base *b = new B;
		Base *c = new C;

		std::cout << "*A: ";
		identify(a);
		std::cout << "&A: ";
		identify(*a);
		std::cout << std::endl;

		std::cout << "*B: ";
		identify(b);
		std::cout << "&B: ";
		identify(*b);
		std::cout << std::endl;

		std::cout << "*C: ";
		identify(c);
		std::cout << "&C: ";
		identify(*c);


		delete (a);
		delete (b);
		delete (c);
	}
	{ // Identify true base
		std::cout << std::endl << std::endl << INVERT << "Identify from true Base:" << RESET << std::endl;
		Base *fake = new Base;

		std::cout << "using pointer: ";
		identify(fake);

		std::cout << "using reference: ";
		identify(*fake);

		delete (fake);
	}
}
