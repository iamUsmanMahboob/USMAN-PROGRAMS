#include<iostream>
using namespace std;
int main()
{
	int i=1;
	do
	{
		int valueOne;
		int valueTwo;
		
		cout<<"valueOne";
		cin>>valueOne;
		
		cout<<"valueTwo";
		cin>>valueTwo;
		
		cout<<valueOne+valueTwo;
		cout<<"Do You Want To Continue Press 1 To Continue And 0 To Exit";
		cin>>i;
	}
	while(i==1);
}
