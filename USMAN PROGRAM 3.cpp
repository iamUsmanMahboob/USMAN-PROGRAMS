#include<iostream>
using namespace std;
int main()
{
	double s,p,phyMarks,compMarks,obtainedMarks,percentage,totalMarks;
	cout<<"phyMarks:";
	cin>>phyMarks;
	cout<<"compMarks:";
	cin>>compMarks;
	obtainedMarks=phyMarks+compMarks;
	cout<<obtainedMarks;
	totalMarks=200;
	p=obtainedMarks/totalMarks;
	s=p*100;
	cout<<"percentage:"<<s;
}
		

