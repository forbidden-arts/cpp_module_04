/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:45:30 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/20 07:38:25 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"


class Dog: public Animal
{
	private:

	public:
	// Constructors
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &src);
	// Deconstructors
		~Dog();

	// Public Methods
		void makeSound(void)const;
};
