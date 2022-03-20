//Begin13.Umumiy markazga bo'lgan ikkita aylana Radiusi Berilgan. R1,R2,(R1>R2)
//Ularning yuzalari S1 va S2 ularning ayirmasi S3 aniqlansin. S1=pi*R1, S2=pi*R2, S3=pi(R1-R2);
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float R1,R2,pi=3.14,S1,S2,S3;
	cout<<"R1="; cin>>R1;
	cout<<"R2="; cin>>R2;
	S1=pi*R1;
	S2=pi*R2;
	S3=pi*(R1-R2);
	cout<<S1<<endl;
	cout<<S2<<endl;
	cout<<S3<<endl;	
	return 0;
}
