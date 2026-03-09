/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:15:22 by mari-cruz         #+#    #+#             */
/*   Updated: 2026/03/09 12:33:31 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <iterator>

template<typename T>

class MutantStack : public std::stack<T>
{
    public:

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {return this->c.begin();}
        iterator end() {return this->c.end();}
};