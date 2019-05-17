#include <iostream>
using namespace std;

int main()
{
    char c='\0', c_prev='\0';

    while (cin.get(c)) {
        if ( not ((c==' ') && (c_prev==' ')) ) {
            cout << c;
        }
        c_prev = c;
    }

    return 0;
}
