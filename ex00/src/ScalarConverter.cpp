/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:03:04 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/27 18:08:12 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

// Default constructor
ScalarConverter::ScalarConverter( void ) {
	std::cout << "ScalarConverter default constructor called" <<std::endl;
}

// Copy constructor
ScalarConverter::ScalarConverter( const ScalarConverter &_scalarconverter ) {
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	*this = _scalarconverter;
}

// Destructor
ScalarConverter::~ScalarConverter( void ) {
	std::cout << "ScalarConverter destructor called" <<std::endl;
}

// Copy assignment operator overload
ScalarConverter& ScalarConverter::operator = ( const ScalarConverter &_scalarconverter ) {
	std::cout << "ScalarConverter copy assignment operator called" << std::endl;
	if (this != &_scalarconverter) {
		// this->setValue(_scalarconverter.getValue());
	}
	return (*this);
}

// -----------------------------------Methods-----------------------------------
void	ScalarConverter::convert( std::string literal ) {
	
}