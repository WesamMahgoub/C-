#include <iostream>

using namespace std;

int main()
{
    int t,n,m,ai;
    float sum = 0;
    cin >> t;
   int* grades = new int [t];
    for(int i=0;i<t;i++)
    {
        cin >> n >> m;
    for(int j=0;j<n;j++)
    {
        cin >> ai;
        sum += ai;
    }
    if(m <= sum)
        grades[i] = m;
        else
            grades[i]=sum;
    }
    for(int l=0;l<t;l++)
    {
        cout << grades[l] << endl;
    }
    return 0;
}
