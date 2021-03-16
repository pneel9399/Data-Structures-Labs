#include <cstdlib>
#include <iostream>
#include <set>
#include <algorithm>
#include "node2.h"
#include "bag5.h"

using namespace std;



// PROTOTYPE for a function used by this demonstration program
template <class Item, class SizeType, class MessageType>
void get_items(bag<Item>& collection, SizeType n, MessageType description)
// Postcondition: The string description has been written as a prompt to the
// screen. Then n items have been read from cin and added to the collection.
// Library facilities used: iostream, bag4.h
{
    Item user_input; // An item typed by the program's user
    SizeType i;

    cout << "Please type " << n << " " << description;
    cout << ", separated by spaces.\n";
    cout << "Press the <return> key after the final entry:\n";
    for (i = 1; i <= n; ++i)
    {
        cin >> user_input;
        collection.insert(user_input);
    }
    cout << endl;
}

int main()
{
    
    bag<int> bag_of_int;
	bag_of_int.insert(7);
	bag_of_int.insert(6);
	bag_of_int.insert(5);
	bag_of_int.insert(4);
	bag_of_int.insert(3);
	bag_of_int.insert(2);
	bag_of_int.insert(1);
	bag_of_int.print_value_range(2, 5);
	bag_of_int.print_value_range(2, 78);
	bag_of_int.print_value_range(2, 1);
	bag_of_int.print_value_range(8, 5 );
	bag_of_int.insert(7);
	bag_of_int.insert(6);
	bag_of_int.insert(5);
	bag_of_int.insert(4);
	bag_of_int.insert(3);
	bag_of_int.insert(2);
	bag_of_int.insert(1);
	cout<<"Bag with repetations: " ;
	for(bag<int>::iterator cursor = bag_of_int.begin(); cursor != bag_of_int.end(); ++cursor)
        cout<<*cursor<< " ";
	cout<<endl;
	bag_of_int.remove_repetitions();
	cout<<"Bag after remove_repetations is called: " ;
	for(bag<int>::iterator cursor = bag_of_int.begin(); cursor != bag_of_int.end(); ++cursor)
        cout<<*cursor<< " ";
	cout<<endl;
	return EXIT_SUCCESS;
}