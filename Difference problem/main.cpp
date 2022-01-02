#include <iostream>

using namespace std;

int main()
{
    string S;
    cin >> S;
    int count0=0,count1=0;
    for(int i=0;S[i] != NULL;i++)
    {
        if(S[i] == '1')
            count1++;
        else
            count1--;
    }
     if(count1 < 0)
        cout << -1*count1;
     else
        cout << count1;
    return 0;
}
