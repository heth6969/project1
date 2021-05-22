#include<iostream>
using namespace std;
int main()
{
	int age;

	cout<<"Enter Age of The User";
	cin>>age;

	if(age>=18)
	{
		cout<<"\n You are Eligible for Voting";
	}
	else
	{
		cout<<"\n You are Not Eligible for Voting";
	}
	return 0;
}
