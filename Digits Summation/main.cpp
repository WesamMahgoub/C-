#include <iostream>

using namespace std;

int main()
{
    string N,M;
    cin >> N >> M;
    cout << (N[N.size()-1]-48) + (M[M.size()-1]-48);
    return 0;
}
