/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:35:48 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/03/02 17:37:30 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class Warlock
{
private:
	std::string name;
	std::string title;
	Warlock();
	Warlock(Warlock const &a);
	Warlock & operator=(Warlock const &a);
public:
	Warlock(std::string const &n, std::string const &t);
	std::string const	&getName() const;
	std::string const	&getTitle() const;
	void				setTitle(std::string const &t);
	void				introduce() const;
	~Warlock();
};

#endif
