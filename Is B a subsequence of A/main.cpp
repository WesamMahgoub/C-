#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n,m;
    bool check;
    cin >> n >> m;
    int* A = new int[n];
    int* B = new int[m];
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    for(int j=0;j<m;j++)
    {
        cin >> B[j];
    }
    for(int i=0;i<m;i++)
    {
        check = 0;
        for(int j=0;j<n;j++)
        {
            if(A[j] == B[i])
            {
                check = !(check);
            }
        }
        if(check == 0)
        {
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";
    return 0;
}
