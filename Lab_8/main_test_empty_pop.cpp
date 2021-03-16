#include <iostream>    // Provides cout.
#include <string>      // Provides memcpy.
#include <cstdlib>     // Provides size_t.
#include "stack_pair.h" 
using namespace std;

int main()
{
	cout<<"Testing  pop assertion functions."<<endl;
	stack_pair<int> stack_of_int_b(10);
	stack_of_int_b.pop_a();
	system("pause");
}