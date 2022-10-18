/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:40:14 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/18 10:05:16 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

void	test_function_increment(int & i)
{
	i++;
}

void	test_function_display(const char* & s)
{
	cout << s << endl;
}

void	test_function_display(const int & s)
{
	cout << s << endl;
}

int	main( void ) {

	int			tab[6] = {0,1,2,3,4,5};
	const char* sentence[3] = {"salut", "comment", "vas-tu ?"};

	iter(tab, 6, test_function_increment);
	for (int i = 0; i < 6; i++){
		cout << tab[i] << endl;
	}
	iter(sentence, 3, test_function_display);
}