/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 07:42:49 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/20 07:44:18 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat(): Animal()
{
	this->_type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal()
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
}

// Overloaded Operators
Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat Copy Assignment operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

// Public Methods
void	Cat::makeSound(void)const
{
	std::cout << this->getType() << " says: Meow." << std::endl;
}
