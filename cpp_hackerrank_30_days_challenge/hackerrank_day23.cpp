#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;
class Node {
public:
	int data;
	Node* left, * right;
	Node(int d) {
		data = d;
		left = right = NULL;
	}
};
class Solution {
public:
	Node* insert(Node* root, int data) {
		if (root == NULL) {
			return new Node(data);
		}
		else {
			Node* cur;
			if (data <= root->data) {
				cur = insert(root->left, data);
				root->left = cur;
			}
			else {
				cur = insert(root->right, data);
				root->right = cur;
			}
			return root;
		}
	}


	int getHeight(Node* root) {
		//Write your code here

		if (!root)
			return -1;

		int leftHeight = getHeight(root->left);
		int rightHeight = getHeight(root->right);

		return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
	}

	void levelOrder(Node* root) {
		//Write your code here

		queue<Node*> q = {};

		if (root)
			q.push(root);

		while (q.size() != 0) {
			Node* cur = q.front();
			cout << cur->data << " ";
			if (cur->left)
				q.push(cur->left);
			if (cur->right)
				q.push(cur->right);
			q.pop();
		}
	}

};//End of Solution
int main() {
	Solution myTree;
	Node* root = NULL;
	int T, data;
	cin >> T;
	while (T-- > 0) {
		cin >> data;
		root = myTree.insert(root, data);
	}
	myTree.levelOrder(root);
	return 0;
}