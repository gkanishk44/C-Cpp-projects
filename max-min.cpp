#include<iostream>
using namespace std;
int main (){
   int x = 15, y = 20;
   cout<<"The numbers are x = "<<x<<"and y = "<<y<<endl;
   cout<<"The max of the numbers is "<<((x + y) + abs(x - y)) / 2<<endl;
   cout<<"The min of the numbers is "<<((x + y) - abs(x - y)) / 2<<endl;
   return 0;
}
