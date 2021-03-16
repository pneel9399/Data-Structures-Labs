#include "binary_tree.h"

using namespace myBinaryTree;

template<class T>
binary_tree<T>::binary_tree()
{
	tree_size =0;
}
template<class T>
void binary_tree<T>::create_first_node( const T& entry)
{
	if(tree_size == 0)
	{
		arr[0] = entry;
		is_present[0] = true;
		tree_size = 1;
		current = 0;
	}
	else
		std::cout<<"The root node already exist."<<std::endl;
}
template<class T>
void binary_tree<T>::shift_to_root()
{
	if(size() > 0)
		current =0;
}
template<class T>
void binary_tree<T>::shift_up()
{
	if(has_parent())
		current =(current -1)/2;//using formulas form powerpoint
}

template<class T>
void binary_tree<T>::shift_left()
{
	if(has_left_child())
		current = (2 * current) + 1;//using formulas form powerpoint
}

template<class T>
void binary_tree<T>::shift_right()
{
	if(has_right_child())
		current = (2 * current )+ 2;//using formulas form powerpoint
}

template<class T>
void binary_tree<T>::change(const T& entry)
{
	if(size() > 0)
		arr[current] = entry;
}

template<class T>
void binary_tree<T>::add_left(const T& entry)
{
	if(size() > 0 && !has_left_child())
	{
		arr[2*current+1] = entry;
		is_present[2*current+1] = true;
		tree_size ++;//increase size
	}
}

template<class T>
void binary_tree<T>::add_right(const T& entry)
{
	if(size() > 0 && !has_right_child())
	{
		arr[2*current+2] = entry;
		is_present[2*current+2] = true;
		tree_size ++;
	}
}

template <class T>
size_t binary_tree<T>::size() const
{
	return tree_size;
}

template <class T>
T binary_tree<T>::retrieve() const
{
	if(size()>0)
		return arr[current];
}
template <class T>
int binary_tree<T>::return_current()
{
	return current;
}
template <class T>
bool binary_tree<T>::has_parent() const
{
	if(size()> 0 && current != 0)
		return true;
	return false;
}

template <class T>
bool binary_tree<T>::has_left_child() const
{
	if(size() > 0 && is_present[(2 * current +1)])
		return true;
	return false;
}

template <class T>
bool binary_tree<T>::has_right_child() const
{
	if(size() > 0 && is_present[(2 * current + 2)])
		return true;
	return false;
}

template <class T>
void binary_tree<T>::inorder(int index) const
{
	if( index < tree_size  && is_present[index])
	{
		inorder( 2 *index + 1);
		std::cout<< arr[index]<< "  " ;
		inorder(2 * index + 2);
	}
}