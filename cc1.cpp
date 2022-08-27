
// Code Chef Matches Question.


#include <iostream>
using namespace std;
int helper(int);
int sep_digits(int a){
    int sum=0;
    while(a>=1){
       int  temp=a%10;
       temp=helper(temp);
        sum=sum+temp;
        a=a/10;
    }

    return sum;
}

int helper(int n){

switch (n)
{
case 0:n=6;
break;
case 1:n=2;
break;
case 2:n=5;
break;
case 3:n=5;
break;
case 4:n=4;
break;
case 5:n=5;
break;
case 6:n=6;
break;
case 7:n=3;
break;
case 8:n=7;
break;
case 9:n=6;
break;

default:
    break;
}


return n;
}

int main(){
int test;
cin>>test;
while(test--){
    int a,b;
cin>>a>>b;
int sum=a+b;
int result=sep_digits(sum);
cout<<result<<endl;
}

 return 0;
}