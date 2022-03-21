// Begin40. A1, B1, C1, A2, B2, C2 koeffisentlari berilgan, ciziqli tenglamalar sistemasini 
// yechimlarini aniqlaydigan programma tuzing.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float A1, B1, C1, A2, B2, C2, x, y, D;
	cout<<"A1= "; cin>>A1;
	cout<<"B1= "; cin>>B1;
	cout<<"C1= "; cin>>C1;
	cout<<"A2= "; cin>>A2;
	cout<<"B2= "; cin>>B2;
	cout<<"C2= "; cin>>C2;
	D=(A1*B2-A2*B1);
	cout<<"D="<<D<<endl;
	cout<<"x= "<<(C1*B2-C2*B1)/D<<endl;
	cout<<"y= "<<(A1*C2-A2*C1)/D<<endl;
}