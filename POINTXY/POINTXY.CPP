#include <stdlib.h>
#include <iostream.h>
#include <conio.h>

class point
{
  private:
	int x,y;
  public:
	point()
	{
	  x = y = 0;
	  cout << "constuctor" << endl;
	  getch();
	}
	point(int a,int b):x(a),y(b)
	{
	cout << "constructor" << endl;
	getch();
	}
	void operator()(int a,int b)
	{
	  x = a;
	  y = b;
	}
	void print()
	{
	  cout << "point data: x = " << x << "y = " << y << endl;
	  getch();
	}
	~point()
	{
	  cout << "destuctor" << endl;
	  getch();
	}
};
void main()
{
  clrscr();
  point p1(12,20);
  p1.print();
  p1(-5,132);
  p1.print();
//  getch();

}