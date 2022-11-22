#include<iostream>
using namespace std;
int volume(float j)
{
	cout<<"enter your value:- ";
	cin>>j;

	for (int i = 1; i <= j; i++)
	{
		float sum=i*i*i;
		cout<<"your cube "<<i<<" is:- "<<sum<<endl;	
	}
	for (int i = 1; i <= j; i++)
	{
		float sum=i*i;
		cout<<"your squre "<<i<<" is:- "<<sum<<endl;	
	}
	return 0;
}
int main()
{
	float j;
	volume(j);
	return 0;
}
