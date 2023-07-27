#include <iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;
};

void MoveNode(Node** des, Node** source);

Node* SortedMerge(Node* a, Node* b)
{
	Node test;
	Node* tail = &test;
	test.next = NULL;
	while (1)
	{
		if (a == NULL)
		{
			tail->next = b;
			break;
		}
		else if (b == NULL)
		{
			tail->next = a;
			break;
		}
		if (a->data <= b->data)
			MoveNode(&(tail->next), &a);
		else
			MoveNode(&(tail->next), &b);

		tail = tail->next;
	}
	return(test.next);
}
void MoveNode(Node** dest, Node** source)
{
	Node* newNode = *source;
	assert(newNode != NULL);
	*source = newNode->next;
	newNode->next = *dest;
	*dest = newNode;
}

void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
void printList(Node *node)
{
	while (node!=NULL)
	{
		cout<<node->data<<"->";
		node = node->next;
	}
}

int main()
{
	Node* res = NULL;
	Node* a = NULL;
	Node* b = NULL;

	push(&a, 15);
	push(&a, 10);
	push(&a, 5);
    
	push(&b, 20);
	push(&b, 3);
	push(&b, 2);

	res = SortedMerge(a, b);

	cout << "Merged Linked List is: \n";
	printList(res);
    cout<<endl;
	return 0;
}



