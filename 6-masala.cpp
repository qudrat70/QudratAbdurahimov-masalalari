//6. L uzunlikdagi matematik mayatnikning tebranish davrini hisoblovchi dastur tuzing.
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float T, L, g=10, pi=3.14;
	cout<<"L="; cin>>L;
	T=2*pi*sqrt(L/g);
	cout<<T<<endl;
	return 0; 
}