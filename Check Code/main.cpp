#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int A,B;
    string S;
    cin >> A >> B >> S;
    if(S[A] != '-')
    {
        cout << "No";
        exit(0);
    }
    for(int i=0;i<A+B+1;i++)
    {
        if(i == A)
        {
            if(S[A] != '-')
            {
                cout << "No";
                exit(0);
            }
        }
        else if(57-S[i] < 0 || 57-S[i] > 9)
        {
            cout << "No";
            exit(0);
        }
    }
    cout << "Yes";
    return 0;
}
