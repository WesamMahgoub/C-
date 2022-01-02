#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string N;
    cin >> N;
    int n = N.length();
    for(int i=0;i<n;i++)
    {
        if(N[i] != N[n-i-1])
        {
            for(int j=i+1;j>=0;j--)
            {
                cout << N[j];
            }
            cout << endl << "NO";
            exit(0);
        }
    }
    cout << N << endl << "YES";
    return 0;
}
