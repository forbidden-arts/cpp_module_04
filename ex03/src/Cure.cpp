/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:02:44 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/23 11:28:13 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	// std::cout << "Cure materia copied" << std::endl;
	*this = src;
}

Cure	&Cure::operator=(const Cure &src) {
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << target.getName() << "'s wounds are healed." << std::endl;
}
