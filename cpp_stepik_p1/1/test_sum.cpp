#include <iostream>
/*using namespace std;*/

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a = 0;
    int b = 0;
    int count = 0;

    cin >> count;

    for(int i=0; i<count; i++) {
	cin >> a >> b;
	cout << ( a + b ) << endl;
	}


    return 0;

}
