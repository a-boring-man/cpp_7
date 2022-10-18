/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:30:19 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/18 13:44:59 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

using	std::cout;
using	std::endl;
using	std::string;

template < typename T >
class Array
{

	public:

		class out_of_range : public std::exception{
			public:
				virtual const char* what() const throw(){return ("index out of range");} 
		};

		Array<T>() : _size(0) {
			this->_array = new T[0];
		}

		Array<T>(unsigned int n) : _size(n) {
			this->_array = new T[n];
			for (size_t i = 0; i < this->_size; i++)
			{
				this->_array[i] = T();
			}
		}

		Array<T>( Array const & src ) : _size(src._size) {
			this->_array = new T[this->_size];
			for (size_t i = 0; i < this->_size; i++)
			{
				this->_array[i] = src._array[i];
			}
		}
		~Array<T>() {
			delete[] this->_array;
		}

		Array<T> &		operator=( Array<T> const & rhs ) {
			if ( this != &rhs )
			{
				delete[] this->_array;
				this->_size = rhs._size;
				this->_array = new T[this->_size];
				for (size_t i = 0; i < this->_size; i++)
				{
					this->_array[i] = rhs._array[i];
				}
			}
			return *this;
		}
		
		T& operator[](size_t idx) {
			if (idx >= this->_size)
				throw Array<T>::out_of_range();
			return (this->_array[idx]);
		}
    	const T& operator[](size_t idx) const {
			if (idx >= this->_size)
				throw Array<T>::out_of_range();
			return (this->_array[idx]);
		}

		unsigned int	size( void ) const {
			return (this->_size);
		}

	private:

		T*				_array;
		unsigned int	_size;

};
