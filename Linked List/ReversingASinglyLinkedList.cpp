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
Node* reverse(Node* head)
{
	Node* curr = head;
	Node* prev = NULL;
	while (curr != NULL)
	{
		Node* next = curr->next; //Store next of curr so that we dont lose rest of LL
		curr->next = prev; //change link direction to opposite
		prev = curr; //set curr as prev for next iteration
		curr = next; //set next as curr for next iteration
	}
	return prev;
}

int main()
{
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	for (Node* temp = head; temp != NULL; temp = temp->next)
		cout << temp->data << " ";
	head = reverse(head);
	for (Node* temp = head; temp != NULL; temp = temp->next)
		cout << temp->data << " ";
}