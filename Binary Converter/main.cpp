#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int array[32];
    for(int i=0;i<32;i++)
    {
        array[i] = 0;
    }
    int i=0;
    do
    {
        array[i++] = N%2;
        N /= 2;
    }
    while(N != 0);
    for(int j=i-1;j>=0;j--)
    {
        cout << array[j];
    }
    return 0;
}
