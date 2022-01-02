#include <iostream>

using namespace std;

int main()
{
    double A,B,C,D;
    cin >> A >> B >> C >> D;
    if(A <= B && A <= C && A <= D)
    {
        if(A < B && A < C && A < D)
        cout << "A";
        else
        cout << "Equal";
    }
    else if(B <= A && B <= C && B <= D)
    {
        if(B < A && B < C && B < D)
        cout << "B";
        else
        cout << "Equal";
    }
    else if(C <= A && C <= B && C <= D)
    {
        if(C < A && C < B && C < D)
        cout << "C";
        else
        cout << "Equal";
    }
    else if(D <= A && D <= B && D <= C)
    {
        if(D < A && D < C && D < B)
        cout << "D";
        else
        cout << "Equal";
    }
    return 0;
}
