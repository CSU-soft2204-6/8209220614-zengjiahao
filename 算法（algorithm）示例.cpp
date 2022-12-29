#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template<class T>
void print(T &con)    //输出容器中所有元素
{
  if(con.empty())
     cout<<"Container is empty!"<<endl;
  else
  {
	  typename T::iterator it;   //设置迭代器

	  for(it=con.begin(); it!=con.end();it++)
	  {
		cout<<*it<<" ";
      }
	  cout<<endl;
  }
}
int main()
{
  int num;
  vector<char> vec_A(8);  //定义容器vec_A

  cout<<"Fill vec_A with 'A':"<<endl;
  fill(vec_A.begin(),vec_A.end(),'A');  //填充数据元素
  print(vec_A);

  cout<<"Copy element of vector to vec_A:"<<endl;
  char array_B[]={'B','B','B','B',};
  vector<char> vec_B(array_B,array_B+4);  //定义容器vec_A,并初始化
  copy(vec_B.begin(),vec_B.end(),vec_A.begin()+2);   //复制数据元素
  print(vec_A);

  cout<<"Remove 'A' from vec_A:"<<endl;
  vector<char>::iterator it;
  it=remove(vec_A.begin(),vec_A.end(),'A');  //移除数据元素
  vec_A.erase(it,vec_A.end());               //删除数据元素
  print(vec_A);

  cout<<"Repalce 'B' with 'C':"<<endl;
  replace(vec_A.begin(),vec_A.begin()+2,'B','C');  //替换数据元素
  replace(vec_B.begin(),vec_B.end(),'B','X');
  print(vec_A);

  cout<<"Inserting:"<<endl;
  vec_A.insert(vec_A.begin(),'D');  //插入数据元素
  vec_A.insert(vec_A.end(),'A');
  print(vec_A);
  cout<<"Sorting:"<<endl;
  sort(vec_A.begin(),vec_A.end());  //排序
  print(vec_A);

  vector<char> vec_C(vec_A.size()+vec_B.size());
  cout<<"Merge vec_A and vec_B:"<<endl;
  merge(vec_A.begin(),vec_A.end(),vec_B.begin(),vec_B.end(),
vec_C.begin());  //合并
  print(vec_C);
  num=count(vec_C.begin(),vec_C.end(),'B');  //统计数据元素
  cout<<"Counting the number of 'B' in vec_C:"<<endl;
  cout<<num<<endl;
  return 0;
}
