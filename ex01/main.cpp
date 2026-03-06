/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 14:38:47 by mari-cruz         #+#    #+#             */
/*   Updated: 2026/03/06 14:54:14 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    Span huge(20000);

    int i = 0;
    while (i < 20000)
    {
        huge.addNumber(i);
        i++;
    }
    std::cout << huge.shortestSpan() << std::endl;
    std::cout << huge.longestSpan() << std::endl;
}