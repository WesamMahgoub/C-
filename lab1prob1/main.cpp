#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum MatrixType = {Identity, Random};
int main()
{
    class matrix
    {
    private:
        int row,column;
        float** two_D;
    public:
        matrix(int r,int c):row(r),column(c)
        {
            two_D = new float* [row];
            for(int i=0;i<row;i++)
            {
                two_D[i] = new float[column];
                for(int j=0;j<column:j++)
                {
                    two_D[i][j] = 0;
                }
            }
        }
        matrix(int r,int c,float d):row(r),column(c)
        {
            two_D = new float*[row];
            for(int i=0;i<row;i++)
            {
                two_D[i] = new float[column];
                for(int j=0;j<column;j++)
                {
                    two_D = d;
                }
            }
        }
        matrix(int r,int c,MatrixType m):row(r),column(c)
        {
            two_D = new float* [row];
            for(int i=0;i<row;i++)
            {
                two_D[i] = new float[column];
                for(int j=0;j<column;j++)
                {
                    if(m==identity)
                    {
                    if(i==j)
                        two_D[i][j] = 1;
                    else
                        two_D[i][j] = 0;
                    }
                    else
                    {
                        srand(time(NULL));
                        two_D[i][j] = rand();
                    }
                }
            }
        }
        void print()
        {
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<column;j++)
                {
                    cout << two_D[i][j] << " ";
                }
                cout << endl;
            }
        }
        float& access(int r,int c)
        {
            return two_D[r][c];
        }
        matrix operator +(matrix m)
        {
            matrix temp(row,column);
            if(m.row == row && m.column == column)
            {
                for(int i=0;i<row;i++)
                {
                    for(int j=0;j<column;j++)
                    {
                        temp.two_D[i][j] = m.two_D[i][j] + two_D[i][j];
                        return temp.two_D[i][j];
                    }
                }
            }
        }
        matrix operator ==(matrix)
        {

        }

    };
    return 0;
}
