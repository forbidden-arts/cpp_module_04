/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 07:40:29 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/20 07:42:40 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal():_type("default")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Animal::~Animal()
{
	std::cout << "Animal Deconstructor called" << std::endl;
}

// Overloaded Operators
Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal Copy Assignment operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

// Public Methods
void Animal::makeSound(void)const
{
	std::cout << "This animal doesn't make any sound." << std::endl;
}

// Getter
std::string	Animal::getType(void)const
{
	return (this->_type);
}
