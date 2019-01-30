//akishere
//Linear Search Algorithm Simplified
#include<iostream>
using namespace std;

int search(int arr[], int n, int x)//Function of search function 
{
	int i;
	for(int i=0;i<n;i++)
		if(arr[i] == x)
			return i;
	return -1;
			
}

int main() //main function
{
	int a[6] = {1,45,2,5,8,9};
	int size = 6;
	int y,z;
	cout<<"Enter search element"<<endl;
	cin>>y;
	z = search(a, size, y); //call search function and store the result in z
	cout<<"Found at position"<<z<<endl;//Print answer
}
