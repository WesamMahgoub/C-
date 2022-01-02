#include <iostream>

using namespace std;

int main()
{
    long long A,B,C;
    cin >> A >> B >> C;
    if(A >= B && B >= C)
    {
            cout << C << endl << B << endl << A << endl;
    }
    else if(A >= C && C >= B )
    {
            cout << B << endl << C << endl << A << endl;
    }
    else if(A <= B && B <= C)
    {
        cout << A << endl << B << endl << C << endl;
    }
    else if(A < C && C < B)
    {
        cout << A << endl << C << endl << B << endl;
    }
    else if(C < A && A < B)
    {
        cout << C << endl << A << endl << B << endl;
    }
    else if(C > A && A > B)
    {
        cout << B << endl << A << endl << C << endl;
    }
        cout << endl << A << endl << B << endl << C;
    return 0;
}
