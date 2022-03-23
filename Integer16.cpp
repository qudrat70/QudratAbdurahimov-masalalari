// Integer15. Uch xonali son berilgan.Uning o'nliklar xonasidagi raqam bilan birliklar xonasidagi raqamni almashtirishdan hozil 
// bo'lgan sonni aniqlovchi dastur yozing?
#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"x= "; cin>>x;
	cout<<"x= "<<x/100*100+x%10*10+x%100/10;
	return 0;
}