/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:57:30 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/23 11:21:59 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("")
{
	// std::cout << "AMateria: materia is created" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria " << this->_type << " created" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria " << this->_type << " destroyed" << std::endl;
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

AMateria	*AMateria::clone() const
{
	return (AMateria*)this;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}
