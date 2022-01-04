#include <iostream.h>
#include <conio.h>

class Stack
{
  private:
	int top;
	int size;
	int* ptr;
	static int counter;
  public:
  Stack();
  Stack(int s);
  ~Stack();
  int push(int);
  int pop(int&);
  int IsFull();
  int IsEmpty();

  static int getcounter();

};

int Stack::counter = 0;

void main()
{
  clrscr();
  Stack s1(2),s2;
  int num;

  s1.push(5);
  s1.push(14);
  s1.push(20);

  if(s1.pop(num))
  {
	cout << num << endl;
  }
  if(s1.pop(num))
  {
	cout << num << endl;
  }
  if(s1.pop(num))
  {
	cout << num << endl;
  }
  else
	cout << "\n Stack is empty" << endl;
  cout << "the number of objects is " << Stack::getcounter() << endl;
  {
	Stack s3(10);
	cout << "the number of objects is " << Stack::getcounter() << endl;
  }

  cout << "the number of objects is :" << Stack::getcounter() << endl;
  getch();
}

Stack::Stack()
{
  size = 10;
  top = 0;
  counter++;
  ptr = new int[size];
  cout << "Default Instructor" << endl;
}

Stack::Stack(int n)
{
  size = n;
  top = 0;
  counter++;
  ptr = new int[size];
  cout << "one parameter Instructor" << endl;
}

int Stack::push(int n)
{
  if(IsFull())
	return 0;

  ptr[top++] = n;
  return 1;
}

int Stack::pop(int& n)
{
  if(IsEmpty())
	return 0;

  n = ptr[--top];
  return 1;
}

int Stack::IsFull()
{
  return (top == size);
}

int Stack::IsEmpty()
{
  return (top == 0);
}

int Stack::getcounter()
{
  return counter;
}

Stack::~Stack()
{
  delete[] ptr;
  size = 0;
  counter--;
  cout << "Destructor" << endl;
}