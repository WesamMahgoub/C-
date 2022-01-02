#include <iostream>

using namespace std;

int main()
{
    int N,first=0,next=1,fib;
    cin >> N;
    for(int i=3;i<=N;i++)
    {
        next -= first;
        fib += next;
        first = next;
        next++;
    }
    cout << ;
    return 0;
}
