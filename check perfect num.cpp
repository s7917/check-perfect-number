//-----------------------perfect number---------------------------------------
#include<iostream>
using namespace std;

int main(){
    int i , n ,sum=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        if(n%i==0){
            cout<<i<<endl;
        sum=sum+i;   
    }
    }
    if(2*n==sum)
    cout<<" perfect num"<<endl;
    else
    cout<<"not a perfect num"<<endl;
    
    return 0;
}
