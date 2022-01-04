#include <iostream.h>
#include <conio.h>

template <class T>
class Stack
{
  private:
	int top,size;
	T* ptr;
	static int counter;

  public:
	Stack()
	{
	  top = 0;
	  size = 10;
	  ptr = new T[size];
	  counter++;
	}

	Stack(int n)
	{
	  top = 0;
	  size = n;
	  ptr = new T[size];
	  counter++;
	}

	~Stack()
	{
	  delete[] ptr;
	  counter--;
	}

	static int getcounter()
	{
	  return counter;
	}

	int isfull()
	{
	  return (this->top == this->size);
	}

	int isempty()
	{
	  return (this->top == 0);
	}

	Stack(Stack& s);

	int push(T data);

	int pop(T& n);

	Stack& operator = (Stack& s);

	friend void viewcontent(Stack s);

};

template <class T>
int Stack<T>::counter = 0;

template <class T>
Stack<T>::Stack(Stack<T>& mystk)
{
  top = mystk.top;
  size = mystk.size;
  ptr = new T[size];
  for(int i=0;i<top;i++)
  {
	ptr[i] = mystk.ptr[i];
  }
  counter++;
}

template <class T>
int Stack<T>::pop(T& data)
{
  if(isempty())
	return 0;
  else
  {
	top--;
	data = ptr[top];
	return 1;
  }
}

template <class T>
int Stack<T>::push(T n)
{
  if(isfull())
	return 0;
  else
  {
	ptr[top] = n;
	top++;
	return 1;
  }
}

template <class T>
Stack<T>& Stack<T>::operator =(Stack<T>& mys)
{
  if(ptr)
	delete[]ptr;

  top = mys.top;
  size = mys.size;
  ptr = new T[size];
  for(int i=0;i<top;i++)
  {
	ptr[i] = mys.ptr[i];
  }
  return *this;
}

template <class T>
void viewcontent(Stack<T> mys)
{
  for(int i=0;i<mys.top;i++)
  {
	cout << mys.ptr[i] << endl;
  }
}

void main()
{
  clrscr();
  int n;
  Stack<int> s1(5);
  cout << "no of int stacks is: " << Stack<int>::getcounter() << endl;
  s1.push(10);
  s1.push(3);
  s1.push(2);
  s1.pop(n);
  cout << "1st int : " << n << endl;
  s1.pop(n);
  cout << "2nd int : " << n << endl;

  Stack<char> s2;
  char nc;
  cout << "no of char stacks is: " << Stack<char>::getcounter() << endl;
  s2.push('q');
  s2.push('r');
  s2.push('s');
  viewcontent(s2);
  s2.pop(nc);
  cout << "1st char: " << nc << endl;
  s2.pop(nc);
  cout << "2nd char: " << nc << endl;
  getch();

}