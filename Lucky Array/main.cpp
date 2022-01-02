#include <iostream>

using namespace std;

int main()
{
    int N,min=0,sum=0;
    cin >> N;
    int* array = new int[N];
    for(int i=0;i<N;i++)
    {
        cin >> array[i];
    }
    min = array[0];
    for(int i=1;i<N;i++)
    {
        if(array[i] < min)
            min = array[i];
    }
    for(int j=0;j<N;j++)
    {
        if(min == array[j])
            sum++;
    }
        if(sum%2 != 0)
            cout << "Lucky";
        else
            cout << "Unlucky";
    return 0;
}
