// Maximum and Minimum value in an array
#include <iostream>
using namespace std;

void minMax(int *arr, int n)
{
	int mini = INT_MAX;
	int maxi = INT_MIN;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > maxi)
			maxi = arr[i];
		else if (arr[i] < mini)
			mini = arr[i];

		// maxi = max(maxi, arr[i]);
		// mini = min(mini, arr[i]);
	}
	cout << "Min: " << mini << endl
		 << "Max: " << maxi << endl;
}
int main(int argc, char const *argv[])
{
	int arr[] = {4, 12, 8, 10, 2, 1, 15, 8, 1, 13};
	minMax(arr, 10);
	return 0;
}
