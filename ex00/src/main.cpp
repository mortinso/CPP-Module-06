/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:07:15 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/07 18:22:19 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

int	main( int argc, char **argv ) {
	if (argc != 2)
	{
		std::cout << "Error: Wrong number of arguments. Usage:" << std::endl;
		std::cout << "./convert <C++ literal>" << std::endl;
		return (0);
	}
	ScalarConverter::convert(argv[1]);
}