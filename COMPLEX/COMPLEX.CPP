#include <conio.h>
#include <iostream.h>
#include <math.h>

struct complex
{
  private:
	float real,imag;

  public:
	complex();
	complex(float r);
	complex(float r,float i);

	~complex();

	void setReal(float i);
	void setImag(float i);

	float getReal();
	float getImag();

	void print();
};

complex add(complex,complex);
complex sub(complex,complex);

void main()
{
  clrscr();
  complex comp1, comp2(3,4), resultcomp(5);
  comp1.setReal(7);
  comp1.setImag(2);
  resultcomp = add(comp1,comp2);
  resultcomp.print();
  resultcomp = sub(comp1,comp2);
  resultcomp.print();

  getch();
}

complex::complex()
{
  real = 0;
  imag = 0;
  cout << "\n Default Constructor";
}

complex::complex(float r)
{
  real = r;
  imag = r;
  cout <<"\n Constructor with one parameter";
}

complex::complex(float r,float i)
{
  real = r;
  imag = i;
  cout <<"\n Constructor with two parameters";
}

complex::~complex()
{
  cout << "\n Destructor";
}

void complex::setReal(float r)
{
  real = r;
}

void complex::setImag(float i)
{
  imag = i;
}

float complex::getReal()
{
  return real;
}

float complex::getImag()
{
  return imag;
}

void complex::print()
{
  if(imag<0)
	cout  << real << "-" << fabs(imag) << "i" << endl;
  else
	cout << real << "+" << imag << "i" << endl;
}

complex add(complex c1,complex c2)
{
  complex temp;
  temp.setReal(c1.getReal() + c2.getReal());
  temp.setImag(c1.getImag() + c2.getImag());
  return temp;
}

complex sub(complex c1,complex c2)
{
  complex temp;
  temp.setReal(c1.getReal() - c2.getReal());
  temp.setImag(c1.getImag() - c2.getImag());
  return temp;
}