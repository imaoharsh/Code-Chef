#include <iostream>
using namespace std;

int main() {
   int chal,s=0;
   cin>>chal;
   
   int arr1[chal];
   while(s<chal){
       int count=0;
       int nperson,mheight;
       cin>>nperson>>mheight;
       int arr[nperson];
       for(int i=0;i<nperson;i++){
           cin>>arr[i];
       }
       
       for(int j=0;j<nperson;j++){
           if(arr[j]>mheight){
               count++;
           }
       }
       
       
       arr1[s]=count;
       
       
       s++;
   }
   
   for(int i=0;i<chal;i++){
       cout<<arr1[i]<<endl;
   }
	
	return 0;
}
