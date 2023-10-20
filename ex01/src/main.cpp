/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 06:48:00 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/20 09:12:05 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define TEST 10

int main()
{
	std::cout << "Constructing" << std::endl;
	const Animal	*animal[TEST];
	for (int i = 0; i < TEST; i++)
	{
		if (i % 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}
	std::cout << std::endl <<  "Testing" << std::endl;
	for (int i = 0; i < TEST; i++)
	{
		std::cout << "Animal _type: " << animal[i]->getType() << std::endl;
		animal[i]->makeSound();
	}
	std::cout << std::endl << "Deconstructing" << std::endl;
	for (int i = 0; i < TEST; i++)
		delete(animal[i]);

// Deep Copy Test
	std::cout << std::endl << "------DEEP COPY TEST------" << std::endl;
	std::cout << "Constructing" << std::endl;

	Dog *a = new Dog();
	// Cat *a = new Cat();

	a->setIdea(0, "I should pee on that.");
	a->setIdea(1, "I should make noise.");
	a->setIdea(2, "I should sniff that.");
	a->setIdea(101, "Murder the humans");

	Dog *b = new Dog(*a);
	// Cat *b = new Cat(*a);

	std::cout << std::endl << "Testing a" << std::endl;
	std::cout << "The " << a->getType() << " a has the following ideas: " << std::endl;
	a->getIdeas();

	std::cout << "Deconstructing a" << std::endl;
	delete(a);

	std::cout << "Testing b" << std::endl;
	std::cout << "The " << b->getType() << " b has the following ideas: " << std::endl;
	b->getIdeas();

	std::cout << "Deconstructing b" << std::endl;
	delete(b);

	return 0;
}