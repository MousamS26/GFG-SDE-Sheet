#include "bits/stdc++.h"
using namespace std;

struct Node
{
	int data;
	Node *next; //self referential structure
	Node(int x) //constructor
	{
		data = x;
		next = NULL;
	}
};
bool isLoop(Node *head)
{
	// unordered_set<Node*> s;
	// for (Node* curr = head; curr != NULL; curr = curr->next)
	// {
	// 	if (s.find(curr) != s.end())
	// 		return true;
	// 	s.insert(curr);
	// }
	// return false;
	Node* slow = head; Node* fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return true;
	}
	return false;
}
int main()
{
	Node* head = new Node(10);
	Node* one = new Node(20);
	Node* two = new Node(30);
	Node* three = new Node(40);
	head->next = one;
	head->next->next = two;
	head->next->next->next = three;
	three->next = one;
	cout << isLoop(head);
}