#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A,B,S;
    cin >> A >> B;
    cout << A.length() << " " << B.length() << endl;
    cout << A+B << endl;
    char c = A[0];
    A[0] = B[0];
    B[0] = c;
    cout << A << " " << B;
    return 0;
}
