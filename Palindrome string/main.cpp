#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    string S;
    cin >> S;

    for(int i=0;i<S.size();i++)
    {
        if(S[i] != S[S.size()-1-i])
        {
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";
    return 0;
}
