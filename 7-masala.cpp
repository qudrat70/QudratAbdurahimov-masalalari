//7.Temperaturasi t1, bo'lgan V1 hajmi suv temperaturasi t2 bo'lgan V2 hajmli suvga
// aralashtirildi. Hosil bo'lgan suvning hajmi va temperaturasini aniqlovchi programma tuzing.
#include <iostream>
#include <math.h>
using namespace std; 
int main()
{
	float t,t1,t2,V1,V2,V;
	cout<<"t1="; cin>>t1;
	cout<<"t2="; cin>>t2;
	cout<<"V1="; cin>>V1;
	cout<<"V2="; cin>>V2;
	t=((V1+V2)*t2+V1*t1)/(2*V1+V2);
	cout<<t<<endl;
	V=V1+V2;
	cout<<V<<endl;
	return 0;
}