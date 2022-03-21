// Begin22. Berilgan A va B sonlarning qiymatlarini almashtiring. A va B ning yangi qiymatini ekranga chiqarilsin.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int A,B,C;
	cout<<"A= "; cin>>A;
	cout<<"B= "; cin>>B;
	C=A;
	A=B;
	B=C;
	cout<<"A="<<A<<endl;
	cout<<"B="<<B<<endl;
	return 0;
}