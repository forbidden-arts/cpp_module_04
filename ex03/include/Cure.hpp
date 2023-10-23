/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:55:12 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/23 11:21:59 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();

		Cure(Cure const &);
		Cure& operator=(Cure const &);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};
