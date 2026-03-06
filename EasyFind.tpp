/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 12:47:32 by mari-cruz         #+#    #+#             */
/*   Updated: 2026/03/05 13:48:09 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

template <typename T>
typename T::iterator easyFind(T& box, int num)
{
    typename T::iterator iter = std::find(box.begin(), box.end(), num);
    if (iter == box.end())
        throw std::runtime_error("Value not found");
    return (iter);
}