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

int main()
{
	std::cout << "Constructing" << std::endl;
	
	const Animal	*animal = new Animal();
	
	std::cout << std::endl << "Testing" << std::endl;
	std::cout << "Animal _type: " << animal->getType() << std::endl;
	animal->makeSound();
	std::cout << std::endl << "Deconstructing" << std::endl;
	delete animal;

	std::cout << std::endl << "------" << std::endl << std::endl;
	std::cout << "Constructing" << std::endl;
	
	const Animal	*kitty = new Cat();

	std::cout << std::endl << "Testing" << std::endl;
	std::cout << "Cat _type: " << kitty->getType() << std::endl;
	kitty->makeSound();
	std::cout << std::endl << "Deconstructing" << std::endl;
	delete kitty;

	std::cout << std::endl << "------" << std::endl << std::endl;
	std::cout << "Constructing" << std::endl;
	
	const Animal	*puppy = new Dog();
	
	std::cout << std::endl << "Testing" << std::endl;
	std::cout << "Dog _type: " << puppy->getType() <<std::endl;
	puppy->makeSound();
	std::cout << std::endl << "Deconstructing" << std::endl;
	delete puppy;

	std::cout << std::endl << "------" << std::endl;
	std::cout << std::endl << "Constructing" << std::endl;

	const WrongAnimal	*wrong_animal = new WrongAnimal();

	std::cout << std::endl << "Testing" << std::endl;
	std::cout << "Animal _type: " << wrong_animal->getType() << std::endl;
	wrong_animal->makeSound();
	std::cout << std::endl << "Deconstructing" << std::endl;
	delete wrong_animal;

	std::cout << std::endl << "------" << std::endl << std::endl;
	std::cout << "Constructing" << std::endl;

	const WrongAnimal	*wrong_cat = new WrongCat();

	std::cout << std::endl << "Testing" << std::endl;
	std::cout << "WrongCat _type: " << wrong_cat->getType() <<std::endl;
	wrong_cat->makeSound();
	std::cout << std::endl << "Deconstructing" << std::endl;
	delete wrong_cat;

	std::cout << std::endl << "------" << std::endl << std::endl;
	std::cout << "Constructing" << std::endl;

	const WrongCat	*wrong_cat2 = new WrongCat();

	std::cout << std::endl << "Testing" << std::endl;
	std::cout << "WrongCat _type: " << wrong_cat2->getType() <<std::endl;
	wrong_cat2->makeSound();
	std::cout << std::endl << "Deconstructing" << std::endl;
	delete wrong_cat2;

	return 0;
}
