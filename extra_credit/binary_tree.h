#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <cstdlib>
#include <vector>
#include <iostream>
using namespace std;
namespace myBinaryTree
{
template <class T>
class binary_tree
{
	T arr[1000];
	bool is_present[1000];
	
	int current;
	int tree_size;
public:
	binary_tree();
	void create_first_node(const T& entry);
	
	void shift_to_root();
	void shift_up();
	void shift_left();
	void shift_right();
	
	void change(const T& new_entry);
	
	void add_left(const T& entry);
	void add_right(const T& entry);
	
	size_t size() const;
	T retrieve() const;
	int return_current();
	
	bool has_parent() const;
	bool has_left_child() const;
	bool has_right_child() const;
	void inorder(int index) const;
};
}

#endif