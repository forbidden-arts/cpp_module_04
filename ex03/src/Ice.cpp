/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:16:12 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/23 11:28:19 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const & src) : AMateria("ice")
{
	// std::cout << "Ice materia copied" << std::endl;
	*this = src;
}

Ice	&Ice::operator=(const Ice& src) {
	if (this != &src)
		this->_type = src._type;
	return *this;
}

Ice::~Ice()
{
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "An ice bolt hits " << target.getName() << std::endl;
}
