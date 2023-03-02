/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:47:58 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/03/02 16:47:47 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ATARGET_HPP
#define ATARGET_HPP

class ASpell;

class ATarget
{
protected:
	std::string type;
public:
	ATarget();
	ATarget(ATarget const &a);
	ATarget & operator=(ATarget const &a);
	ATarget(std::string const &t);
	std::string const	&getType() const;
	virtual ATarget	*clone() const = 0;
	void getHitBySpell(ASpell const &s) const;
	virtual ~ATarget();
};

#include "ASpell.hpp"

#endif

