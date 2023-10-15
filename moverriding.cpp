#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class A
{
	public:
	int show()
		{
			cout<<"parant"<<endl;
		}
};
class B:public A
{
	public:
		int show()
		{
			cout<<"child";
		}
	
};
int main()
{
	system("cls");
	A a1;
	B b1;
	a1.show();
	b1.show();
	getch();
}

