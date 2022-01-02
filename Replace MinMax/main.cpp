#include <iostream>

using namespace std;

int main()
{
    int N,min,max;
    cin >> N;
    int* array = new int[N];
    cin >> array[0];
    min = array[0];
    max = array[0];
    for(int i=1;i<N;i++)
    {
        cin >> array[i];
        if(min > array[i])
            min = array[i];
        if(max < array[i])
            max = array[i];
    }
    for(int j=0;j<N;j++)
    {
        if(array[j] == max)
            array[j] = min;
        else if(array[j] == min)
            array[j] = max;
            cout << array[j] << " ";
    }
    return 0;
}
