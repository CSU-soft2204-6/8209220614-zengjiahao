#include <iostream>
using namespace std;
template <class TYPE>
class ListNode
{
  private:
	TYPE data;
	ListNode * next;
    static ListNode * CurNode;
    static ListNode * head;
  public:
	ListNode()
	{
	    next=NULL;
		head=CurNode=this;
	}
	ListNode(TYPE NewData)
	{
        data=NewData;
		next=NULL;
	}
	void AppendNode(TYPE NewNode);
	void DispList();
	void DelList();
};
template <class TYPE>
ListNode<TYPE> * ListNode<TYPE>::CurNode;
template <class TYPE>
ListNode<TYPE> * ListNode<TYPE>::head;
template <class TYPE>
void ListNode<TYPE>::AppendNode(TYPE NewData)
{
	CurNode->next=new ListNode(NewData);
	CurNode=CurNode->next;
}
template <class TYPE>
void ListNode<TYPE>::DispList()
{
	CurNode=head->next;
	while(CurNode!=NULL)
	{
		cout<<CurNode->data<<endl;
		CurNode=CurNode->next;
	}
}
template <class TYPE>
void ListNode<TYPE>::DelList()
{
	ListNode *q;
    CurNode=head->next;
	while(CurNode!=NULL)
	{
		  q=CurNode->next;
		  delete CurNode;
		  CurNode=q;
	}
    head->next=NULL;
}
int main()
{
  ListNode<char> CList;
  CList.AppendNode('A');
  CList.AppendNode('B');
  CList.AppendNode('C');
  CList.DispList();
  CList.DelList();
  CList.DispList();
  return 0;
}
