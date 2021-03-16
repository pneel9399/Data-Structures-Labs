#include <string>
#include "bst.h"
#include "bintree.h"
#include <list>

using namespace std;

int rnd() {
    return rand() % 10000;
}

template <class T>
void process(binary_tree_node<T>*root, list<T>& new_list)
{
	if(root != NULL)
	{
		process(root->left(), new_list);
		new_list.push_back(root->data());
		process(root->right(), new_list);
	}
}
int main() 
{
   binary_search_tree<int> bst;
   bst.insert(10);
   bst.insert(7);
   bst.insert(3);
   bst.insert(8);
   bst.insert(1);
   bst.insert(9);
   bst.insert(2);
   bst.insert(4);
   bst.insert(5);
   bst.insert(6);
   binary_tree_node<int> *root = bst.get_root();
   list<int> new_list;
   process(root, new_list);
   while(!new_list.empty())
   {
	   cout<<new_list.front();
	   new_list.pop_front();
	   if(!new_list.empty())
		   cout<<", ";
   }
}

