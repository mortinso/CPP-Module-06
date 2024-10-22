/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:15:06 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/22 17:26:10 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

# define GREEN "\e[92m"
# define YELLOW "\e[93m"
# define INVERT "\e[90m\e[107m"
# define RESET "\e[0m"

struct Data {
	std::string		name;
	unsigned int	id;
};

class Serializer {
	private:
		// Constructors
		Serializer( void );
		Serializer( const Serializer &_serializer );
		// Destructor
		~Serializer( void );
		// Copy assignment operator overload
		Serializer & operator = ( const Serializer &_serializer );

	public:
		// Methods
		static uintptr_t	serialize( Data* ptr );
		static Data*		deserialize( uintptr_t raw );


};

#endif
