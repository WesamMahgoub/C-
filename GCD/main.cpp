#include <iostream>

using namespace std;

int main()
{
    int A,B;
    cin >> A >> B;
    int small = (A > B)? B:A;

    for(;small>=1;small--)
    {
        if(A%small == 0 && B%small == 0)
            {
            cout << small;
            break;
            }
    }

    return 0;
}
