#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;
    for(int i=0;i<S.length();i++)
    {
        if(S[i] < 90)
            S[i] += 32;
        else
            S[i] -= 32;
    }
    for(int i=0;i<S.length();i++)
    {
        cout << S[i];
    }
    return 0;
}
