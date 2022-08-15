#include <bits/stdc++.h>
using namespace std;

int main()
{
	//insert
	unordered_set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.insert(5);

	for (int x : s)
		cout << x << " ";
	cout << "\n";
	cout << s.size() << endl;

	//search

	if (s.find(10) == s.end())
		cout << "Not Found\n";
	else
		cout << "Found\n";

	//count

	if (s.count(10))
		cout << "Found\n";
	else
		cout << "Not Found\n";

	//erase

	s.erase(10);
	cout << s.size();
	s.erase(s.begin(), s.end());

	//clear
	s.clear();
	cout << s.size() << endl;
	return 0;
}
