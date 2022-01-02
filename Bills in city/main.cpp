#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N,dif=0;
    cin >> N;
    int* array = new int[N];
    cin >> array[0] >> array[1];
    dif = abs(array[0] - array[1]);
    for(int i=2;i<N;i++)
    {
        cin >> array[i];
        if(abs(array[i]-array[i-1]) > dif)
           dif = abs(array[i]-array[i-1]);
    }
        cout << dif;
    return 0;
}
