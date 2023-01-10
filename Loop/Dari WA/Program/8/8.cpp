#include <iostream>
using namespace std;

int main(){

/*
int a;
	for (a=1;a<=10;a+=2)
	{
		cout << a << " A ";
		
	}
*/
	
	int b;
	for (b=1;b<=10;b++)
	{	
		if (b%2==0)
		{
			cout << 'A' << " ";
		}
		else
		{
			cout << b << " ";
		}		
	}	
	
	return 0;
}
