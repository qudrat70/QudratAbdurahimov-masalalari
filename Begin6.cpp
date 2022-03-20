//Begin6. Paralelepepidning tomonlari a,b,c berilgan. Uning hajmini 
//V=a*b*c* va to'la sirtini S=2*(a*b+b*c+a*c) aniqlansin
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c, S,V;
	cout<<"a="; cin>>a;
	cout<<"b="; cin>>b;
	cout<<"c="; cin>>c;
	V=a*b*c;
	cout<<V<<endl;
	S=2*(a*b+b*c+a*c);
	cout<<S<<endl;
	return 0;
}