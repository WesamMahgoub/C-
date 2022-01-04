#include <iostream.h>
#include <conio.h>


class point
{
  private:
	int x;
	int y;
  public:
	point()
	{
	  x = 0;
	  y = 0;
	  cout << "Point default constructor" << endl;
	}
	point(int m)
	{
	  x = m;
	  y = m;
	  cout << "point one parameter constructor" << endl;
	}
	point(int m,int n)
	{
	  x = m;
	  y = n;
	  cout << "point two parameter constructor" << endl;
	}
	~point()
	{
	  cout << "point destructor" << endl;
	}
	void setx(int m)
	{
	  x = m;
	}
	void sety(int n)
	{
	  y = n;
	}
	void setxy(int m,int n)
	{
	  x = m;
	  y = n;
	}
	int getx()
	{
	  return x;
	}
	int gety()
	{
	  return y;
	}
	void print()
	{
	  cout << "x = " << x << " y = " << y << endl;
	}
};

class line
{
  private:
	point start;
	point end;
  public:
	line()
	{
	  start.setxy(0,0);
	  end.setxy(0,0);
	  cout << "line default constructor" << endl;
	}
	line(int x1,int y1,int x2,int y2)
	{
	  start.setxy(x1,y1);
	  end.setxy(x2,y2);
	  cout << "line with 4 parameter constructor" << endl;
	}
	~line()
	{
	  cout << "line destructor" << endl;
	}
	void print()
	{
	  cout << "start: ";
	  start.print();
	  cout << endl;
	  cout << "end: ";
	  end.print();
	  cout << endl;
	}
};

class circle
{
  private:
	point center;
	int rad;
  public:
	circle() : center()
	{
	  rad = 0;
	  cout << "circle default constructor" << endl;
	}
	circle(int x1,int y1,int r) : center(x1,y1),rad(r)
	{
	  cout << "circle constructor with 3 parameters" << endl;
	}
	~circle()
	{
	  cout << "circle destructor " << endl;
	}
	void print()
	{
	  cout << "center: ";
	  center.print();
	  cout << endl << "radius: " << rad << endl;
	}
};

class rect
{
  private:
	point l;
	point r;
  public:
	rect() : l(),r()
	{
	  cout << "rect default constructor" << endl;
	}
	rect(int x1,int y1,int x2,int y2) : l(x1,y1),r(x2,y2)
	{
	  cout << "rect constructor with 4 parameters" << endl;
	}
	~rect()
	{
	  cout << "rect destructor" << endl;
	}
	void print()
	{
	  cout << "left: ";
	  l.print();
	  cout << endl << "right: ";
	  r.print();
	  cout << endl;
	}
};

void main()
{
  clrscr();

  circle c1(250,150,100);
  rect r1(10,100,90,350);
  line l1(30,100,350,400);

  c1.print();
  r1.print();
  l1.print();

  getch();
}