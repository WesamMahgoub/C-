#include <iostream>
#include <cstdlib>
using namespace std;
void palindrome(string s)
{
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i] != s[s.size()-i-1])
        {
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";
}
int main()
{
    string ss;
    cin >> ss;
    palindrome(ss);
    return 0;
}
