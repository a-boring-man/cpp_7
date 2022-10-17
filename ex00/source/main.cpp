/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:40:14 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/17 13:47:01 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

int	main( void ) {

	int a = 42;
	int	b = 78;
	float	c = 42.42;
	float 	d = 56.4;
	
	cout << "min(42, 78) : ";
	cout << min(a, b) << endl;
	cout << "min(42.42, 56.4) : ";
	cout << min(c, d) << endl;
	cout << "max(42, 78) : ";
	cout << max(a, b) << endl;
	cout << "max(42.42, 56.4) : ";
	cout << max(c, d) << endl;
	cout << "display a, b, c, d" << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << "swap(a, b)" << endl;
	swap(a, b);
	cout << "swap(c, d)" << endl;
	swap(c, d);
	cout << "display a, b, c, d" << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
}