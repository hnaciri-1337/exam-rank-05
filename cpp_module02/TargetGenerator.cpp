/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:05:37 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/03/02 17:17:10 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

void	TargetGenerator::learnTargetType(ATarget *a) 
{
	data.insert(std::make_pair(a->getType(), a->clone()));
}

void	TargetGenerator::forgetTargetType(std::string const &n) 
{
	std::map<std::string, ATarget *>::iterator it = data.find(n);
	if (it == data.end())
		return ;
	delete it->second;
	data.erase(n);
}

ATarget	*TargetGenerator::createTarget(std::string const &n) 
{
	std::map<std::string, ATarget *>::iterator it = data.find(n);
	if (it == data.end())
		return (NULL);
	return it->second;
}

TargetGenerator::~TargetGenerator()
{
	for (std::map<std::string, ATarget *>::iterator it = data.begin(); it !=  data.end(); it++)
		delete it->second;
	data.clear();
}
