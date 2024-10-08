/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:27:12 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/08 15:52:11 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

int	main( void ) {
	Data		diamond_sword;
	Data		*deserialized_item;
	uintptr_t	serial_number;

	diamond_sword.user_name = "mortins-";
	diamond_sword.user_id = 42424242;

	std::cout << INVERT << "Diamond sword" << RESET << std::endl;
	std::cout << "username: " << diamond_sword.user_name << "\nuser id: " << diamond_sword.user_id << std::endl << std::endl;

	serial_number = Serializer::serialize(&diamond_sword);

	std::cout << YELLOW << "Serial Number: " << serial_number << RESET << std::endl;

	deserialized_item = Serializer::deserialize(serial_number);

	std::cout << std::endl << INVERT << "Deserialized item" << RESET << std::endl;
	std::cout << "username: " << deserialized_item->user_name << "\nuser id: " << deserialized_item->user_id << std::endl;
}