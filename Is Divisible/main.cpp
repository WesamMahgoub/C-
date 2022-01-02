#include <iostream>

using namespace std;

int main()
{
    long long A,B,n;
    cin >> n >> A >> B;
    long long count = n/(A+B);
    cout << count;
    return 0;
}
