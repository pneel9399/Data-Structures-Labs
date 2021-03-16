#include <stdio.h>
#include <iostream>

void print_output(int n, int current);
double sumover(double n);

using namespace std;
int main(int argc, char **argv)
{
	int current = 1;
	cout<<"Project 1 output."<<endl;
	int n = 0;
	cout<<"Enter number to stop printing: "<<endl;
	cin>>n;
	print_output(n,current);
	cout<<"****************************************"<<endl;
	cout<<"Enter number to sum up: "<<endl;
	cin>>n;
	cout<<"Project 5 output."<<endl;
	cout<<sumover(n)<<endl;
	return 0;
}
void print_output(int n, int current)
{
	std::cout<<"This was written by call "<<current<<"."<<std::endl;
	if (current < n)
		{
			for(int i =0; i<current; i++)
				std::cout<<" ";
			print_output(n, current +1);
		}
		for(int i =0; i<current-1; i++)
			std::cout<<" ";
			std::cout<<"This ALSO was written by call "<<current<<"."<<std::endl;
}
double sumover(double n)
{
	if(n == 0)
		return 0;
	else
		return ((1/n + sumover(n-1)));
}