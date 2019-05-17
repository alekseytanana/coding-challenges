#include <iostream>
void reverse_input();
using namespace std;

int main()
{
    reverse_input();
	return 0;
}

void reverse_input()
{
    int num = 0;
    cin >> num;
    if (num==0) {
        return;
    } else
        reverse_input();
    cout << num << " ";
    return;
}