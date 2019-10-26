#include <iostream>
#include<climits>
using namespace std;

int SecondLargest(int *a,int n)
{
	if(n==1)
		return -1;

	int largest,Slargest;
	largest=INT_MIN;
	Slargest=0;

	for(int i=0;i<n;i++)
	{
		if(largest<a[i])
			{
				Slargest=largest;
				largest=a[i];
			}

	}

	return Slargest;
}

int main()
{
	int n;
	cin>>n;

	int *a=new int[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int k=SecondLargest(a,n);

	if(k==-1)
		cout<<"No Second Largest Number";
	else
		cout<<k;

	return 0;
}
