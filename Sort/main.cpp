#include <iostream>

using namespace std;
void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int N;
    cin >> N;
    int* array = new int[N];
    for(int j=0;j<N;j++)
    {
        cin >> array[j];
    }
    sort(array,N);
    for(int i=0;i<N;i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
