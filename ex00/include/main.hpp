/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:38:46 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/17 13:44:26 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

using	std::cout;
using	std::endl;
using	std::string;

template	< typename T >
T const & min(const T & a, const T & b) {
	return ((a<b) ? a : b);
}

template	< typename T >
T const & max(const T & a, const T & b) {
	return ((a>b) ? a : b);
}

template	< typename T >
void	swap(T & a, T & b) {
	T	tmp = a;
	a = b;
	b = tmp;
}
