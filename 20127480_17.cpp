#include<iostream>
using namespace std;
int main()
{
	int n,i,k,arr[n],m,g,h,max=0;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Day n: ";
	for(i=0;i<=n-1;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
			h=arr[i] * arr[k];
			if(k !=i)
			{
			
			if(max <= h)
			{
				g=arr[i];
				m=arr[k];
			};
		};
			
		};
	};
	cout<<"The two integers that have the largest product is: "<<m<<" and "<<g;
	return 0;
	
}
