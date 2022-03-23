// Integer14. Uch xonali son berilgan.Uning o'ngdan birinchi raqamini o'chirib chap tarafiga yozishdan hosil bo'lgan sonni aniqlovchi dastur tuzing?
#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"x= "; cin>>x;
	cout<<"x= "<<x%10*100+x/10<<endl;
	return 0;
}