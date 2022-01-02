#include <iostream>

using namespace std;

int main()
{
    float A,B,C;
    cin >> A >> B >> C;
    if(A+B <= C || A+C <= B || C+B <= A)
        cout << "Invalid";
    else
        cout << "Valid";
    return 0;
}
