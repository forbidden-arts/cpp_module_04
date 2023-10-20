/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:34:26 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/20 08:22:19 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"


class Cat: public Animal
{
	private:
		Brain *_brain;

	public:
	// Constructors
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &src);
	// Deconstructors
		~Cat();
	// Public Methods
		void makeSound(void)const;
	// Getter
		void getIdeas(void)const;
	// Setter
		void setIdea(size_t i, std::string idea);
};
