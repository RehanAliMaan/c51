#include <iostream>
using namespace std;
int main()
{
	int age,n,i,count;
	cout<<"enter the number of persons";
	cin>>n;
	cout<<"enter the age"<<n<<"of Persons"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>age[i];
		if(age[i]>=50 &&age[i]>60)
		count=count+1;
		
	}
	cout<<count<<"persons are betweenn 50 and 60";
	return 0;
}