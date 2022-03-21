// Begin36. Birinchi avtomobilning tezligi V1 km/soat, ikkinchisiniki V2 km/soat, ular orasida Masofa S.
// Ular bir-biridan uzoqlasha boshlasa T vaqtdan keyin ular orasida masofani aniqlaydigan dastur tuzing.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float V1, V2, T, S;
	cout<<"V1="; cin>>V1;
	cout<<"V2="; cin>>V2;
	cout<<"T="; cin>>T;
	cout<<"S="; cin>>S;
	cout<<"S="<<T*(V1+V2)+S;
	
}