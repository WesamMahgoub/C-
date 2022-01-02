#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int sum = 0;
    for(int i=0;i<S[i] != NULL;i++)
    {
        if(S[i] >= 48 && S[i] <= 57)
        {
        sum += (S[i] - 48);
        }
    }
    cout << sum;
    return 0;
}
