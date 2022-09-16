#include "bits/stdc++.h"
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node* prev;
	Node(int z)
	{
		data = z;
		next = NULL;
		prev = NULL;
	}
};
int main()
{
	Node* head = new Node(10);
	Node* one = new Node(20);
	Node* two = new Node(30);
	Node* three = new Node(40);

	head->next = one;
	one->prev = head;
	one->next = two;
	two->prev = one;
	two->next = three;
	three->prev = two;
	three->next = head;
}