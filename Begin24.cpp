// Begin23. A,B,C sonlari berilgan Ani qiymati C ga, Cni qiymati B ga va Bni qiymati A ga
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
	X=C;
	C=A;
	A=B;
	B=X;
	cout<<"A="<<A<<endl;
	cout<<"B="<<B<<endl;
	cout<<"C="<<C<<endl;
	return 0;
}