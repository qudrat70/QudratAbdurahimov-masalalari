//// Integer11. Uch xonali son berilgan. Uning raqamlari yig'indisini aniqlovchi dastur tuzing.
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int x;
	cout<<"x= "; cin>>x;
	cout<<"x ning raqamlar yig'indisi= "<<x/100+(x%100-x%10)/10+x%10<<endl;
	return 0;
	
}