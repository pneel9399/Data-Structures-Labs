//Neel Patel
//CS 3305/07
//09-03-19
//Version: 2.5
//1.1: started simple patttern recursion
//1.2: updated pattern to match outputs and removed ostream parameter from due to complaier errors
//1.3: added loops from assignmnet post
//1.4: added cin statement to give user control over pattern
//2.1 added numbers() function
//2.2: updated for loops paramters to char from int
//2.3: added string to concatinte outputs
//2.4: fixed function to print correct sections
//2.5:added cin statement to give user control over printing sections
//This program converts temperature from Celsius to Fahrenheit and displays output in proper table manner.

#include <iostream>
using namespace std;

void pattern( int i, int n );
void numbers(ostream &outs, const string& prefix, unsigned int levels);
int main()
{
   int n;
   cout << "Enter number of pattern repetations: ";   
   cin >> n;
   pattern( 0, n );
   cout << "Enter number of sections( 2 section = 1.1 etc..): ";
   cin >> n;
   cout<<endl;
   numbers(cout, "THERBLIG  ", n);
}
void pattern( int i, int n )
{
   if ( n == 0 ) return;
   
   pattern( i, n / 2 );

   for ( int k = 0; k < i  ; k++ )
		cout << "  ";
   for ( int j = 0; j < n; j++ )
		cout << "* ";
   cout << endl;

   pattern( i + n / 2, n / 2 );
}
void numbers(ostream &outs, const string& prefix, unsigned int levels)
{
	string sections;
	if(levels == 0)
		outs<<prefix<<endl;
	else
	{
		for(char i = '1'; i <='9'; i++)
		{
			sections = (prefix + i) + ".";
			numbers(outs, sections, levels-1);
		}
	}
}