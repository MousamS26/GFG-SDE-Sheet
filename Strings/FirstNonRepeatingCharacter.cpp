#include "bits/stdc++.h"
using namespace std;

const int CHAR = 256;

int nonRep(string &str)
{
	// for (int i = 0; i < str.length(); i++)
	// {
	// 	bool flag = false;
	// 	for (int j = 0; j < str.length(); j++)
	// 	{
	// 		if (i != j && str[i] == str[j])
	// 		{
	// 			flag = true;
	// 			break;
	// 		}
	// 	}
	// 	if (flag == false)
	// 		return i;
	// }
	// return -1;

	// int count[CHAR] = {0};
	// for (int i = 0; i < str.length(); i++)
	// 	count[str[i]]++;

	// for (int i = 0; i < str.length(); i++)
	// {
	// 	if (count[str[i]] == 1)
	// 		return i;
	// }
	// return -1;

	int firstIndex[CHAR];
	fill(firstIndex, firstIndex + CHAR, -1);

	for (int i = 0; i < str.length(); i++)
	{
		if (firstIndex[str[i]] == -1)
			firstIndex[str[i]] = i;
		else
			firstIndex[str[i]] = -2;
	}
	int res = INT_MAX;
	for (int i = 0; i < CHAR; i++)
	{
		if (firstIndex[i] >= 0)
			res = min(res, firstIndex[i]);
	}
	return (res == INT_MAX) ? -1 : res;
}
int main()
{
	string str = "$%^&*$";
	cout << nonRep(str) << endl;
}