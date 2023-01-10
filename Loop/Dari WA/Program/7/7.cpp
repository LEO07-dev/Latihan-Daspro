#include <iostream>
using namespace std;

int main()
{
	int a=60;
	int b=1;
	int h=0;
	while (a>=55 && b<=6)
	{
		cout << a << " + " << b << " + ";
		h=h+a+b;
		b++;
		a--;
		}
		cout << " = " << h;
		
	return 0;
	}
