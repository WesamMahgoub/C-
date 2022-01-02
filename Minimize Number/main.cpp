#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int N,count=0;
    cin >> N;
    int* array = new int[N];
    for(int i=0;i<N;i++)
    {
        cin >> array[i];
    }
    while(1)
    {
    for(int j=0;j<N;j++)
    {
        if(array[j]%2 != 0)
        {
            cout << count;
            exit(0);
        }
        else
            array[j] /= 2;
    }
    count++;
    }
    return 0;
}
