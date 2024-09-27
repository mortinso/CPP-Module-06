/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:03:00 by mortins-          #+#    #+#             */
/*   Updated: 2024/09/27 18:06:44 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

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

#endif
