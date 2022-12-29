#include<iostream>
using namespace std;
template <class T>
class Stack
{
  private:
      int size;
	  int top;
	  T* space;
  public:
	  Stack(int=10);
	  ~Stack()
	  {
		  delete [] space;
	  }
	  bool push(const T&);
	  T pop();
	  bool IsEmpty() const
	  {
		  return top==size;
	  }
	  bool IsFull() const
	  {
		  return top==0;
	  }
};
template <class T>
Stack <T>::Stack(int size)
{
   this->size=size;
   space=new T[size];
   top=size;
}
template <class T>
bool Stack <T>::push(const T& element)
{
   if(!IsFull())
   {
	   space[--top]=element;
	   return true;
   }
   return false;
}
template <class T>
T Stack <T>::pop()
{
   return space[top++];
}
int main()
{
   Stack<char> S1(4);
   S1.push('x');
   S1.push('y');
   S1.push('z');
   S1.push('u');
   S1.push('v');
   while(!S1.IsEmpty())
   	   cout<<S1.pop()<<endl;
      return 0;
}
