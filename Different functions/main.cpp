#include <iostream>

using namespace std;
bool odd(int n)
{
    if(n%2 != 0)
        return true;
    else
        return false;
}
bool palindrome(int n)
{
    bool array[30];
    int i;
    for(i=0;i<30;i++)
    {
        if(n%2 == 0)
            array[i] = 0;
            else
                array[i] = 1;
            n /= 2;
            if(n == 0)
            break;
    }
    for(int j=0;j<i/2;j++)
    {
        if(array[i-j] != array[j])
            return false;

    }
    return true;
}
int main()
{
    int N;
    cin >> N;
    if(odd(N) == true && palindrome(N) == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
