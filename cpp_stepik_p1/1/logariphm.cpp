#include <iostream>

using namespace std;

int main()
{
    int T=0, p=0;
    unsigned long test=0,logariphm=0;

    cin >> T;

    while (T>0) {
        p = 1;
        logariphm = 2;
        cin >> test;
        if ( (test >= 1000000000) or ( test<1 ) ) {
            cout << "Not acceptable number!" << endl;
            return 1;
        }
        while (true) {
            if ( (logariphm * 2) <= test ) {
                logariphm *= 2;
                p++;
            } else {
                break;
            }
        }
        cout << p << endl;

        T--;
    }


    return 0;
}
