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
void removeLoop(Node *head)
{
	Node* slow = head; Node* fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}
	if (slow != fast)  //No Loop detected
		return;
	slow = head;  //initialize to starting point
	while (slow->next != fast->next)
	{
		slow = slow ->next;
		fast = fast ->next;
	}
	fast->next = NULL;
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
	removeLoop(head);
}