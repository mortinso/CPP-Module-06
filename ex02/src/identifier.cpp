/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifier.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:07:40 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/08 16:39:29 by mortins-         ###   ########.fr       */
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
			A	*a;
			base = dynamic_cast<Base *>(new A());
			break;
		case 1:
			base = dynamic_cast<Base *>(new B());
			break;
		case 2:
			base = dynamic_cast<Base *>(new C());
			break;
	}
	return (base);
}

void	identify( Base* p ) {
	
}

void	identify( Base& p ) {
	
}