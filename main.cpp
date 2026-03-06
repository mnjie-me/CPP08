/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:06:04 by mari-cruz         #+#    #+#             */
/*   Updated: 2026/03/05 13:49:36 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
    int arr[] = {8, 9, 2, 5, 3, 6, 4};
    std::vector<int> box(arr, arr + 7);

    int num1 = 5;
    int num2 = 1;
    
    try
    {
        std::vector<int>::iterator it = easyFind(box, num1);
        std::cout << "Found: " << *it << std::endl;       
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try
    {
        std::vector<int>::iterator it = easyFind(box, num2);
        std::cout << "Found: " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}