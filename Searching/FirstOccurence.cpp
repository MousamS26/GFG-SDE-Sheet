#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int x)
{
	int low(0), high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] > x)
			high = mid - 1;
		else if (arr[mid] < x)
			low = mid + 1;
		else
		{
			if (mid == 0 || arr[mid - 1] != arr[mid])
				return mid;
			else
				high = mid - 1;
		}

	}
	return -1;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 4, 4};
	int n = 6;
	int x = 4;
	cout << firstOccurence(arr, n, x) << endl;
}