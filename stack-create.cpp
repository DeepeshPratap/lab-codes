
#include <iostream>

using namespace std;
struct node{
  int data;
  struct node *link;
};
struct node *create(struct node *top,int n)
{
   
    int x;
    top=NULL;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        struct node *temp=new node;
        temp->data=x;
        temp->link=top;
        top=temp;
    }
    return top;
}
void output(struct node *top)
{
    cout<<"stack:";
    struct node *p;
    p=top;
    do
    {
        cout<<p->data<<"->";
        p=p->link;
    }while(p!=NULL);
}
node *push(struct node *top,int x)
{
   
        struct node *temp=new node;
        temp->data=x;
        temp->link=top;
        top=temp;
        return top;
       
}

node *pop(struct node *top,int &a)
{
    node *temp=top;
    top=top->link;
    a=temp->data;
    delete temp;
    return top;
   
}
int length(struct node *top)
{
    struct node *p;
    p=top;
    int l=0;
    do{
        p=p->link;
        l++;
    }
    while(p!=NULL);
    return l;
}


int main()
{
    struct node *top;
    int n;
    int x,y,pos;
    int a;
    cout<<"Enter how many elemnt you want to create on stack: "<<endl;
    cin>>n;
    cout<<"Enter Elements:"<<endl;
    top=create(top,n);
    output(top);
    cout<<endl<<"Enter value want to PUSH"<<endl;
    cin>>x;
    top=push(top,x);
    output(top);
    cout<<endl<<"After poping ";
    top=pop(top,a);
    output(top);
    cout<<endl<<"Element you Deleted "<<a;
    cout<<endl<<"Lenght of stack:"<<length(top);
    
    return 0;
}
	
	

	
	
