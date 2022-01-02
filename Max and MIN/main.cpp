#include <iostream>
int mm(int* arr,int& n)
{
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<n;i++)
    {
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    }
    n = min;
    return max;
}
using namespace std;

int main()
{
    int N;
    cin >> N;
    int* array = new int[N];
    for(int i=0;i<N;i++)
    {
        cin >> array[i];
    }
    int r = mm(array,N);
    cout << N << " " << r;

    return 0;
}
