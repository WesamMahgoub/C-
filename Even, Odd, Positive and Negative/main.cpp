#include <iostream>

using namespace std;

int main()
{
    int N,n,even=0,odd=0,pos=0,neg=0;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> n;
        if(n%2 == 0)
            even++;
        else
            odd++;
        if(n > 0)
            pos++;
        else if(n < 0)
            neg++;
    }
    cout << "Even: " << even << endl << "Odd: " << odd << endl << "Positive: " << pos << endl << "Negative: " << neg;
    return 0;
}
