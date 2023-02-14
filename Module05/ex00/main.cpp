/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:33:39 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/13 02:36:30 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	Bureaucrat b = Bureaucrat("Bureaucrat", 151);
	Bureaucrat	c = Bureaucrat("wahedAkhor", 0);

	b = c;
	try
	{
		// b.incrementGrade();
		c.decrementGrade();
		if (b.getGrade() < 1 || c.getGrade() < 1)
			throw Bureaucrat::GradeTooHighException();
		if (b.getGrade() > 150 || c.getGrade() > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << b;
	std::cout << c;
	
}