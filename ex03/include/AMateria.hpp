/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:53:11 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/23 10:54:22 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string _type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
