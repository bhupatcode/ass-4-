#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class A
{
	public:
		virtual int show()
		{
			cout<<"|parant"<<endl;
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
	A a1;
	B b1;
	
	A *ok;
	ok=&a1;
	a1.show();
	ok=&b1;
	b1.show();
	
	getch();
}

