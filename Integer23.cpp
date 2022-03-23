// Integer22. Kun boshidan boshlab N sekund vaqt o'tdi. Kun boshidan boshlab qancha soat, minut  va sekund o'tganini aniqlovchi dastur tuzing.
#include <iostream>
using namespace std;
int main()
{
	float N;
	cout<<"N= "; cin>>N;
	cout<<"soat: "<<N/3600<<" minut: "<<N/60<<" va"<<" sekund: "<<N;
}