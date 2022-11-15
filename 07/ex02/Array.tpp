/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student,21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:53:42 by ldione            #+#    #+#             */
/*   Updated: 2022/11/04 02:47:31 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
Array<T>::Array() : length(0), arr(NULL)
{
}

template<typename T>
Array<T>::Array(size_t size) : length(size)
{
	this->arr = new T[size]();
}

template<typename T>
Array<T>::Array(Array<T>& res) : length(0), arr(NULL)
{
	if (res.length > 0)
	{
		this->arr = new T[res.length]();
		for (size_t i = 0; i < res.length; i++)
		{
			this->arr[i] = res[i];
		}
		this->length = res.length;
	}
}

template<typename T>
Array<T>::~Array()
{
	if (this->length > 0)
		delete[] this->arr;
}

template<typename T>
const char*	Array<T>::outOfBounds::what() const throw()
{
	return ("Error: index out of bounds\n");
}

template<typename T>
Array<T>&  Array<T>::operator=(const Array<T>& res)
{
	if (this->length > 0)
		delete[] this->arr;
	this->arr = NULL;

	if (res.length > 0)
	{
		this->arr = new T[res.length]();
		for (size_t i = 0; i < res.length; i++)
			arr[i] = res[i];
		this->length = res.length;
	}
	return (*this);
}

template<typename T>
T&	Array<T>::operator[](size_t index)
{
	if (index >= this->length)
		throw Array::outOfBounds();
	return (this->arr[index]);
}

template<typename T>
const T&	Array<T>::operator[](size_t index) const
{
	return (this->arr[index]);
}

template<typename T>
size_t	Array<T>::size( void ) const
{
	return (this->length);
}