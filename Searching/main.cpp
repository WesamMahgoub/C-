#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int N;
    long long X;
    cin >> N;
    long long* array = new long long [N];
    for(int i=0;i<N;i++)
    {
        cin >> array[i];
    }
    cin >> X;
    for(int j=0;j<N;j++)
    {
        if(X == array[j])
        {
            cout << j;
            exit(0);
        }
    }
    cout << -1;
    return 0;
}
