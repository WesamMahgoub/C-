#include <iostream>

using namespace std;

int main()
{
    int N,num;
    long long sum=0;
    cin >> N;
    char* array = new char[N];
    for(int i=0;i<N;i++)
    {
        cin >> array[i];
        num = array[i]-48;
        sum += num;
    }
    cout << sum;
    return 0;
}
