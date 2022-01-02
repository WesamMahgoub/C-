#include <iostream>

using namespace std;

int main()
{
    int n,crime=0,police=0,num;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> num;
        if(num == -1 && police == 0)
        {
            crime++;
        }
        else if(num == -1 && police > 0)
        {
            police -= 1;
        }
        else
        {
            police += num;
        }
    }
    cout << crime;
    return 0;
}
