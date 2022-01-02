#include <iostream>

using namespace std;

int main()
{
    int N,Y,M,D;
    cin >> N;
    Y = N/365;
    M = (N%365)/30;
    D = ((N%365)%30);
    cout << Y << " years" << endl << M << " months" << endl << D << " days";
    return 0;
}
