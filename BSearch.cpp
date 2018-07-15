//akishere
//Binary Search Algorithm Simplified
#include<iostream>
using namespace std;

int main()
{
	int arr[100], n, i, f, l, search, middle;
	cout<<"Enter size of array"<<endl; //Take input for the size of array
	cin>>n;
	cout<<"Enter"<<n<<"elements"<<endl; //Take input of elements
	for(i=0;i<n;i++)
	{
	
		cin>>arr[i];
	}
	cout<<"Enter number to search"<<endl; //Enter number to be searched for
	cin>>search;
	f=0;
	l=n-1;
	middle = (f+l)/2;
	while(f<=l)
	{
		if(search== arr[middle])
		{
			cout<<"Element found at position"<<middle+1; //If element found, print it
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
		cout<<"Element not found"<<endl; //If element is not found
	}
	
}
