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

	
}