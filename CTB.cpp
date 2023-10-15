#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

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
int main()
{
	/*system("cls");*/
	test t1=10;
	int z;
	z=t1;
	cout<<"CTB="<<z;
	getch();
}
