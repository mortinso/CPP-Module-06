/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:15:17 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/22 17:22:06 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

// Default constructor
Serializer::Serializer( void ) {
	std::cout << "Serializer default constructor called" <<std::endl;
}

// Copy constructor
Serializer::Serializer( const Serializer &_serializer ) {
	std::cout << "Serializer copy constructor called" << std::endl;
	*this = _serializer;
}

// Destructor
Serializer::~Serializer( void ) {
	std::cout << "Serializer destructor called" <<std::endl;
}

// Copy assignment operator overload
Serializer& Serializer::operator = ( const Serializer &_serializer ) {
	std::cout << "Serializer copy assignment operator called" << std::endl;
	if (this != &_serializer)
		*this = _serializer;
	return (*this);
}

// -----------------------------------Methods-----------------------------------
uintptr_t	Serializer::serialize( Data* ptr ) {
	std::cout << GREEN << "Serializing..." << RESET << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize( uintptr_t raw ) {
	std::cout << GREEN << "De-serializing..." << RESET << std::endl;
	return (reinterpret_cast<Data*>(raw));
}