/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 07:42:49 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/20 10:47:13 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat(): Animal()
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
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
	delete(this->_brain);
}

// Overload Operators
Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat Copy Assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = new Brain();
		*this->_brain = *src._brain;
	}
	return *this;
}

// Public Methods
void	Cat::makeSound(void)const
{
	std::cout << this->getType() << " says: Meow." << std::endl;
}

// Getter
void	Cat::getIdeas(void)const
{
	for (int i = 0; i < 3; i++)  // 3 for testing. Can be changed.
		std::cout << "Cat Idea " << i << " is: \"" << this->_brain->getIdea(i) << "\" at the address " << this->_brain->getIdeaAddress(i) << std::endl;
}

// Setter
void	Cat::setIdea(size_t i, std::string idea)
{
		this->_brain->setIdea(i, idea);
}
