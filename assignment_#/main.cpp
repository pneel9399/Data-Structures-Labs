#include <iostream>
using namespace std;

void pattern(ostream& outs, int left, int length )
{
   if ( length == 0 ) return;

   outs << pattern( left, length / 2 );                            // "Half pattern" above

   for ( int i = 0; i < left  ; i++ )
		outs<<"  ";
   for ( int i = 0; i < length; i++ )
		outs<<"* ";        // Central string
   outs<<endl;

   outs<<pattern( left + length / 2, length / 2 );   
cout<<outs;            // "Half pattern" below
}

int main()
{
   int n;
   string outs;
   cout << "Enter n (a power of 2): ";   cin >> n;
   pattern( outs, 0, n );
}