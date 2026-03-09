/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:20:20 by mari-cruz         #+#    #+#             */
/*   Updated: 2026/03/09 12:46:19 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;

    std::cout << "MUTANT TEST" << std::endl;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Print top---------" << std::endl;
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Print size---------" << std::endl;
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "Print list---------" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);


    std::list<int> lst;
    
    std::cout << std::endl;
    std::cout << "LIST TEST" << std::endl;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << "Print top---------" << std::endl;
    std::cout << lst.back() << std::endl;
    lst.pop_back();
    std::cout << "Print size---------" << std::endl;
    std::cout << lst.size() << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    std::list<int>::iterator lit = lst.begin();
    std::list<int>::iterator lite = lst.end();
    ++lit;
    --lit;
    std::cout << "Print list---------" << std::endl;
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }
    return 0;
}