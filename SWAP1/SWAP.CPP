#include <stdio.h>
#include <conio.h>

void swap(int&,int&);

void main()
{
  int x = 1,y = 2;
  clrscr();
  swap(x,y);
  printf("%d\n%d\n",x,y);
  getch();
}

void swap(int& a,int& b)
{
  int temp = a;
  a = b;
  b = temp;
}