#include <iostream>
using namespace std;

int main(){
/*
	int a;
	int b;
	int c;
	for (a=1;a<=13;a+=4)
	{
	for (b=2;a<=10;a+=4)
	{
	for (c=3;a<=11;a+=4)
	{
		cout << a << " " << b << " " << c << " " << "a ";
		
	}
		
	}
		cout << "13";
	}

*/

	int a;
	for (a=1;a<=13;a++)
	{
		if (a%4==0)
		{
			cout << 'a' << " ";
		}
		else
		{
			cout << a << " ";
		}
	}
	
	return 0;
}
