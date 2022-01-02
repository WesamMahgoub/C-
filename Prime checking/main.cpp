#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    for(int i=2;i<=N/2;i++)
    {
        if(N%i == 0)
        {
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";
    return 0;
}
