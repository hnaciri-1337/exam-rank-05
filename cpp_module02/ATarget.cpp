/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:01:45 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/03/02 16:47:39 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(ATarget const &a)
{
	type = a.type;
}

ATarget & ATarget::operator=(ATarget const &a)
{
	type = a.type;
	return *this;
}

ATarget::ATarget(std::string const &n)
{
	type = n;
}

std::string const&ATarget::getType() const
{
	return type;
}

void	ATarget::getHitBySpell(ASpell const &s) const
{
	std::cout << type << " has been " << s.getEffects() << "!\n";
}

ATarget::~ATarget() {}
