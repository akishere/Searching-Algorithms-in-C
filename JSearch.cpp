//akishere
//Jump Search code in C++
#include<iostream>
#include<math.h>
using namespace std;

int jSearch(int ar[], int a, int n)
{
	int step = sqrt(n); //Finding block size to be jumped
	
	int pre = 0;
	
	
	while(ar[min(step,n)-1]<a)//Finding block where element is present
	{
		pre = step;
		step += sqrt(n);
		if(pre >= n)
			return -1;
	}
	
	while(ar[pre]<a) //doing linear search in that block for a bstarting from pre
	{
		pre++;
		if(pre==min(step,n)) //End if last element is reached
			return -1;
		
	}
	
	if(ar[pre]==a)
		return pre;
		
	return -1;
}

int main() //Main Function
{
	int ar[100],n,e;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cout<<"Enter the element to be searched"<<endl;
	cin>>e;
	int pos = jSearch(ar,e,n);
	cout<<e<<"\t"<<"is at index"<<"\t"<<pos;
	return 0;
}
