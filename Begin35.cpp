// Begin35. Qayiqning tezligi V km/soat, daryo oqiming tezligi U km/soat,(V>U). Qayiqning daryo oqimi
// bo'yicha harakatlanish vaqti T1, oqimga qarshi T2. Qayiqni yurgan S yo'lini aniqlovchi dastur tuzing.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float V, U, T1, T2, S;
	cout<<"V="; cin>>V;
	cout<<"U="; cin>>U;
	cout<<"T1="; cin>>T1;
	cout<<"T2="; cin>>T2;
	cout<<"S="<<(2*V*T1*T2)/(T1+T2);
	
}