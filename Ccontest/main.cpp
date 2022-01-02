#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string N;
    cin >> N;
    int n = strlen(N);
    char arr[n] = N;
    cout << arr[2];
    return 0;
}
