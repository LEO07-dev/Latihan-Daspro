#include <iostream>
using namespace std;

int main(){
	
	int a;
	int b=0;
	for (a=6;a<=100;a+=6)
	{
		cout << a << " \t";
		b=b+a;
	}
	cout << "Total Jumlah Nilai : \n" << b;
	
	return 0;
}
