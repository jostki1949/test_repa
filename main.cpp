
#include <iostream>
using namespace std;
int main()
{
  
int a ;
int n ;
int f = n-1;
cout << "Enter n:";
cin >> n;
 
for (int i = 0; i <= n; i++)
{
f += i;
}
cout <<"Sum of all numbers :" << f << endl;

 
   for (a =f ; a > 0; a--) {
      if (f%a==0)  {
       cout<< "Divider:" << a <<endl;
       }
       
    }


}







