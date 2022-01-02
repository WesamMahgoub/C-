#include <iostream>

using namespace std;
void shape(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i >= j)
                cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cin >> N;
    shape(N);
    return 0;
}
