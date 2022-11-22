#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int k=2;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(6-i<=j && i+4>=j)
			{
				if(k>=2 && k<=10)
				{
					cout<<"  "<<k;
					k++;
					if(k%2==0 || k>=10)
					{
						k=2;
					}
					k++;
				}
                k++;
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}
}