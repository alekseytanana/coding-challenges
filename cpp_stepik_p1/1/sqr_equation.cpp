#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a=0, b=0, c=0;
    int D=0;
    double x1=0, x2=0;
    cin >> a >> b >> c;
    if (a==0) {
        cout << "'a' must be not '0'";
        return 1;
    }
    D = b*b - 4*a*c;
    if (D<0) {
        cout << "No real roots" << endl;
        return 0;
    }
    x1 = ( -1*b + sqrt(D) ) / (2*a);
    x2 = ( -1*b - sqrt(D) ) / (2*a);
    cout << x1 << " " << x2 << endl;

    return 0;
}
