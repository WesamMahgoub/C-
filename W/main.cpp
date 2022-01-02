#include <iostream>

using namespace std;

int main()
{
    double N;
    cin >> N;
    double L = N - long(N);
    if (L == 0)
    {
        cout << "long long " << long(N);
    }
    else
    {
        cout << "double " << long (N) << " " << L;
    }
    return 0;
}
