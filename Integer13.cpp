// Integer13. Uch xonali son berilgan.Uning chapdan birinchi raqamini o'chirib o'ng tarafiga yozishdan hosil bo'lgan sonni aniqlovchi dastur tuzing?
#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"x= "; cin>>x;
	cout<<"x= "<<x%100*10+x/100<<endl;
	return 0;
}