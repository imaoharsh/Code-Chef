#include <iostream>
using namespace std;
void compress(int A[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(A[i]!=A[i+1]){
            count++;
        }
        
        
    }
    cout<<count;
}

int main(){
    int test;
    cin>>test;
    while(test--){
    int n;
    cout<<"enter the number of frame";
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    compress(arr,n);
    }
	return 0;
}
