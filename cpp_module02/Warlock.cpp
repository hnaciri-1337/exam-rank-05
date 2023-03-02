/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:35:45 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/03/02 17:13:01 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &n, std::string const &t)
{
    name = n;
    title = t;
    std::cout << name << ": This looks like another boring day.\n";
}

std::string const	&Warlock::getName() const
{
    return name;
}
std::string const	&Warlock::getTitle() const
{
    return title;
}
void				Warlock::setTitle(std::string const &t)
{
    title = t;
}

void				Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void				Warlock::learnSpell(ASpell *a)
{
    data.learnSpell(a);
}

void				Warlock::forgetSpell(std::string n)
{
    data.forgetSpell(n);
}

void				Warlock::launchSpell(std::string n, ATarget const &r)
{
    ASpell  *ptr = data.createSpell(n);
    if (ptr == NULL)
        return ;
    ptr->launch(r);
}

Warlock::~Warlock() {
    std::cout << name << ": My job here is done!\n";
}
