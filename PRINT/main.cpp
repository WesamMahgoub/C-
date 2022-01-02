#include <iostream>

using namespace std;
void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout << i << " ";
    }
}
int main()
{
    int N;
    cin >> N;
    print(N);
    return 0;
}
