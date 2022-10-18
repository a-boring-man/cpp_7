/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:38:46 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/18 09:58:33 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

using	std::cout;
using	std::endl;
using	std::string;

template	< typename T >
void	iter(T* array, int lengh, void (&f)(T&)){

	for (int i = 0; i < lengh; i++)
	{
		f(array[i]);
	}
}

template	< typename T >
void	iter(const T* array, int lengh, void (&f)(const T&)){

	for (int i = 0; i < lengh; i++)
	{
		f(array[i]);
	}
}
