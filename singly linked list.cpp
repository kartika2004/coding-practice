#include<iostream>
using namespace std;
class node
{
  public:
  int data;
  node*next;

  node(int data)
  {
    this->data=data;
    this->next=NULL;
  }
};

int main()
{
  node*n1=new node(10);
  cout<<n1->data<<endl;
  cout<<n1->next<<endl;
  
  node*n2=new node(10);
  cout<<n2->data<<endl;
  cout<<n2->next<<endl;


  node*n3=new node(10);
  cout<<n3->data<<endl;
  cout<<n3->next<<endl;


}