#include <iostream>

using namespace std;
int bit(string ss)
{
    static int v = 0;
    if(ss[1] == '+')
    {
        v++;
    }
    else
    {
        v--;
    }
       return v;
}
int main()
{
    int n,x;
    cin >> n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        x = bit(s);
    }
    cout << x;
    return 0;
}
