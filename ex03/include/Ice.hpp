/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:55:42 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/23 11:21:59 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();

		Ice(Ice const &);
		Ice& operator=(Ice const &);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};
