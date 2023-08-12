#include<iostream>
using namespace std;
int main()
{
	float compMarks,phyMarks,mathsMarks,obtainedMarks,pakpercentage,totalMarks;
	cout<<"enter compMarks:";
	cin>>compMarks;
	
	cout<<"enter phyMarks:";
	cin>>phyMarks;
	
	cout<<"enter mathsMarks:";
	cin>>mathsMarks;
	
	cout<<"obtainedMarks:"<<compMarks+phyMarks+mathsMarks<<endl;
	
	cout<<"totalMarks:";
	cin>>totalMarks;
	
	int s,d;
	float p;
	
	
	s=(compMarks+phyMarks+mathsMarks)*100;
	d=totalMarks;
	p=s/d;
	cout<<"percentage="<<p<<endl;
	
	if( p<=100 && p>=80)
	
	{
		cout<<"grade A";
	}
	else if(p<=79 && p>=60)
	{
		cout<<"grade B";
		
	}
	else if(p>=59 && p>=50)
	{
		cout<<"grade c";
    	}
    else
    {
    	cout<<"MUBARAK HO!!"<<endl;
    	cout<<"NAM ROSHAN KARDEYA!!";
	}
	
}
