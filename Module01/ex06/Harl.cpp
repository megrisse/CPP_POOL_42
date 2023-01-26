/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:05:18 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/26 20:52:21 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(){
	std::cout << "[ DEBUG ]" <<std::endl; 
	std::cout << " love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level){
	
	typedef void (Harl::*harl)();
	harl tab[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string mssgs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	for (; i < 4; i++){
		if (level == mssgs[i])
			break;
	}
	switch (i){
	case 0 :
		(this->*tab[i])();
		break;
	case 1 :
		(this->*tab[i])();
		break;
	case 2 :
		(this->*tab[i])();
		break;
	case 3 :
		(this->*tab[i])();
		break;
	default :
		std::cout << "MESSAGE NOT FOUND" << std::endl;
	}
}