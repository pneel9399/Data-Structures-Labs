#include "set.h"
using namespace std;
// This class is linear big O
//BIG O: n
	set::set(size_type inital_capacity) // postcondition: empty set has been created
	{
		capacity = inital_capacity;
		used = 0;
		data = new value_type[capacity];
	}

	set::~set()// postcondition: set has been deallocated
	{
		capacity = 0;
		used = 0;
		delete data;
	}
	set::set(const set& s)// postcondition: a copy of source has been created
	{
		capacity = s.capacity;
		used = s.used;
		data = new value_type[capacity];
		for(int i =0; i < (int)used; i++)
			data[i] = s.data[i];
	}
	set& set:: operator=(const set& s)   // postcondition: 
	{
		value_type* new_data;
		if (this == &s)
		{
			return *this;
		}
		if (capacity != s.capacity)
		{
			new_data = new value_type[s.capacity];
			delete[] data;
			data = new_data;
			capacity = s.capacity;
		}
		used = s.used;
		copy(s.data, s.data + used, data);
		return *this;
	}
	void set::insert(const value_type& entry) // postcondition: entry is in the set
	{
		bool found = false;
		for (int i = 0; i < (int)used; i++)
		{
			if (data[i] == entry)
			{
				found = true;
				if (used == capacity)
					capacity++;
				break;
			}
		}
		if (!found)
		{
			data[used] = entry;
			used++;
		}
	}
	set::size_type set::size() const // postcondition: number of elements in the set has been returned
	{
		return used;
	}
	void set::remove(const value_type& target)
	{
		int index = -1;
		for (int i = 0; i < (int)used; i++)
		{
			if (data[i] == target)
				index = i;
				break;
		}
		for (int j = index; j < (int)used - 1; j++)
				{
					data[j] = data[j + 1];
				}
			used--;
		}
	std::ostream& operator<<(std::ostream& output, const set& s)
	{
		output << "{";
		for (unsigned int i = 0; i < (int)s.used; i++)
		{
			if(i < s.used - 1)
			output << s.data[i] << "," ;
			else
				output << s.data[i] << "}";
		}
		return output;
	}
	bool set::contains(const value_type& entry) const
	{
		bool found = false;
		for(int i =0; i < (int)used; i++)
		{
			if(data[i] == entry)
				found = true;
		}
		return found;
	}
	set set_union (const set& s1, const set& s2)//postcondition: union of s1 & s2 has been returned
	{
		set union_set;
		for(int i =0; i < s1.size(); i++)
		{
			union_set.insert(s1.data[i]);
		}
		for(int i =0; i < s2.size(); i++)
		{
			union_set.insert(s2.data[i]);
		}
		return union_set;
	}
	set set_intersection (const set& s1, const set& s2)// postcondition: intersection of s1 & s2 has been returned
	{
		set intersection_set;
		for(int i =0; i < s1.size(); i++)
		{
			if(s2.contains(s1.data[i]))
				intersection_set.insert(s1.data[i]);
		}
		return intersection_set;
	}
	set set_difference (const set& s1, const set& s2)//postcondition: difference of s1 - s2 has been returned
	{
		set difference_set;
		for(int i =0; i < s1.size(); i++)
		{
			if(!s2.contains(s1.data[i]))
				difference_set.insert(s1.data[i]);
		}
		return difference_set;
	}
	bool is_subset (const set& s1, const set& s2)// postcondition: returned whether s1 is a subset of s2
	{
		bool subset = false;
		for(int i =0; i < s1.size(); i++)
		{
			if(!s2.contains(s1.data[i]))
				subset = false;
			else
				subset = true;
		}
		return subset;
	}
	bool operator == (const set& s1, const set& s2)// postcondition: returned whether s1 & s2 are equal
	{
		bool same_set = false;
		if(is_subset(s1, s2) && is_subset(s2, s1))
			same_set = true;
		return same_set;
	}