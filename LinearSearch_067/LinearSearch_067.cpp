#include <iostream>
using namespace std;

int Arr[20]; //Array to be seaeched
int n; //number in the elemenet of the array
int i; // index of the array element

void input()
{
	while (true)
	{
		cout << "enter the number of element in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else cout << "\nArray should have minimum 1 and maximum 20 element.\n\n";
	}
	
	//accept array element
	cout << "\n--------------------\n";
	cout << "Enter array elements \n";
	cout << "----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> Arr[i];
	}
}

void linesearch()
{
	char ch;
	int comparisons; //Number of comparisons

	do
	{
		//accept the number to be searched 
		cout << "\nEnter the element you want to search: "; //langkah 1
		int item;
		cin >> item;

	

	
