/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 13:14:45 by mari-cruz         #+#    #+#             */
/*   Updated: 2026/03/06 14:24:25 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
    
        unsigned int N;
        std::vector<int> box;

    public:

        Span();
        Span(unsigned int number);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(int N);
        int shortestSpan();
        int longestSpan();

        class Full : public std::exception
        {
            public:
                
                const char* what() const throw()
                {
                    return ("Span is full");
                }
        };
        class Small : public std::exception
        {
            public:
                
                const char* what() const throw()
                {
                    return ("Span too small");
                }
        };
};