#include <iostream>

using namespace std;

int main()
{
    unsigned long long A,B;
    cin >> A >> B;
    if(A > B)
        cout << (A+B)/2.0*((A-B)+1);
    else
        cout << (A+B)/2.0*((B-A)+1);
    return 0;
}
