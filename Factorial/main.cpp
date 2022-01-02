#include <iostream>

using namespace std;

int main()
{
    int T,N;
    long long mul;
    cin >> T;
    long long* array = new long long[T];
    for(int i=0;i<T;i++)
    {
        cin >> N;
        mul = 1;
        for(int j=1;j<=N;j++)
        {
            mul *= j;
        }
        array[i] = mul;
    }
    for(int i=0;i<T;i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}
