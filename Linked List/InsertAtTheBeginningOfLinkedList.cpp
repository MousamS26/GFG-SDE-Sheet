#include "bits/stdc++.h"
using namespace std;

struct Node {
	int data;
	Node *next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

Node *insertAtBegin(Node *head, int x)
{
	Node *temp = new Node(x); //pointer to new Node && store pointer to it in temp
	temp->next = head;
	return temp;
}

int main()
{
	Node *head = NULL;
	head = insertAtBegin(head, 30);
	head = insertAtBegin(head, 20);
	head = insertAtBegin(head, 10);
	return 0;
}