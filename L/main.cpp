#include <iostream>

using namespace std;

int main()
{
    int A, B, C, mx, mn;
    cin >> A >> B >> C;
    if (A > B && B > C)
    {
        mx = A;
        mn = C;
    }
    else if (A <= B && B <= C)
    {
        mx = C;
        mn = A;
    }
    else if (B >= A && A >= C)
    {
        mx = B;
        mn = C;

    }
    else if (A >= C && C >= B)
    {
        mx = A;
        mn = B;
    }
    else if (C >= A && A >= B)
    {
        mx = C;
        mn = B;
    }
    else
    {
        mx = B;
        mn = A;
    }
    cout << mn << " " << mx;
    return 0;
}
