#include <iostream>
using namespace std;

int main(){
	
	int a;
	int b=0;
	for (a=10;a>=1;a--)
	{
		cout << a << " \t";
		b=b+a;
	}
	cout << "Total Jumlah Nilai : \n" << b;
	
	return 0;
}
