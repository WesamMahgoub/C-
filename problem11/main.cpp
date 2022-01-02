#include <iostream>

using namespace std;
class sterling
{
    private:
    long pound;
    int shilling;
    int pence;
    public:
    sterling():pound(0),shilling(0),pence(0)
    {}
    sterling(double decimal)
    {
        pound = long(decimal);
        shilling = int((decimal - pound)*20);
        pence = int((decimal - pound)*20 - shilling)*12);
        }
    sterling(long p,int s,int p):pound(p),shilling(s),pence(p)
    {}
    void getsterling()
    {
        cout << "Enter money:";
        cin >> pound >> shilling >> pence;
        }
        void putsterling()
        {
            cout << pound << ":" << shilling << ":" << pence;
            }
            double operator double(sterling s)
            {
                return (pound + double(shilling)/20 + double(pence)/240);
                }
            sterling operator + (sterling s1)
            {
                return sterling(double(sterling(pound,shilling,pence)) + double(s);
            }
            sterling operator - (sterling s1)
            {
                return sterling(double(sterling(pound,shilling,pence)) - double(s);
            }
            sterling operator / (sterling s1)
            {
                return sterling(double(sterling(pound,shilling,pence)) / double(s);
            }
            sterling operator / (double d)
            {
                return sterling(double(sterling(pound,shilling,pence)) / d;
            }
            sterling operator * (double d)
            {
                return sterling(double(sterling(pound,shilling,pence)) * d;
            }

};
int main()
{

    return 0;
}
