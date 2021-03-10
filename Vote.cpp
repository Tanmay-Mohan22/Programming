#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<" Enter your Age-:";
	cin>>age;
	cout<<"----------------------";
	if(age>=18)
	{
		cout<<"\nYou are Eligible to Vote";
	}
	else
	{
		cout<<"\n Sorry!!You are not Eligible to Vote";
		cout<<"\n See you in "<<18-age <<" years";
	}
	return 0;
}

