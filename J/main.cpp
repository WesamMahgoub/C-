#include <iostream>

using namespace std;

int main()
{
    int n;
    string Months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October" , "November", "December"};
    cin >> n;
    cout << Months[--n];
    return 0;
}
