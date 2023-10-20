/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 07:46:29 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/20 10:47:13 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat(): WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal()
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
WrongCat::~WrongCat()
{
	std::cout << "WrongCat Deconstructor called" << std::endl;
}

// Overload Operators
WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat Copy Assignment operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return *this;
}

// Public Methods
void WrongCat::makeSound(void)const
{
	std::cout << this->getType() << " says: Cats Don't Bark." << std::endl;
}
