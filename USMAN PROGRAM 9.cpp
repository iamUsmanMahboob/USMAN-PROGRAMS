#include<iostream>
using namespace std;
int main()
{
	int i,limit,t=1;
	cout<<"please input table";
	cin>>i;
	cout<<"plese enter limit";
	cin>>limit;
	while(t<=limit)
	{
		cout<<i<<"x"<<t<<"="<<i*t<<endl;
		t++;
	}
}

