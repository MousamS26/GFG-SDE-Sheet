#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

struct Point
{
	int x, y;
};

bool myCmp(Point p1, Point p2)
{
	return (p1.y < p2.y);
}

int main()
{
	Point arr[] = {{3, 10}, {2, 8}, {5, 4}};
	int n = 3;
	sort(arr, arr + n, myCmp);
	for (auto i : arr)
		cout << i.y << " " << endl;

	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	sort(v.begin(), v.end(), greater<int>());
	for (int i : v)
		cout << i << endl;

	int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int n = 9;
	sort(arr, arr + n);
	for (auto i : arr)
		cout << i << " ";

}
// USES QUICKSORT INTERNALLY