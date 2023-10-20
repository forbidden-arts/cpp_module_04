/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:34:26 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/20 08:19:53 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"


class Cat: public Animal
{
	private:

	public:
	// Constructors
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &src);
	// Deconstructors
		~Cat();
	// Public Methods
		void makeSound(void)const;
};
