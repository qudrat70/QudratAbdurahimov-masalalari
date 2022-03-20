//Begin12. To'g'ri uchburchakning katetlari a va b berilgan. Uning gipotenuzasi
// c va parametri P aniqlansin.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c, P;
	cout<<"a= "; cin>>a;
	cout<<"b= "; cin>>b;
	c=sqrt(a*a+b*b);
	P=a+b+c;
	cout<<c<<endl;
	cout<<P<<endl;
	return 0;
}
