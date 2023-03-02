/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:47:58 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/03/02 16:47:58 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ASPELL_HPP
#define ASPELL_HPP

class ATarget;

class ASpell
{
protected:
	std::string name;
	std::string effects;
public:
	ASpell();
	ASpell(ASpell const &a);
	ASpell & operator=(ASpell const &a);
	ASpell(std::string const &n, std::string const &e);
	std::string const	&getName() const;
	std::string const	&getEffects() const;
	virtual ASpell	*clone() const = 0;
	void	launch(ATarget const &t) const;
	virtual ~ASpell();
};

#include "ATarget.hpp"

#endif

