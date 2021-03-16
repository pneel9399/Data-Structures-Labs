#ifndef STACK_PAIR_H
#define STACK_PAIR_HclTabCtrl
#include <cstdlib>

template <class T>
class stack_pair
{
public:
	typedef T value_type;
	typedef std::size_t size_type;
	static const size_type DEFAULT_CAPACITY = 30;
	
	//Constructor
	stack_pair(size_type intial_capacity = DEFAULT_CAPACITY);//constructor that allows size change
	stack_pair();//default constructor
	
	//Modification
	T pop_a();
	T pop_b();
	
	void push_a(T item);
	void push_b(T item);
	
	size_t size_a();//returns size
	size_t size_b();
	
	bool is_empty_a() const;//checks if stack is empty
	bool is_empty_b() const;
	
	bool is_full_a() const;//checks of stack is full
	bool is_full_b() const;
	
	void print_stack() const;//prints stack
	
	bool stack_contains(T item) const;//checks if item is there in stack and returns boolean 
private:
	T* data;
	size_type cursor_a;
	size_type cursor_b;
	size_type capacity;
	size_type used;
};
#include "stack_pair.template"


#endif // STACK_PAIR_H