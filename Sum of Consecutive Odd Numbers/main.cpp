#include <iostream>

using namespace std;

int main()
{
    int X,Y,sum=0,array[100]= 0;
    cin >> X >> Y;
    for(int i=0;i<T;i++)
    {
        for(int j=X;j<X+2;j++)
        {
            if(j%2 != 0)
            {
             sum += j;
             break;
            }
        }
    }
    cout << sum;
    return 0;
}
