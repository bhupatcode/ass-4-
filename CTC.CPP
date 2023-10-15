#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
//using namespace std;

class test
{
	public:
		int a;
	public:
		test()
		{
			a=0;
		}
		test(int k)
		{
			a=k;
		}
		operator int()
		{
			return a;
		}
};
class test1
{
	public:
		int b;

	public:
		test1()
		{
			b=0;
		}
		test1(int j)
		{
			b=j;
		}
		operator int()
		{
			return b;
		}
};

int main()
{
	system("cls");
	test t1;
	test1 t2=10;

    t1=t2;
	cout<<"CTC="<<t1;
	getch();
}

