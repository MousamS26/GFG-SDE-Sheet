#include "bits/stdc++.h"
using namespace std;

int longestSubstring(string &str)
{
	// int n = str.length(), res = 0;
	// for (int i = 0; i < n; i++)
	// {
	// 	vector<bool> visited(256);
	// 	for (int j = i; j < n; j++)
	// 	{
	// 		if (visited[str[j]] == true)
	// 			break;
	// 		else
	// 		{
	// 			res = max(res, j - i + 1);
	// 			visited[str[j]] = true;
	// 		}
	// 	}
	// }
	// return res;
	int n = str.length(), res = 0, i = 0;
	vector<int> prev(256, -1);
	for (int j = 0; j < n; j++)
	{
		i = max(i, prev[str[j]] + 1);
		int maxEnd = j - i + 1;
		res = max(res, maxEnd);
		prev[str[j]] = j;
	}
	return res;
}
int main()
{
	string str = "ABCDCD";
	cout << longestSubstring(str) << endl;
}