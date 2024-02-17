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
	
	//Insertion sort
	
	for(int i=1; i<n; i++){
		int current = arr[i];
		int j= i-1;
		while(arr[j] > current && j>=0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = current;
	}
	
	cout<<"\n\n";
	
	//printing sorted array
	cout<<"Sorted array : ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
}
