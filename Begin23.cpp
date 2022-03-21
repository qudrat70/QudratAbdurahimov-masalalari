// Begin23. A,B,C sonlari berilgan Ani qiymati B ga, Bni qiymati C ga va Cni qiymati A ga
// almashtirilsin. A,B va C ning yangi qiymatlari ekranga chiqarilsin.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int A,B,C,X;
	cout<<"A= "; cin>>A;
	cout<<"B= "; cin>>B;
	cout<<"C= "; cin>>C;
	X=B;
	B=A;
	A=C;
	C=X;
	cout<<"A="<<A<<endl;
	cout<<"B="<<B<<endl;
	cout<<"C="<<C<<endl;
	return 0;
}