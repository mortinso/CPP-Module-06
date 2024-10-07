/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:33:01 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/07 19:29:28 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

void	toChar( std::string literal ) {
	char	c = literal[0];
	int		i = static_cast<int>(c);
	float	f = static_cast<float>(c);
	double	d = static_cast<double>(c);

	printBasic(c, i, f, d, 1);
}

void	toInt( std::string literal ) {
	if (atof(literal.c_str()) > INT_MAX || atof(literal.c_str()) < INT_MIN)
		toDouble(literal);

	int		i = atoi(literal.c_str());
	float	f = static_cast<float>(i);
	double	d = static_cast<double>(i);
	char	c;

	if (i > 127 || i < 0)
		c = -1;
	else
		c = static_cast<char>(i);

	printBasic(c, i, f, d, 1);
}

void	toFloat( std::string literal ) {
	size_t	cases = literal.length() - literal.find_first_of(".") - 2;
	if (cases == 0)
		cases++;
	float	f = atof(literal.c_str());
	int		i = static_cast<int>(f);
	double	d = static_cast<double>(f);
	char	c;

	if (f > 127 || f < 0)
		c = -1;
	else
		c = static_cast<char>(f);

	if (atof(literal.c_str()) > INT_MAX || atof(literal.c_str()) < INT_MIN)
		printImpossible(f, d, cases);

	printBasic(c, i, f, d, cases);
}

void	toDouble( std::string literal ) {
	size_t	cases = literal.length() - literal.find_first_of(".") - 1;
	if (cases == 0 || literal.find_first_of(".") == literal.npos)
		cases = 1;
	double	d = atof(literal.c_str());
	int		i = static_cast<int>(d);
	float	f = static_cast<float>(d);
	char	c;

	if (d > 127 || d < 0)
		c = -1;
	else
		c = static_cast<char>(d);

	if (atof(literal.c_str()) > INT_MAX || atof(literal.c_str()) < INT_MIN)
		printImpossible(f, d, cases);

	printBasic(c, i, f, d, cases);
}

void	checkPseudos(std::string literal) {
	std::string float_pseudo[3] = { "+inff", "-inff", "nanf" };
	std::string double_pseudo[3] = { "+inf", "-inf", "nan" };
	
	for (int i = 0; i < 3; i++) {
		if (literal.compare(float_pseudo[i]) == 0)
			printPseudos(float_pseudo[i], double_pseudo[i]);
		if (literal.compare(double_pseudo[i]) == 0)
			printPseudos(float_pseudo[i], double_pseudo[i]);
	}
}