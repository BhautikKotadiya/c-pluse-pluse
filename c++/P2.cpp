#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=21;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i==21 || i==10 || j==1 && i>10 & i<21 || j==9 && i>10 & i<21 || i==16 && j>2 & j<8 || j==3 && i>16 & i<21 
               || j==7 && i>16 & j<21 || 11-i==j && i>5 || i-1==j && j>4 || j==5 && i<6 || i==1 && j>5 & j<7 || i==2 && j>6 & j<8 || i==3 && j>5 & j<7)
            {
                cout<<" *";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}