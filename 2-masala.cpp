//To'g'ri burchakli uchburchakning katetlari a va b berilgan,Uchburchakning gepatenuzasi (s)va yuzi(s)ni hisoblovchi programma tuzing.
#include <iostream>
#include <math.h>
using namespace std; 
int main()
{
	float a,b,S;
	cout<<"a=";cin>>a;
	cout<<"b=";cin>>b;
	S=sqrt(pow(a,2)+pow(b,2));
	cout<<S<<endl;
	S=(a*b)/2;
	cout<<S<<endl;
	return 0;
}