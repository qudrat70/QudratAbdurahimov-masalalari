// Begin19. To'g'ri to'rtburchakning qara-qarshi uchlari koordinatalar berilgan. Uning tomonlari 
// koordinata o'qiga parallel. To'g'ri to'rtburchakning perimetri va yuzasini aniqlansin.
#include <iostream>
using namespace std;
int main()
{
	int x1,x2,y1,y2;
	cout<<"x1="; cin>>x1;
	cout<<"x2="; cin>>x2;
	cout<<"y1="; cin>>y1;
	cout<<"y2="; cin>>y2;
	cout<<"P="<<2*(abs(x1-x2)+abs(y1-y2))<<endl;
	cout<<"S="<<abs(x1-x2)*abs(y1-y2)<<endl;
}