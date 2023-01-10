#include <iostream>
#include <sstream>
using namespace std;


int main(){
	int desimal, sisa;
	string hasil, temp;
	cout << "desimal : "; cin >> desimal;
	
	for (int a = desimal; a > 0; a /= 2){
		stringstream bit;
		sisa= a % 2;
		cout << sisa;
		bit << sisa;
		bit >> temp;
		hasil += temp;
	}
	
	for (int b = hasil.length(); b >=0; b--){
		cout << hasil[b];
	}
}

