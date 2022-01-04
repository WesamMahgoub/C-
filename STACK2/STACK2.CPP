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
  Stack(Stack& s);
  Stack(int s);
  ~Stack();
  int push(int);
  int pop(int&);
  int IsFull();
  int IsEmpty();
  Stack& operator =(Stack& c);
  static int getcounter();
  friend void viewcontent(Stack& s);

};

int Stack::counter = 0;

Stack::Stack(Stack& s)
{
  this->top = s.top;
  this->size = s.size;
  ptr = new int[size];
  for(int i=0;i<top;i++)
  {
	ptr[i] = s.ptr[i];
  }
}

Stack& Stack::operator =(Stack& c)
{
  top = c.top;
  size = c.size;
  delete[]ptr;
  ptr = new int[size];
  for(int i=0;i<top;i++)
	ptr[i] = c.ptr[i];
}
void viewcontent(Stack& s)
{
  for(int i=0;i<s.top;i++)
  {
	cout << "element" << i+1 << "=" << s.ptr[i] << endl;
  }
  getch();
}

void main()
{
  clrscr();
  Stack s1(2),s2(s1);
  int num;

  s1.push(5);
  s1.push(14);
  s1.push(20);

  viewcontent(s1);
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
  s2.pop(num);
  cout << num << endl;
  Stack s4(10),s3(7);
  s4.push(37);
  s4.push(-12);
  s4.push(26);
  s3 = s4;
  s3.pop(num);
  cout << num << endl;
  s4.pop(num);
  cout << num << endl;

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