// Begin20 Tekislikdagi berilgan ikkita nuqta (x1,y1) va (x2,y2) orasidagi masofa topilsin.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x1,x2,y1,y2;
	cout<<"x1="; cin>>x1;
	cout<<"x2="; cin>>x2;
	cout<<"y1="; cin>>y1;
	cout<<"y2="; cin>>y2;
	cout<<"2 ta nuqta orasidagi masofa"<<endl;
	cout<<"L="<<sqrt(pow((x2-x1),2)+pow((y2-y1),2))<<endl;
}