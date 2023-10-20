/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 07:29:24 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/20 08:20:32 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>


class Animal
{
	protected:
		std::string _type;

	public:
	// Constructors
		Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &src);
	// Deconstructors
		virtual ~Animal();
	// Public Methods
		virtual void makeSound(void)const;
	// Getter
		std::string getType(void)const;
};
