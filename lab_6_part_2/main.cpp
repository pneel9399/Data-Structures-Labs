/*	Class:	CS 3305/07
 * 	Term: 	Fall 2019
 * 	Name:	Neel Patel
 * 	Instructor: Betty Kretlow
 * 	Lab: 	5
*/
#include "node1.h"
#include "checks_lists.h"
#include <iostream>

using namespace main_savitch_5;
using namespace std;

void list_print(node* head_ptr)
{
	node* cursor = head_ptr;
	cout<<"{ ";
	while(cursor != NULL)
	{
		cout<< cursor->data()<<", ";
		if(cursor->link() == NULL)
			cout<< cursor->data();
		cursor = cursor->link();
	}
	cout <<"}"<<endl;
}
int main()
{
	node* head_ptr = NULL;
	list_head_insert(head_ptr, 23.5);
	list_head_insert(head_ptr, 45.6);
	list_head_insert(head_ptr, 67.7);
	list_head_insert(head_ptr, 89.8);
	list_head_insert(head_ptr, 12.9);
	list_print(head_ptr);
	check_list1(head_ptr);
	
	node* head_ptr_1 = NULL;
	list_head_insert(head_ptr_1, 23.5);
	node* tail_ptr_1 = head_ptr_1;
	list_insert(tail_ptr_1, 45.6);
	tail_ptr_1 = tail_ptr_1->link();
	list_insert(tail_ptr_1, 67.7);
	tail_ptr_1 = tail_ptr_1->link();
	list_insert(tail_ptr_1, -123.5);
	tail_ptr_1 = tail_ptr_1->link();
	list_insert(tail_ptr_1, 89.8);
	tail_ptr_1 = tail_ptr_1->link();
	list_insert(tail_ptr_1, 12.9);
	tail_ptr_1 = tail_ptr_1->link();
	list_print(head_ptr_1);
	check_list2(head_ptr_1);
	
	
	node* head_ptr_2 = NULL;
	node* tail_ptr_2 = NULL;
	list_copy(head_ptr, head_ptr_2, tail_ptr_2);
	list_print(head_ptr_2);
	check_list1(head_ptr_2);
	list_print(tail_ptr_2);


	list_head_remove(head_ptr_1);
	list_print(head_ptr_1);
	check_list2B(head_ptr_1);
	
	list_remove(list_locate(head_ptr_1, 2));
	list_print(head_ptr_1);
	check_list2C(head_ptr_1);
}