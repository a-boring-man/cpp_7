/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:40:14 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/18 13:51:36 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

#define MAX_VAL 750
int	main( void ) {

/* 	Array< int > A(15);
	A[4] = 42;
	for (size_t i = 0; i < A.size(); i++)
	{
		cout << A[i] << endl;
	} */
	Array<float> A(4);
	Array<float> B = A;
	Array<std::string> strs(5);

    A[0] = 0.2;
	A[2] = 3.7;
    A[1] = 3;
    A[3] = 3.3;
	std::cout << A[2] << std::endl;
	std::cout << B[2] << std::endl;
	Array<float> &C = A; // If not secured, it creates a double free.
    A = C; // If not secured, it creates a segfault.
	B = A;
    std::cout << "B content \n\n";
    for (int i = 0; i < 4; i++)
    {
        std::cout << B[i] << "\n";
    }
	try
	{
		A[4] = 7;
	}
	catch (std::exception &e)
	{
		std::cout << "I tried to go to the 5th element of a 4 size of my array A --> " << e.what() << std::endl; 
	}
	strs[0] = "coucou";
	std::cout << strs[0] << std::endl;
	const std::string &H = strs[0];
	std::cout << H << std::endl;
	Array<char> crash(0);
	try
	{
		crash[0] = 'u';
	}
	catch (std::exception &e)
	{
		std::cout << "I tried to allocate a value on an empty array --> " << e.what() << std::endl; 
	}

	const Array<std::string> &Constman = strs;
	const std::string	&constval = Constman[0];
	std::cout << "\n\n CONST DISPLAY IS POSSIBLE : \n\n" << constval << "\n\n";

    Array<char> crash2(2);
    crash2[0] = 'u';
    crash2 = crash;
    try
    {
        std::cout << crash[0] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	Array<float> k;
	k = A;
	/* Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0; */
}