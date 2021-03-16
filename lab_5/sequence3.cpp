/*	Class:	CS 3305/07
 * 	Term: 	Fall 2019
 * 	Name:	Neel Patel
 * 	Instructor: Betty Kretlow
 * 	Lab: 	5
*/
#include "sequence3.h"
#include <iostream>
using namespace std;

namespace main_savitch_5 
{
	sequence::sequence()//default constructor
	{
		head_ptr = NULL;
		tail_ptr = NULL;
		cursor = NULL;
		precursor = NULL;
		many_nodes = 0;
	}
	sequence::~sequence() // destructor
	{
		if(head_ptr != NULL)
			list_clear( head_ptr);
	}
	sequence::sequence(const sequence &source) //copy constructor
	{
		many_nodes = source.many_nodes;
		list_copy(source.head_ptr, head_ptr, tail_ptr);
		if(source.precursor == NULL) // check if there is value in precursor
		{
			cursor = head_ptr;
			precursor = NULL;
		}
		else 
		{
			node *current = source.head_ptr;
			size_type count = 1;
			while (current != source.precursor) // search for source precursor
			{
				count++;
				current = current->link();
			}
			precursor = list_locate(head_ptr, count);
			cursor = precursor->link();
		}
    }
    void sequence::operator=(const sequence &source) //copy sequence
	{
	if (this != &source)//check if source is equal to new sequence
	{
		if(size() > 0)//check if there is something in sequence and clears it
		list_clear(head_ptr);
		list_copy(source.head_ptr, head_ptr, tail_ptr);
		many_nodes = source.many_nodes;
		if (source.precursor == NULL) //check is there is something in sequence
			{
				precursor = NULL;
				cursor = head_ptr;
			}
			else//precursor not equals NULL
				{
					node *tmp_ptr = source.head_ptr;
					size_type cnt = 1;
					while (tmp_ptr != source.precursor) //search for source precursor
					{
						tmp_ptr = tmp_ptr->link();
						cnt++;
					}
				precursor = list_locate(head_ptr, cnt);
				cursor = precursor->link();
				}
	}
}//end of operator+=
	void sequence::start() //start sequence
	{
		cursor = head_ptr;
		precursor = NULL;
	}
	void sequence::advance() // move pointer to next link
	{
		if(is_item())
			{
				precursor = cursor;
				cursor = cursor->link();
			}
	}
	void sequence::insert(const value_type& entry) //insert entry before cursor
	{
		if(!is_item())//check if there is anything in sequence
			start();// if nothing is there then start new sequence
	if(cursor == head_ptr) // check if cursor is present at head pointer
		{
			list_head_insert(head_ptr, entry);
			cursor = head_ptr;
			if(many_nodes == 0)
				tail_ptr = head_ptr;
		}
		else // if cursor is somewhere else
		{
			node* temporary = head_ptr;
			while(temporary != precursor)
			{
				temporary = temporary->link();
			}
			list_insert(temporary, entry);
			if(temporary == tail_ptr)
				tail_ptr = tail_ptr->link();
			cursor = precursor->link();
		}
		++many_nodes;
	}
	void sequence::attach(const value_type& entry)// attach entry after cursor 
	{
		if(is_item())// assert is_item()
		{
			precursor = cursor;
			list_insert(cursor, entry);
			cursor = cursor->link();
		}
		else
		{
			if(head_ptr == NULL)
			{
				list_head_insert(head_ptr, entry);
				cursor = head_ptr;
				precursor = NULL;
			}
			else
			{
				precursor = list_locate(head_ptr, size());
				list_insert(precursor, entry);
				cursor = precursor->link();
			}
		}
		many_nodes++;
	}
	void sequence::remove_current() // remove current enrty from the sequence
	{
		if(is_item()) // assert is_item()
			{
				if (cursor == head_ptr)
					{
					list_head_remove(head_ptr);
					cursor = head_ptr;
					}
			else
				{
					list_remove(precursor);
					cursor = precursor->link();
				}
			--many_nodes;
			}
	}
    sequence::value_type sequence::current() const 
	{
		return cursor->data();
    }
}