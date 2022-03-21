// Begin21. Uchburchakning uchta tomoni uchlari koordinatlari berilgan(x1,y2), (x2,y2),(x3,y3). 
// Ikkita nuqta orasidagi masofani topish Begin20 da Berilgan.Uchburchakning yuzasini va perimetrini toping.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 double x1,x2,x3,y1,y2,y3,p;
 cout << "x1=";cin >> x1;
 cout << "x2=";cin >> x2;
 cout << "x3=";cin >> x3;
 cout << "y1=";cin >> y1;
 cout << "y2=";cin >> y2;
 cout << "y3=";cin >> y3;
cout << "P=" <<sqrt(pow((x1-x2),2)+pow((y1-y2),2))+sqrt(pow((x1-x3),2)+pow((y1-y3),2))+sqrt(pow((x2-x3),2)+pow((y2-y3),2)) << endl;
p=(sqrt(pow((x1-x2),2)+pow((y1-y2),2))+sqrt(pow((x1-x3),2)+pow((y1-y3),2))+sqrt(pow((x2-x3),2)+pow((y2-y3),2)));
cout << "S=" << sqrt(p*(p-sqrt(pow((x1-x2),2)+pow((y1-y2),2)))*(p-sqrt(pow((x1-x3),2)+pow((y1-y3),2)))*(p-sqrt(pow((x2-x3),2)+pow((y2-y3),2))));

return 0;
}