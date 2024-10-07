/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:03:00 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/07 19:25:59 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <climits>
# include <iomanip>

class ScalarConverter {
	private:
		// Constructors
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter &_scalarconverter );
		// Destructor
		~ScalarConverter( void );
		// Copy assignment operator overload
		ScalarConverter & operator = ( const ScalarConverter &_scalarconverter );

	public:
		static void	convert( std::string literal );
};

//conversions.cpp
void	toInt( std::string literal );
void	toChar( std::string literal );
void	toFloat( std::string literal );
void	toDouble( std::string literal );
void	checkPseudos(std::string literal);

//printers.cpp
void	printBasic( char c, int i, float f, double d, size_t cases );
void	printImpossible(float f, double d, size_t cases );
void	printPseudos( std::string f, std::string d );

#endif
