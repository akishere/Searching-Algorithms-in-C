//akishere
//GitHub
//Searching Algorithms in C

#include<iostream>
using namespace std;

// If element is present return index of it
int iPolation(int arr[], int N, int x)
{
	int ls = 0; // left corner
	int rs = 0; // right corner
	
	//array sorted so, an element is within the range
	
	while(ls <= rs && x >= arr[ls] && x <= arr[rs])
	{
		if(ls == rs)
		{
			if(arr[ls] == x)
			return ls;
			return -1;
		}
		// let's prob the distribution
		int pos = ls + (((double)(rs - ls) / (arr[rs] - arr[ls])) * (x - arr[ls]));
		
		//condition of target found
		if(arr[pos] == x)
			return pos;
			
		// If x is larger, x is in upper part
		if(arr[pos] < x)
			ls = pos + 1;
			
		//If x is sammler, x is in lower part
		else
			rs = pos - 1;
	}
	return -1;
}
	
	int main()
	{
		int N;
		cout<<"Enter the size of array\n";
		cin>>N;
		int arr[N];
		cout<<"Enter the elements of array\n";
		for(int i=0;i<N;i++)
		{
			cin>>arr[i];
		}
		int f;
		cout<<"Enter the element to be searched\n";
		cin>>f;
		int index = iPolation(arr,N,f);
		
		if(index != -1)
			cout<<"Element found at index\t"<<index;
		else
			cout<<"Element not found/n";
		return 0;
	}
		

