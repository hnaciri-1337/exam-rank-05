/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:01:09 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/03/02 17:10:07 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook
{
private:
	std::map<std::string, ASpell *>	data;
	SpellBook(SpellBook const &a);
	SpellBook &operator=(SpellBook const &a);
public:
	SpellBook();
	void	learnSpell(ASpell *a);
	void	forgetSpell(std::string const &n);
	ASpell	*createSpell(std::string const &n);
	~SpellBook();
};

#endif