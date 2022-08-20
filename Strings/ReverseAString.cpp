#include "bits/stdc++.h"
using namespace std;

void revereseIt(string &s) {
	int i = 0, j = s.length() - 1;
	while (i <= j)
	{
		swap(s[i], s[j]);
		i++; j--;
	}
	// reverse(s.begin(), s.end());
}
int main()
{
	string s = "HELLLOOO";
	revereseIt(s);
	cout << s << endl;
}