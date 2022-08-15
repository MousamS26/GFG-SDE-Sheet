#include <iostream>
using namespace std;

int getAPeak(int arr[], int n)
{
	int low = 0, high = n - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
			return arr[mid];
		if (mid > 0 && arr[mid - 1] >= arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

int main()
{
	int arr[] = {5, 20, 40, 30, 23, 50 , 60};
	int n = 7;
	cout << getAPeak(arr, n) << endl;
}