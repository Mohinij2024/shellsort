#include<iostream>
using namespace std;

void shellsort(int arr[],int n){
	
		int gap=n/2;
		while(gap>=1){
		for(int j=gap;j<n;j++)
		{
		 for(int i=j-gap;i>=0;i=i-gap){
		  if(arr[i]>arr[i+gap]){
		  	//swap
		  	int temp=arr[i];
		  	arr[i]=arr[i+gap];
		  	arr[i+gap]=temp;
		  }
		  else {
		  	break;
		  	}
		 }
		}
		gap=gap/2;
	}
}

int main(){
	int n;
	cout<<"Enter number of elements";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	shellsort(arr,n);
	cout<<"Sorted array:  ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
 return 0;
}
