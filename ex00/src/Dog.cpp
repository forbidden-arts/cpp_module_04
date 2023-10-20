/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 07:44:29 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/20 07:45:36 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog(): Animal()
{
	this->_type = "Dog";
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal()
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
}

// Overloaded Operators
Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

// Public Methods
void	Dog::makeSound(void)const
{
	std::cout << this->getType() << " says: Woof." << std::endl;
}
