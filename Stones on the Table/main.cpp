#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    char color, dif;
    cin >> n;
    cin >> color;
    for(int i=1;i<n;i++)
    {
        dif = color;
        cin >> color;
        if(dif == color)
            sum++;
    }
    cout << sum;
    return 0;
}
