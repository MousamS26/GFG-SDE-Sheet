#include "bits/stdc++.h"
using namespace std;

const int mod = 1e9 + 7;

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

int solution(vector<int>&x, vector<int>&y)
{
	int m = x.size();
	map<pair<int, int>, int> hash;
	long long ans = 0;
	for (int i = 0; i < m; i++) {
		int n = y[i] - x[i], d = y[i];
		int g = gcd(n, d);
		n /= g, d /= g;
		if (hash.count(k{n, d}))
			ans += hash[ {n, d}];
		n = x[i], d = y[i];
		g = gcd(n, d);
		n /= g, d /= g;
		hash[ {n, d}];
		ans %= mod;
	}
	ans %= mod;
	return (int)ans;
}