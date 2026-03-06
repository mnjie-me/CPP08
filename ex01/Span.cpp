/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 13:30:14 by mari-cruz         #+#    #+#             */
/*   Updated: 2026/03/06 14:49:42 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) {std::cout << "Default" << std::endl;};

Span::Span(unsigned int number) : N(number)
{
    std::cout << "Constructor" << std::endl;
}

Span::Span(const Span& other)
{
    this->N = other.N;
    std::cout << "Copy" << std::endl;
}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        this->N = other.N;
    }
    std::cout << "Assigment" << std::endl;
    return (*this);
}

Span::~Span() {std::cout << "Destructor" << std::endl;}

void Span::addNumber(int num)
{
    if (box.size() >= N)
        throw Full();
    else
        box.push_back(num);
}

int Span::shortestSpan()
{
    if (box.size() < 2)
        throw Small();
        
    std::vector<int>temp = box;
    std::sort(temp.begin(), temp.end());

    int minSpan = temp[1] - temp[0];
    unsigned int i = 0;
    while (i < temp.size() - 1)
    {
        int span = temp[1 + i] - temp[i];
        if (span < minSpan)
            minSpan = span;
        i++;
    }
    return (minSpan);
}

int Span::longestSpan()
{
    if (box.size() < 2)
        throw Small();
    
    int minN = *std::min_element(box.begin(), box.end());
    int maxN = *std::max_element(box.begin(), box.end());
    int maxSpan = maxN - minN;
    return (maxSpan);
}