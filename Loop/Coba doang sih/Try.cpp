#include <iostream>
using namespace std;

int main()
{
    int i, m;
    i=1;
    m=0;
    while(i<=20)
    {
        m=0;
        do
        {
            cout << m << " ";
            m=m+6;

        }while(m<100);
        i=i+2;
        cout << endl << endl;
    }
    return 0;
}
