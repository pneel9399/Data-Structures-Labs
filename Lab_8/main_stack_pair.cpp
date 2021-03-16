#include <iostream>    // Provides cout.
#include <string>      // Provides memcpy.
#include <cstdlib>     // Provides size_t.
#include "stack_pair.h" 
using namespace std;

int main()
{
	stack_pair<int> stack_of_int(16);
	bool test = false;
	cout<<"Testing push and pop functions."<<endl;
	stack_of_int.push_a(201);
	stack_of_int.push_b(101);
	stack_of_int.push_a(202);
	stack_of_int.push_b(102);
	stack_of_int.print_stack();
	cout<<stack_of_int.pop_b()<< " poped from B"<<endl;
	cout<<stack_of_int.pop_a()<<" poped from A"<<endl;
	if(stack_of_int.stack_contains(202))
	{
		test = false;
	}
	else
		cout<<"Test for pop_a() passed."<<endl;
	if(stack_of_int.stack_contains(102))
	{
		test = false;
	}
	else
		cout<<"Test for pop_b() passed."<<endl;
	stack_of_int.print_stack();
	cout<<"******************Test completed*************"<<endl;
	cout<<"Testing  is_full_a() and is_full_b() functions."<<endl;
	stack_pair<int> stack_of_int_b(10);
	stack_of_int_b.push_a(1);
	stack_of_int_b.push_a(2);
	stack_of_int_b.push_a(3);
	stack_of_int_b.push_a(4);
	stack_of_int_b.push_a(5);
	stack_of_int_b.push_b(10);
	stack_of_int_b.push_b(9);
	stack_of_int_b.push_b(8);
	stack_of_int_b.push_b(7);
	stack_of_int_b.push_b(6);
	if(stack_of_int_b.is_full_a())
	{
		cout<<"is_full_a() is full. Test Passed."<<endl;
		test = true;
	}
	if(stack_of_int_b.is_full_b())
	{
		cout<<"is_full_b() is full. Test Passed."<<endl;
		test = true;
	}
		cout<<"******************Test completed*************"<<endl;
	cout<<"Testing  push assertion functions."<<endl;
	stack_of_int_b.push_b(11);
	if(stack_of_int_b.is_full_b())
		test = true;
	cout<<"******************Test completed*************"<<endl;
	cout<<"Testing pop assertion functions in empty stack."<<endl;
	stack_pair<int> stack_of_int_c(10);
	stack_of_int_c.pop_a();
	if(stack_of_int_c.is_empty_a())
		test = true;
	if(test)
		cout<<"All Test Passed."<<endl;
	else
		cout<<"Test Failed"<<endl;
}