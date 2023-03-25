// Reversing the elements of an Array
#include <iostream>
using namespace std;

void reverseArr(int *arr, int n)
{
	int start = 0;
	int end = n - 1;
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void printArr(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	int arr[] = {12, 23, 34, 45, 56, 76, 53, 23};

	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Before Reversing" << endl;
	printArr(arr, n);
	reverseArr(arr, n);
	cout << "After Reversing" << endl;
	printArr(arr, n);
	return 0;
}
