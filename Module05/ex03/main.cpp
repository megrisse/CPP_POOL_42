/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:33:39 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/18 01:25:45 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {

	Bureaucrat b = Bureaucrat("Bureaucrat", 73);
	Bureaucrat	c = Bureaucrat("wahedAkhor", 73);
	
	b = c;
	ShrubberyCreationForm	f = ShrubberyCreationForm("ShrubberyCreationForm");
	ShrubberyCreationForm	d = ShrubberyCreationForm("GhaHbil");

	RobotomyRequestForm	r = RobotomyRequestForm("RobotomyRequestForm");
	RobotomyRequestForm	g = RobotomyRequestForm("GhaHbil");
	
	PresidentialPardonForm	p = PresidentialPardonForm("PresidentialPardonForm");
	PresidentialPardonForm	s = PresidentialPardonForm("GhaHbil");
	Intern	I;

	I.makeForm(f.getName(), f.getTarget());

	// f.beSigned(b);
	// d.beSigned(c);
	// r.beSigned(b);
	// g.beSigned(c);
	// p.beSigned(b);
	// s.beSigned(c);
	// b.signForm(f);
	// c.signForm(d);
	// b.signForm(r);
	// c.signForm(g);
	// b.signForm(p);
	// c.signForm(s);
	// f.execute(b);
	// r.execute(b);
	// p.execute(b);

	try
	{
		Intern	in;
		AForm *l;
		l = in.makeForm("robotomy request", "bender");
		l->beSigned(b);
		l->execute(b);
		
		delete l;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << b;
	std::cout << c;
	
}