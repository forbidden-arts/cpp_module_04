/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 07:44:29 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/20 10:47:13 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog(): Animal()
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &copy): Animal()
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Dog::~Dog()
{
	delete(this->_brain);
	std::cout << "Dog Deconstructor called" << std::endl;
}

// Overload Operators
Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = new Brain();
		*this->_brain = *src._brain;
	}
	return *this;
}

// Public Methods
void	Dog::makeSound(void)const
{
	std::cout << this->getType() << " says: Woof." << std::endl;
}

// Getter
void	Dog::getIdeas(void)const
{
	for (int i = 0; i < 3; i++) // 3 for testing. Can be changed.
		std::cout << "Dog Idea " << i << " is: \"" << this->_brain->getIdea(i) << "\" at the address " << this->_brain->getIdeaAddress(i) << std::endl;
}

// Setter
void	Dog::setIdea(size_t i, std::string idea)
{
		this->_brain->setIdea(i, idea);
}
