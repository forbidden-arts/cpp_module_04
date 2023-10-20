/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 07:45:43 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/20 10:47:13 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal():_type("wrong_default")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

// Overload Operators
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal Copy Assignment operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

// Public Methods
void WrongAnimal::makeSound(void)const
{
	std::cout << this->getType() << " says: Hello, my name is Rasmus." << std::endl;
}

// Getter
std::string	WrongAnimal::getType(void)const
{
	return (this->_type);
}
