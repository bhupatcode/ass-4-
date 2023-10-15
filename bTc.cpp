/* basic to class*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class data
{
	public :
	int a,b;
	
	public:
	data()
	{
		
	}
	data(int x)
	{
		a=x;
		
		b=0;	
	}	
	int dis()
	{
		cout<<"A="<<a<<endl;
		cout<<"B="<<b;
	}
};
int main()
{
	data d1;
	int z=9;
	d1=z;
	d1.dis();
	getch();
}
