/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:09:17 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/08 16:28:19 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/identifier.hpp"

int	main( void ) {
	Base *base;

	base = generate();
	delete (base);
}

// REMOVE -Wno-unused from makefile