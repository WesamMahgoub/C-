#include <iostream>

using namespace std;

int main()
{
    long long A,B,C,D;
    cin >> A >> B >> C >> D;
    long long n = (A*B%100 * (C*D%100));
    if(n%100 < 10)
        cout << "0" << n%100;
    else
    cout << n%100;
    return 0;
}
