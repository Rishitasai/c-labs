#include<iostream>

using namespace std;

float find_si(float, float, float);
int main()
{
   float p, r, t, si;
   cout<<"Enter Principle Amount: ";
   cin>>p;
   cout<<"Enter Rate of Interest: ";
   cin>>r;
   cout<<"Enter Time Period: ";
   cin>>t;
   si = find_si(p, r, t);
   cout<<"\nSimple Interest Amount: "<<si;
   cout<<endl;
   return 0;
}
float find_si(float a, float b, float c)
{
   float si;
   si = (a*b*c)/100;
   return si;
}
