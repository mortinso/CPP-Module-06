/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:27:12 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/22 17:27:20 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

int	main( void ) {
	Data		user;
	Data		*deserialized_user;
	uintptr_t	serial_number;

	user.name = "mortins-";
	user.id = 42424242;

	std::cout << INVERT << "Diamond sword" << RESET << std::endl;
	std::cout << "username: " << user.name << "\nuser id: " << user.id << std::endl << std::endl;

	serial_number = Serializer::serialize(&user);

	std::cout << YELLOW << "Serial Number: " << serial_number << RESET << std::endl;

	deserialized_user = Serializer::deserialize(serial_number);

	std::cout << std::endl << INVERT << "Deserialized item" << RESET << std::endl;
	std::cout << "username: " << deserialized_user->name << "\nuser id: " << deserialized_user->id << std::endl;
}