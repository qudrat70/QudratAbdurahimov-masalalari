// 4. H balandlikdan erkin tushayotgan toshning uchish uzoqligini aniqlovchi programma tuzilsin. (g=10 erkin tuzish tezlanishi)
#include <iostream>
#include <math.h>
using namespace std; 
int main()
{
	float H, t, g=10;
	cout<<"H=";cin>>H;
	t=sqrt(2*H/g);
	cout<<t<<endl;
	return 0;
}