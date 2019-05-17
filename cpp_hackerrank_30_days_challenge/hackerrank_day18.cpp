#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
	//Write your code here
	stack<char> stack_;
	queue<char> queue_;


public:

	Solution(stack<char> st = {}, queue<char> qu = {}) : stack_(st), queue_(qu)
	{}

	void pushCharacter(char ch) { stack_.push(ch); }
	void enqueueCharacter(char ch) { queue_.push(ch); }
	char popCharacter() {
		char c = stack_.top();
		stack_.pop();
		return c;
	}

	char dequeueCharacter() {
		char c = queue_.front();
		queue_.pop();
		return c;
	}

};

int main() {
	// read the string s.
	string s;
	getline(cin, s);

	// create the Solution class object p.
	Solution obj;

	// push/enqueue all the characters of string s to stack.
	for (int i = 0; i < s.length(); i++) {
		obj.pushCharacter(s[i]);
		obj.enqueueCharacter(s[i]);
	}

	bool isPalindrome = true;

	// pop the top character from stack.
	// dequeue the first character from queue.
	// compare both the characters.
	for (int i = 0; i < s.length() / 2; i++) {
		if (obj.popCharacter() != obj.dequeueCharacter()) {
			isPalindrome = false;

			break;
		}
	}

	// finally print whether string s is palindrome or not.
	if (isPalindrome) {
		cout << "The word, " << s << ", is a palindrome.";
	}
	else {
		cout << "The word, " << s << ", is not a palindrome.";
	}

	return 0;
}