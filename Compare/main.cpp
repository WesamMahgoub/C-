#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string X,Y;
    cin >> X >> Y;
    int min=0;
    if(X.size() <= Y.size())
    {
        min = X.size();
    }
    else
    {
        min = Y.size();
    }
    for(int i=0;i<min;i++)
    {
        if(X[i] < Y[i])
        {
            cout << X;
            exit(0);
        }
        else if(X[i] > Y[i])
        {
            cout << Y;
            exit(0);
        }
    }
    if(X.size() <= Y.size())
        cout << X;
    else
        cout << Y;
    return 0;
}
