#include <iostream>

using namespace std;

int main()
{
    int n;
    bool check;
    cin >> n;
    for(int i=2;i<=n;i++)
    {
        check = 1;
        for(int j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                    check = 0;
                    break;
            }
        }
        if(check == 1)
        {
        cout << i << " ";
        }
    }
    return 0;
}
