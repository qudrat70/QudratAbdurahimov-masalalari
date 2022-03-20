//Begin14. Aylananing uzunligi L berilgan. Uning radiusi R va yuzasi S aniqlansin.
// L=2*pi*R, S=pi*R*R;
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float R,L,S;
	cout<<"L= "; cin>>L;
	R=L/(2*M_PI);
	S=M_PI*(L/(2*M_PI)*(L/(2*M_PI)));
	cout<<R<<endl;
	cout<<S<<endl;
	return 0;
}
