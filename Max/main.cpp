#include <iostream>

using namespace std;

int main()
{
    int N,n,Max=0;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> n;
        if(Max < n)
            Max = n;
    }
    cout << Max;
    return 0;
}
