#include "bits/stdc++.h"
using namespace std;

struct MyHash
{
	int bucket;
	list<int> *table;
	MyHash(int b)
	{
		bucket = b;
		table = new list<int>[b];
	}
	void insert(int key) {
		int i = key % bucket;
		table[i].push_back(key);
	}
	bool search(int key) {
		int i = key % bucket;
		for (auto j : table[i])
			if (j == key)
				return true;
		return false;
	}
	void remove(int key) {
		int i = key % bucket;
		table[i].remove(key);
	}
};
