/*	Class:	CS 3305/07
 * 	Term: 	Fall 2019
 * 	Name:	Neel Patel
 * 	Instructor: Betty Kretlow
 * 	Lab: 	4
*/
#include "sequence2.h"
#include <cstdlib>
#include <iostream>
#include <cassert>
#include <algorithm>
#include <string>
namespace main_savitch_4
{
sequence::sequence(size_type initial_capacity)
{
	data = new value_type[initial_capacity];
	used = 0;
	current_index = 0;
	capacity = initial_capacity;
}
sequence::sequence(const sequence& source)
{
	data = new value_type[source.capacity];
	used = source.used;
	current_index = source.current_index;
	capacity = source.capacity;
	for(size_type i = 0; i <used; i++)
	{
		data[i] = source.data[i];
	}
}
sequence::~sequence( )
{
	delete [] data;
}
// MODIFICATION MEMBER FUNCTIONS
void sequence::resize(size_type new_capacity)
{
	value_type *large_data;
	if(new_capacity == capacity)
	{
		return; 
	}
	if(new_capacity < used)
	{
		new_capacity = used;
	}
	large_data = new value_type[new_capacity];
	for(size_type i =0; i < used; i++)
	{
		large_data[i] = data[i];
	}
	delete [] data;
	data = large_data;
	capacity = new_capacity;
}
void sequence::start( )
{
	current_index = 0;
}
void sequence::advance( )
{
	if(is_item())
	{
		current_index+=1;
	}
}
void sequence::insert(const value_type& entry)
{
	if(used >= capacity)
	{
		resize((capacity + 1)*1.1);
	}
	if(!is_item())
		current_index = 0;
	if(used >= 0)
	{
		for(int i = used; i>(int)current_index; --i)
		{
			data[i]=data[i-1];
		}
	}
	data[current_index] = entry;
	used+=1;
}
void sequence::attach(const value_type& entry)
{
	if (used >= capacity)
	{   
		resize(capacity + 1 *(1.1));
	}
	if(!is_item())
	{
		current_index = used;
		data[current_index] = entry;
		used++;
	}
	else
	{
		for(int i =(int) used; i > (int)current_index+1; i--)
		{
			data[i] = data[i-1];
		}   
		data[current_index +1] = entry;
		used++;
		current_index++;
	}

}
void sequence::remove_current( )
{
	//  assert(size()>0);
	for(size_type i = current_index; i<used; i++)
	{
		data[i]=data[i+1];
	}
	used-=1;
}
void sequence::operator =(const sequence& source)//failing here
		{
	value_type *new_data;

	if(this == &source)
		return;
	if(capacity != source.capacity)
	{
		new_data = new value_type[source.capacity];
		delete [] data;
		data = new_data;
		capacity = source.capacity;
	}
	used = source.used;
	current_index = source.current_index;
	std::copy(source.data, source.data+used, data);
		}
// CONSTANT MEMBER FUNCTIONS
sequence::size_type sequence::size( ) const
{
	return used;
}
bool sequence::is_item( ) const
{
	return(current_index < used);
}
sequence::value_type sequence::current( ) const
{
	return (data[current_index]);
}

}    