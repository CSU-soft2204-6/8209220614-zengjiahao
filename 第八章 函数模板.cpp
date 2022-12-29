#include<iostream>
using namespace std;
template <class T1,class T2>
T1 add(T1 x, T2 y)
{
	cout<<"("<<sizeof(T1)<<","<<sizeof(T2)<<")\t";
	return x+y;
}
int main()
{
	  cout<<add(9,8)<<endl;
	  cout<<add(9.0,8.0)<<endl;
	  cout<<add(9,8.0)<<endl;
      cout<<add(9.0,8)<<endl;
	  cout<<add('A','A'-'0')<<endl;
      cout<<add(long(8),9)<<endl;
      return 0;
}
