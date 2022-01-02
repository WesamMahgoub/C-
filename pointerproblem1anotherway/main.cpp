#include <iostream>

using namespace std;

int main()
{
    int count;
    float sum=0;
    cout << "Enter a number: ";
    cin >> count;
    float* array;
    array = new float[count];
    for(int i=0;i<count;i++)
    {
        cout << "Enter an element: ";
        cin >> array[i];
        sum += array[i];
    }
    cout << "Average: " << sum/count;
    return 0;
}
