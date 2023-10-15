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
		int sum(int a,int b,int c)
		{
			cout<<a+b+c;
		}
};
int main()
{
	system("cls");
	A a1;
	a1.sum(10,25);
	a1.sum(12,25,45);
	getch();
	
}

