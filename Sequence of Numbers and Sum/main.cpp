#include <iostream>

using namespace std;

int main()
{
    int N,M,small=0,large=0;
    do{
    cin >> N >> M;
    if(N <= 0 || M <= 0)
        break;
    if(N > M)
    {
        small = M;
        large = N;
    }
    else
    {
        small = N;
        large = M;
    }
    for(int i=small;i<=large;i++)
    {
        cout << i << " ";
    }
    cout << "sum =" << (large+small)/2.0*(large-small+1) << endl;

    }while(1);
    return 0;
}
