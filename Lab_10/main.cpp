#include "bintree.h"
#include "build_tree.h"
#include <iostream>
using namespace std;

template <class T>
void printItem(T item)
{
    cout<<item<<" ";
}

int main() {
    binary_tree_node<int> *s1 = sample1();
	cout<<"Depth of s1: "<<depth(s1)<<endl;
	cout<<"Size of s1: "<<size(s1)<<endl;
	cout<<"Sum of s1: "<<tree_sum(s1)<<endl;
	cout<<"Average of s1: "<<tree_average(s1)<<endl;
	if(tree_is_balanced(s1))
		cout<<"s1 is balanced"<<endl;
	else
		cout<<"s1 is not balanced"<<endl;
	cout<<"Max of s1: "<<max(s1)<<endl;
    cout<<"***********************************************************"<<endl;
	
	
    binary_tree_node<int> *s2 = sample2();
	cout<<"Depth of s2: "<<depth(s2)<<endl;
	cout<<"Size of s2: "<<size(s2)<<endl;
	cout<<"Sum of s2: "<<tree_sum(s2)<<endl;
	cout<<"Average of s2: "<<tree_average(s2)<<endl;
	if(tree_is_balanced(s2))
		cout<<"s2 is balanced"<<endl;
	else
		cout<<"s2 is not balanced"<<endl;
	cout<<"Max of s2: "<<max(s2)<<endl;
	cout<<"***********************************************************"<<endl;
    
    
	binary_tree_node<double> *s3 =sample3();
	cout<<"Depth of s3: "<<depth(s3)<<endl;
	cout<<"Size of s3: "<<size(s3)<<endl;
	cout<<"Sum of s3: "<<tree_sum(s3)<<endl;
	cout<<"Average of s3: "<<tree_average(s3)<<endl;
	if(tree_is_balanced(s3))
		cout<<"s3 is balanced"<<endl;
	else
		cout<<"s3 is not balanced"<<endl;
	cout<<"Max of s3: "<<max(s3)<<endl;
	cout<<"***********************************************************"<<endl;

    
    binary_tree_node<double> *s4 =sample4();
	cout<<"Depth of s4: "<<depth(s4)<<endl;
	cout<<"Size of s4: "<<size(s4)<<endl;
	cout<<"Sum of s4: "<<tree_sum(s4)<<endl;
	cout<<"Average of s4: "<<tree_average(s4)<<endl;
	if(tree_is_balanced(s4))
		cout<<"s4 is balanced"<<endl;
	else
		cout<<"s4 is not balanced"<<endl;
	cout<<"Max of s4: "<<max(s4)<<endl;
	cout<<"***********************************************************"<<endl;


    binary_tree_node<string> *s5 = sample5();
	if(tree_is_balanced(s5))
		cout<<"s5 is balanced"<<endl;
	else
		cout<<"s5 is not balanced"<<endl;
	cout<<"***********************************************************"<<endl;
     
    binary_tree_node<double> *s6 =sample_bal1();
	cout<<"Depth of s6: "<<depth(s6)<<endl;
	cout<<"Size of s6: "<<size(s6)<<endl;
	cout<<"Sum of s6: "<<tree_sum(s6)<<endl;
	cout<<"Average of s6: "<<tree_average(s6)<<endl;
	if(tree_is_balanced(s6))
		cout<<"s6 is balanced"<<endl;
	else
		cout<<"s6 is not balanced"<<endl;
	cout<<"Max of s6: "<<max(s6)<<endl;
	cout<<"***********************************************************"<<endl;
    
    binary_tree_node<double> *s7 =sample_bal2();
		cout<<"Depth of s7: "<<depth(s7)<<endl;
	cout<<"Size of s7: "<<size(s7)<<endl;
	cout<<"Sum of s7: "<<tree_sum(s7)<<endl;
	cout<<"Average of s7: "<<tree_average(s7)<<endl;
	if(tree_is_balanced(s7))
		cout<<"s7 is balanced"<<endl;
	else
		cout<<"s7 is not balanced"<<endl;
	cout<<"Max of s7: "<<max(s7)<<endl;
	cout<<"***********************************************************"<<endl;

}