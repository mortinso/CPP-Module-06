/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:10:50 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/07 19:11:32 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

void	printBasic( char c, int i, float f, double d, size_t cases ) {
	if (c < 0)
		std::cout << "char: impossible" << std::endl;
	else if (c < 32 || c > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(cases) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(cases) << d << std::endl;
	std::exit(0);
}

void	printImpossible(float f, double d, size_t cases ) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(cases) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(cases) << d << std::endl;
	std::exit(0);
}