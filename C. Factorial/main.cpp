#include <iostream>

using namespace std;
long long recursion(int N)
{
    if(N == 1)
        return 1;
    else
        return N*recursion(--N);
}
int main()
{
    int n;
    cin >> n;
    cout << recursion(n);
    return 0;
}

