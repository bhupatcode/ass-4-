#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class A
{
	public:
	int sum(int a,int b)
	{
			cout<<a+b;
	}	
	int sum(double a,double b)
	{
			cout<<a+b;
	}
};
int main()
{
	system("cls");
	A a1;
	a1.sum(10,20);
	a1.sum(10.2,20.5);
	getch();
}
