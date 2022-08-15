#include "bits/stdc++.h"
using namespace std;

void naive(string &txt, string &pat)
{
	int m = pat.length();
	int n = txt.length();
	for (int i = 0; i <= n - m; ++i)
	{
		int j;
		for (j = 0; j < m; j++)
		{
			if (pat[j] != txt[i + j])
				break;
		}
		if (j == m)
			cout << i << " ";
	}
}
int main()
{
	string txt = "AAAAAA";
	string pat = "AA";
	naive(txt, pat);
}