// 9. X,Y haqiqiy sonlari berilgan. Quyidagi ifodani hisoblash programmasini tuzing.
#include <iostream>
#include <math.h>
using namespace std; 
int main()
{
	float X,Y,S;
	cout<<"X="; cin>>X;
	cout<<"Y="; cin>>Y;
	S=(fabs(X)-fabs(Y))/(1+fabs(X)*fabs(Y));
	cout<<S<<endl;
	return 0;
}