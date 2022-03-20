//3. Ikkita haqiqiy musbat son berilgan,. Shu sonlarning o'rta arifmetigini va o'rta geometrigini aniqlovchi dastur tuzing.
#include <iostream>
#include <math.h>
using namespace std; 
int main()
{
	float arif,geo,a,b;
	cout<<"a=";cin>>a;
	cout<<"b=";cin>>b;
	arif=(a+b)/2;
	cout<<arif<<endl;
	geo=sqrt(a*b);
	cout<<geo<<endl;
	return 0;
}