#include<iostream>
#include<queue>
using namespace std;

template<class T>
void print(queue<T> &q)
{
  if(q.empty())   //判断队列是否空
     cout<<"Queue is empty!"<<endl;
  else  {
	 int j=q.size();
	  for(int i=0; i<j;i++) {
		cout<<q.front()<<" ";
         q.pop();    //出队列
	  }
	  cout<<endl;
  }
}

int main()
{
  queue<int>  q;  //创建队列
  q.push(1);      //进队列
  q.push(2);
  q.push(3);
  q.push(4);
   //取队头元素
  cout<<"The first element is : "<<q.front()<<endl;
//取队尾元素
  cout<<"The last element is : "<<q.back()<<endl;
  cout<<"The queue is : "<<endl;
  print(q);
    return 0;
}
