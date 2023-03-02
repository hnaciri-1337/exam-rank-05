/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:05:37 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/03/02 17:14:03 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {}

void	SpellBook::learnSpell(ASpell *a) 
{
	data.insert(std::make_pair(a->getName(), a->clone()));
}

void	SpellBook::forgetSpell(std::string const &n) 
{
	std::map<std::string, ASpell *>::iterator it = data.find(n);
	if (it == data.end())
		return ;
	delete it->second;
	data.erase(n);
}

ASpell	*SpellBook::createSpell(std::string const &n) 
{
	std::map<std::string, ASpell *>::iterator it = data.find(n);
	if (it == data.end())
		return (NULL);
	return it->second;
}

SpellBook::~SpellBook()
{
	for (std::map<std::string, ASpell *>::iterator it = data.begin(); it !=  data.end(); it++)
		delete it->second;
	data.clear();
}
