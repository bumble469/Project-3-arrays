#include <iostream>
using namespace std;

 int x = 1;

int main()
{
	int arr[3];
	cout << "Enter elements: " << x << "\n";
	
	arr[0] = 2;
	arr[1] = 3;
	arr[2] = 5;
	arr[3] = 4;
	
	cout << arr[0] << endl << " " << arr[1] << endl << " " << arr[2] << endl << " " << arr[3] << endl;
	
	
	cout << "You entered: " << x << "\n";
	cout << arr[0] << endl << " " << arr[1] << endl << " " << arr[2] << endl << " " << arr[3] << endl;
		
	return 0;
}

