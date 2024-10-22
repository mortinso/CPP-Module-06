/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:03:04 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/22 17:22:31 by mortins-         ###   ########.fr       */
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
	if (this != &_scalarconverter)
		*this = _scalarconverter;
	return (*this);
}

// -----------------------------------Methods-----------------------------------
void	ScalarConverter::convert( std::string literal ) {
	size_t	i = 0;
	int		decimals = 0;

	if (literal[i] == '-')
		i++;
	if (literal[i] && literal.find_first_not_of("-0123456789.f") == literal.npos)
	{
		while (i < literal.length())
		{
			if (literal[i] == '.')
				decimals++;
			if (decimals > 1 || literal[i] == '-' || (literal[i] == 'f' && i != literal.length() - 1))
			{
				std::cerr << "Error: string does not represent a valid literal" << std::endl;
				std::exit(0);
			}
			else if (decimals == 1 && i == literal.length() - 1 && literal[i] == 'f')
				toFloat(literal);
			i++;
		}
		if (decimals == 1 && literal.find_first_of("f") == literal.npos)
			toDouble(literal);
		else if (decimals == 0 && literal.find_first_of(".f") == literal.npos)
			toInt(literal);
	}
	else if (literal.length() == 1)
		toChar(literal);
	checkPseudos(literal);
	std::cerr << "Error: string does not represent a valid literal" << std::endl;
	std::exit(0);
}