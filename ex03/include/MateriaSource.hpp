/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:17:26 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/23 11:21:59 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materias[4];

	public:
		MateriaSource();
		~MateriaSource();

		MateriaSource(MateriaSource const &);
		MateriaSource &operator=(MateriaSource const &);

		AMateria *getMateria(std::string const & type);
		AMateria *createMateria(std::string const & type);
		void learnMateria(AMateria*);
};
