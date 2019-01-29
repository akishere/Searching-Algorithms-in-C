//akishere
//toCode
//JumpSearch

#include<iostream>
#include<math.h>
using namespace std;

int jumpFunc(int arr[], int x, int N)
{
	int skips = sqrt(N); //size to be jumped
	int pre = 0; // if element present in last block
	while(arr[min(skips, N) -1] < x)
	{
		pre = skips;
		skips = skips + sqrt(N);
		if(pre >= N)
			return -1;
	}
	
	//Do linear search for x in block
	while(arr[pre] < x)
	{
		pre++;
		
		if(pre == min(skips,N))
			return -1;
	}
	//if element is present
	if(arr[pre] == x)
		return pre;
	
	return -1;
}

int main()
{
	int n;
	cout<<"Enter size of array:"<<"\n";
	cin>>n;
	int ar[n];
	cout<<"Enter elements of array in sorted manner"<<"\n";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int f;
	cout<<"Enter element to be searched"<<"\n";
	cin>>f;
	int index = jumpFunc(ar, f, n);
	
	//Print the index where element is located
	cout<<"\nElement "<<" "<<f<<"is at index"<<" "<<index;
	return 0;
}