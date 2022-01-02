#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int* array = new int [N];
    for(int i=0;i<N;i++)
    {
        cin >> array[i];
        if(array[i] < 0)
            array[i]=2;
        else if(array[i] > 0)
            array[i]=1;
    }
    for(int j=0;j<N;j++)
    {
        cout << array[j] << " ";
    }
    return 0;
}
