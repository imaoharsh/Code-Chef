#include <iostream> 
using namespace std;

int main(){
    int num;
    int notes=0;
    cin>>num;

    if(num>=100){
        notes=notes+num/100;
        num=num%100;
        }

        if(num>=50){
            notes=notes+num/50;
            num=num%50;

        }
        if(num>=10){
            notes=notes+num/10;
            num=num%10;
        }

cout<<notes;

        return 0;
}