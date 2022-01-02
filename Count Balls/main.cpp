#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    long long N,A,B;
    cin >> N >> A >> B;
       if(N <= A)
        {
            cout << N;
        }
        else if(N <= A+B)
        {
            cout << A;
        }
        else if(N > A+B)
        {
            if(N%(A+B) >= A)
                cout << (N/(A+B))*A + A;
            else
                cout << (N/(A+B))*A + (N%(A+B));
        }
    return 0;
}
