#include <iostream>
using namespace std;

int main()
{
	int arr[5] = {12, 24, 36, 40, 50};
	cout << arr;
	cout << &arr;
	cout << arr+1;
	cout << &arr + 1;
	cout << *arr;  //12
	cout << *arr+1; //13
	cout << *(arr + 1); //13
	//cout << arr++; ----> won't compile//int *const arr --- read like this inside

	return 0;
}