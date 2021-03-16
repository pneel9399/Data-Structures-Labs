#include <iostream>    // Provides cout.
#include <string>      // Provides memcpy.
#include <cstdlib>     // Provides size_t.
#include "stack_pair.h" 
using namespace std;

int main()
{
	cout<<"Testing  push assertion functions."<<endl;
	stack_pair<int> stack_of_int_b(10);
	stack_of_int_b.push_a(1);
	stack_of_int_b.push_a(2);
	stack_of_int_b.push_a(3);
	stack_of_int_b.push_a(4);
	stack_of_int_b.push_a(5);
	stack_of_int_b.push_b(6);
	stack_of_int_b.push_b(7);
	stack_of_int_b.push_b(8);
	stack_of_int_b.push_b(9);
	stack_of_int_b.push_b(10);
	stack_of_int_b.print_stack();
	stack_of_int_b.push_b(11);
	system("pause");
}
