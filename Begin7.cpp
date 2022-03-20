//Begin7. Doiraning radiusi R berilgan. Uning uzinligi L va yuzasi S aniqlansin.
// L=2*pi*R, S=pi*R*R;
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float R,L,S,pi=3.14;
	cout<<"R = "; cin>>R;
	L=2*pi*R;
	S=pi*R*R;
	cout<<L<<endl;
	cout<<S<<endl;
	return 0;
}