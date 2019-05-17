#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
	Node(int d) {
		data = d;
		next = NULL;
	}
};
class Solution {
public:

	Node* insert(Node* head, int data)
	{
		Node* n = new Node(data);

		if (head != NULL) 
		{
			Node* tmp = head;
			while (tmp->next != NULL)
				tmp = tmp->next;

			tmp->next = n;
		}
		else
			return n;

		return head;
	}

	void display(Node* head)
	{
		Node* start = head;
		while (start)
		{
			cout << start->data << " ";
			start = start->next;
		}
	}
};
int main()
{
	Node* head = NULL;
	Solution mylist;
	int T, data;
	cin >> T;
	while (T-- > 0) {
		cin >> data;
		head = mylist.insert(head, data);
	}
	mylist.display(head);

}