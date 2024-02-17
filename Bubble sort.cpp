#include<iostream>
using namespace std;

int main(){
	
	int n;
	
	cout<<"Enter no. of elements : ";
	cin>>n;
	
	cout<<"---------";
	cout<<"\n";
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"\n";
	cout<<"UnSorted array : ";

	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
	int counter = 1;
	
	while(counter < n){
		for(int i=0; i<n-counter; i++){
			if(arr[i] > arr[i+1]){
				//swap
				int temp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = temp;
			}
		}
		counter++;
	}
	
	cout<<"\n\n";
	
	//printing sorted array
	cout<<"Sorted array : ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
}
