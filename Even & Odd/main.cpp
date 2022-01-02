#include <iostream>

using namespace std;

int main()
{
    int n,min;
    cin >> n;
    int* array = new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
    }
    for(int j=0;j<n-1;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(array[j] > array[k])
            {
                min = array[k];
                array[k] = array[j];
                array[j] = min;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if((i%2 != 0 && array[i]%2 == 0) || (i%2 == 0 && array[i]%2 != 0))
        {
            min = array[i];
            array[i] = array[i+1];
            array[i+1] = min;
        }
        cout << array[i] << " ";
    }
    return 0;
}
