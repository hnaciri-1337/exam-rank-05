/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:54:42 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/03/02 16:48:03 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(ASpell const &a)
{
	name = a.name;
	effects = a.effects;
}

ASpell & ASpell::operator=(ASpell const &a)
{
	name = a.name;
	effects = a.effects;
	return *this;
}

ASpell::ASpell(std::string const &n, std::string const &e)
{
	name = n;
	effects = e;
}

std::string const&ASpell::getName() const
{
	return name;
}

std::string const&ASpell::getEffects() const
{
	return effects;
}

void	ASpell::launch(ATarget const &t) const
{
	t.getHitBySpell(*this);
}

ASpell::~ASpell() {}
