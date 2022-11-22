#include<iostream>
using namespace std;
class stack
{
     int n,top;
     int s[20];
     public:
     stack()
     {
	 n=5;
	 top=-1;
     }
     stack(int no)
     {
	 n=no;
	 top=-1;
     }
     void push(int data)              //insert element
     {
	 if(top==n-1)
	 {
	      cout<<endl<<"stack overflow";
	 }
	 top++;
	 s[top]=data;
     }
     void display()
     {
	 if(top==-1)
	 {
	      cout<<"\n stack is empty.";
	 }
	 else
	 {
	      cout<<endl<<"Content of stack::";
	      {
		  for(int i=top;i>=0;i--)
		  {
		      cout<<"\n\t"<<s[i];
		  }
	      }
	 }
     }
     int pop()                //delete first element
     {
	  int data;
	  if(top==-1)
	  {
	       cout<<"Stack is empty.";
	       return 0;
	  }
	  data=s[top];
	  top--;
	  return data;
     }
     int peep()                 //worked on position
     {
	 int i,data;
	 cout<<"Which element you want:";
	 cin>>i;
	 if((top-i+1)<0)
	 {
	     cout<<"stack empty";
	     return 0;
	 }
	 data=s[top-i+1];
	 cout<<endl<<"Top =========="<<endl<<top-i+1;
	 return data;
     }
     void change(int data)             //worked on position
     {
	 int i;
	 cout<<endl<<"Which position u want to change:";
	 cin>>i;
	 cout<<endl<<"Worked on position"<<endl;
	 if((top-i+1)<0)
	 {
	     cout<<"Stack is empty.";
	 }
	 s[top-i+1]=data;
     }
};
int main()
{
     int element,ch;
     stack s;
     do
     {
	  cout<<"\nSTACK IMPLEMENTATION"<<endl;
	  cout<<"1.PUSH"<<endl;
	  cout<<"2.POP"<<endl;
	  cout<<"3.PEEP"<<endl;
	  cout<<"4.DISPLAY"<<endl;
	  cout<<"5.CHANGE"<<endl;
	  cout<<"6.EXIT"<<endl;
	  cout<<"Enter your choice:";
	  cin>>ch;
	  switch(ch)
	  {
	       case 1:
		      cout<<"\nEnter element:";
		      cin>>element;
		      s.push(element);
		      break;
	       case 2:
		      element=s.pop();
		      if(element!=0)
		      {
			  cout<<"\n the deleted element is:"<<element;
		      }
		      break;
	       case 3:
		      element=s.peep();
		      if(element!=0)
		      {
			   cout<<"\n selected element is:"<<element;
		      }
		      break;
	       case 4:
		      s.display();
		      break;
	       case 5:
		      cout<<"\n Enter new element:";
		      cin>>element;
		      s.change(element);
		      break;
	       case 6:
		      cout<<"Bye Bye.....";
		      break;
	       default:
		       cout<<"\n Wrong choice.";
	  }
     }while(ch!=6);
     return 0;
}