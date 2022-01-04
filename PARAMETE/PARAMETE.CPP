#include <iostream.h>
#include <conio.h>

void sum(int a,int b)
{
  a = a+b;
}

void main()
{
  clrscr();
  int x = 5,y = 3;
  sum(x,y);
  cout << x << endl << y;
  getch();
}