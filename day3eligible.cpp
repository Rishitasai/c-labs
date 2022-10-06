#include <iostream>
using namespace std;

int main()
{
	int age,a;

	
	cout<<"Enter the age of the person: ";
	cin>> age;

	
	if (age>=18)
	{
		cout<<"You are eligible for voting.";
	}
	else
	{
		cout<<"You are not eligible for voting."<<endl;
	}
          a=18-age;
        cout<<"the person will be eligible in other:"<<a<<endl;
	return 0;
}
