//Begin15. Aylananing yuzasi S berilgan. Uning diametri d va radiusi R aniqlansin. 
// L=2*pi*R; S=pi*R*R;
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float R,D,S;
	cout<<"S= "; cin>>S;
	R=sqrt(S/M_PI);
	D=2*sqrt(S/M_PI);
	cout<<R<<endl;
	cout<<D<<endl;
	return main();
}
