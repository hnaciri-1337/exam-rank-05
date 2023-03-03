/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:35:45 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/03/02 17:34:51 by hnaciri-         ###   ########.fr       */
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
    data.insert(std::make_pair(a->getName(), a->clone()));
}

void				Warlock::forgetSpell(std::string n)
{
    data.erase(n);
}

void				Warlock::launchSpell(std::string n, ATarget const &r)
{
    std::map<std::string, ASpell *>::iterator it = data.find();
    if (it == data.end())
        return ;
    it->second->launch(r);
}

Warlock::~Warlock() {
    std::cout << name << ": My job here is done!\n";
}
