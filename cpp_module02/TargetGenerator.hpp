/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:01:09 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/03/02 17:16:36 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class TargetGenerator
{
private:
	std::map<std::string, ATarget *>	data;
	TargetGenerator(TargetGenerator const &a);
	TargetGenerator &operator=(TargetGenerator const &a);
public:
	TargetGenerator();
	void	learnTargetType(ATarget *a);
	void	forgetTargetType(std::string const &n);
	ATarget	*createTarget(std::string const &n);
	~TargetGenerator();
};

#endif