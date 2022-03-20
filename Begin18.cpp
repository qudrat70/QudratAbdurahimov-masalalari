//Begin18.Sonlar o'qida A,B,C nuqtalar berilgan. C nuqta A va B nuqtalar o'rasida joylashgan. AC va BC kesmalar uzunligining ko'paytmasini toping.
#include <iostream>
using namespace std;
int main()
{
	int A,B,C;
	cout<<"A="; cin>>A;
	cout<<"B="; cin>>B;
	cout<<"C="; cin>>C;
	cout<<(C-A)*(B-C)<<endl;
}