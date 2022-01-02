#include <iostream>

using namespace std;

struct link
{
    double data;
    int row;
    int column;
    link* next;
};

class SMat
{
private:
    link* first;
    int counter;
public:
    SMat(): first(NULL), counter(0)
    {
    }
    SMat(double array[][3],int n)
    {
        first = NULL;
        counter = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(array[i][j] != 0)
                {
                    link* newlink = new link;
                    newlink->data = array[i][j];
                    newlink->row = i;
                    newlink->column = j;
                    newlink->next = first;
                    first = newlink;
                    counter++;
                }
            }
        }
    }

    int size()
    {
        return counter;
    }
    double max()
    {
        link* current = first;
        link* m = first->next;
          while (current != NULL)
            {
        if (current->data > m->data)
        {
        m->data = current->data;
        current = current->next;
        }
    }
    return m->data;
    }

    link* max_indexes()
    {
        link* current = first;
        link* m = first->next;
          while (current != NULL)
            {
        if (current->data > m->data)
        m->data = current->data;
        current = current->next;
            }
    return m;
    }

    double get(int i,int j)
    {
        link* current = first;

        while(current != NULL)
        {
            if(current->row == i && current->column == j)
            return current->data;
            current = current->next;
        }
        //return 0.0;
    }

void put(double a,int i,int j)
{
    link* current = first;
    while(current != NULL)
    {
        if(current->row == i && current->column == j)
            current->data = a;
        else
            current = current->next;
    }
}
};

int main()
{
    double spares[2][3] = {{0,6,4},{8,3,0}};
    SMat s(spares,2);
    cout << s.size() << endl;
   // cout << s.max() << endl;
    cout << s.get(1,2) << endl;
    cout << s.max_indexes()->row << endl << s.max_indexes()->column << endl << s.max_indexes()->data << endl;
    s.put(12,0,2);
    cout << s.get(0,3) << endl;
    return 0;
}
