#include<iostream>
using namespace std;
int swap(int arr[],int n){
	for(int i=1;i<=n*n;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int printarray(int arr[],int n){
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter no of elements";
	cin>>n;
	int array[100];
	cout<<"Enter the elements";
	for(int a=0;a<n;a++){
		cin>>array[a];
	}
	swap(array,n);
	printarray(array,n);
}
