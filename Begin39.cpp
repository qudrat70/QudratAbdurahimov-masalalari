// A,B,C koeffisentlari berilgan, A*x^2+B*x+C=0 kvadrat tenglamaning diskriminanti noldan katta
// bo'lsa uning yechimlari aniqlaydigan dastur tuzing.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float A,B,C, D;
	cout<<"A= "; cin>>A;
	cout<<"B= "; cin>>B;
	cout<<"C= "; cin>>C;
	cout<<"D>0"<<endl;
	D=pow(B,2)-4*A*C;
	cout<<"D="<<D<<endl;
	cout<<"x1="<<(-B+sqrt(D))/2*A<<endl;
	cout<<"x2="<<(-B-sqrt(D))/2*A<<endl;
	
}