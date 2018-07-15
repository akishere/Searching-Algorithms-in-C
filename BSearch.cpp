#include<iostream>
using namespace std;

int main()
{
	int arr[100], n, i, f, l, search, middle;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter"<<n<<"elements"<<endl;
	for(i=0;i<n;i++)
	{
	
		cin>>arr[i];
	}
	cout<<"Enter number to search"<<endl;
	cin>>search;
	f=0;
	l=n-1;
	middle = (f+l)/2;
	while(f<=l)
	{
		if(search== arr[middle])
		{
			cout<<"Element found at position"<<middle+1;
			break;
		}
		else if(search < arr[middle])
		{
			l = middle - 1;
			
		}
		else 
		{
			f =  middle + 1;
		}
		middle = (f+l)/2;
	}
	if(f>l)
	{
		cout<<"Element not found"<<endl;
	}
	
}
