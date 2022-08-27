#include "bits/stdc++.h"
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};
Node* deleteFirstNode(Node* head)
{
	if (head == NULL)
		return NULL;

	Node *temp = head;
	head = head->next;
	delete temp;
	return head;

}

int main()
{
	Node *head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head = deleteFirstNode(head);
	head = deleteFirstNode(head);   //Always store whatever is being returned by Function in a variable.
	for (Node* tempo = head; tempo != NULL; tempo = tempo->next)
		cout << tempo->data << " ";
	return 0;
}