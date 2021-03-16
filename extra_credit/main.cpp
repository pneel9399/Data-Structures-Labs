#include "binary_tree.cpp"
//version: 5
//1.1: created header file
//1.2: converted header file to template
//2.1: created implemtation(.cpp) file
//2.2: fixed assertions and implemeted boolean functions
//2.3: fixed all shift function using class notes formulas
//3.1: created main file
//4.1: created inorder function for printing tree
//4.2: fixed recureion in inorder function
//5: final version
int main()
{
	binary_tree<int> tree;
	tree.create_first_node(25);
	tree.add_left(15);
	tree.add_right(45);
	tree.shift_left();
	tree.add_left(0);
	tree.add_right(7);
	tree.shift_up();
	tree.shift_right();
	tree.add_left(41);
	tree.add_right(8);
	tree.shift_up();
	tree.shift_left();
	tree.shift_left();
	tree.add_left(1);
	tree.inorder(0);
}