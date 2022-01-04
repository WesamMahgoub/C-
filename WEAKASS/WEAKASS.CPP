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
	  getch();
	}
	point(int m)
	{
	  x = m;
	  y = m;
	  cout << "point one parameter constructor" << endl;
	  getch();
	}
	point(int m,int n)
	{
	  x = m;
	  y = n;
	  cout << "point two parameter constructor" << endl;
	  getch();
	}
	~point()
	{
	  cout << "point destructor" << endl;
	  getch();
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
	  getch();
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
	  getch();
	}
	line(int x1,int y1,int x2,int y2)
	{
	  start.setxy(x1,y1);
	  end.setxy(x2,y2);
	  cout << "line with 4 parameter constructor" << endl;
	  getch();
	}
	line(point p1,point p2)//:point(p1.getx(),p1.gety()),point(p2.getx,p2.gety())
	{
	  point* ptr1 = new point(p1.getx(),p1.getx());
	  point* ptr2 = new point(p2.getx(),p2.getx());

	}
	~line()
	{
	  cout << "line destructor" << endl;
	  getch();
	}
	void print()
	{
	  cout << "start: ";
	  start.print();
	  cout << endl;
	  cout << "end: ";
	  end.print();
	  cout << endl;
	  getch();
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
	  getch();
	}
	circle(int x1,int y1,int r) : center(x1,y1),rad(r)
	{
	  cout << "circle constructor with 3 parameters" << endl;
	  getch();
	}
	~circle()
	{
	  cout << "circle destructor " << endl;
	  getch();
	}
	void print()
	{
	  cout << "center: ";
	  center.print();
	  cout << endl << "radius: " << rad << endl;
	  getch();
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
	  getch();
	}
	rect(int x1,int y1,int x2,int y2) : l(x1,y1),r(x2,y2)
	{
	  cout << "rect constructor with 4 parameters" << endl;
	  getch();
	}
	rect(point p1,point p2)//:point(p1.getx(),p1.gety()),point(p2.getx,p2.gety())
	{
	  point* ptr1 = new point(p1.getx(),p1.getx());
	  point* ptr2 = new point(p2.getx(),p2.getx());
	}
	~rect()
	{
	  cout << "rect destructor" << endl;
	  getch();
	}
	void print()
	{
	  cout << "left: ";
	  l.print();
	  cout << endl << "right: ";
	  r.print();
	  cout << endl;
	  getch();
	}
};


class Picture
{
  private:
	int cnum;
	int rnum;
	int lnum;
	circle* pcircle;
	rect* prect;
	line* pline;

  public:
	Picture()
	{
	  cnum = 0;
	  rnum = 0;
	  lnum = 0;
	  pcircle = NULL;
	  prect = NULL;
	  pline = NULL;
	}

	Picutre(int cn,int rn,int ln,circle* pc,rect* pr,line* pl)
	{
	  cnum = cn;
	  rnum = rn;
	  lnum = ln;
	  pcircle = pc;
	  prect = pr;
	  pline = pl;
	}

	void setcircle(int n,circle* c)
	{
	  cnum = n;
	  pcircle = c;
	}
	void setrect(int n,rect* r)
	{
	  rnum = n;
	  prect = r;
	}
	void setline(int n,line* l)
	{
	  lnum = n;
	  pline = l;
	}
	void print()
	{
	  for(int i=0;i<cnum;i++)
		pcircle[i].print();
	  for(i=0;i<rnum;i++)
		prect[i].print();
	  for(i=0;i<lnum;i++)
		pline[i].print();
	}

};

void main()
{
  clrscr();
/*  Picture pic1;
  circle carr[3] = {circle(50,50,50),circle(200,100,100),circle(420,50,30)};
  rect rarr[2] = {rect(30,40,170,100),rect(420,50,500,300)};
  line larr[2] = {line(420,50,300,300),line(40,500,500,400)};
  pic1.setcircle(3,carr);
  pic1.setrect(2,rarr);
  pic1.setline(2,larr);
  pic1.print();

*/
  Picture pic;
  circle carr[3] = {circle(50,50,50),circle(200,100,100),circle(420,50,30)};
  rect rarr[2];
  rarr[0] = rect(30,40,170,100);
  point p1(420,50);
  point p2(500,300);
  rarr[1] = rect(p1,p2);
  line* larr;
  larr = new line[2];
  larr[0] = line(point(420,50),point(300,300));
  larr[1] = line(40,500,500,400);
  pic.setcircle(3,carr);
  pic.setrect(2,rarr);
  pic.setline(2,larr);
  pic.print();
  delete[] larr;

  getch();
}