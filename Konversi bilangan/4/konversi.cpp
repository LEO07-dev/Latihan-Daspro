#include<iostream>
using namespace std;
int main()
{
        long desimal, pembagi=1073741824, bit;
        cout<<"Nilai Desimal : ";
        cin>>desimal;
        cout << "=======================================================================================\n";
                cout<<"Hexadesimal = "<<hex<<desimal<< "\t\t\t";
                cout<<"Oktal       = "<<oct<<desimal<< "\t\t\t";
                cout<<"Biner       = ";
        while(pembagi>desimal) pembagi/=2;
        do{
                bit=desimal/pembagi;
                cout<<bit;
                desimal=desimal%pembagi;
                pembagi/=2;
        }
        while(pembagi>=1);
        cout<<"\t\t\t";
        return 0;
}
