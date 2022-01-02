#include <iostream>

using namespace std;

class SMat
{
private:
    double** spares;
    int row;
    int column;
public:
    SMat()
    {}
    SMat(int r,int c,double** array)
    {
        int counter = 0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(array[i][j] != 0)
                {
                    counter++;
                }
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {


            }
        }

    }

};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
