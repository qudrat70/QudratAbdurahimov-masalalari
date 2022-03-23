// Integer12. Uch xonali son berilgan.Uning raqamlarini teskari tartibda yozishdan hosil bo'lgan sonni aniqlovchi programma tuzing?
#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"x= "; cin>>x;
	cout<<"x ning teskarisi "<<(x%10*100+x%100/10*10+x/100);
	return 0;
} 