#include<iostream>
using namespace std;

//parameter
void printCounting(int n){
    for(int i=1; i<=n; i++){
        cout<< i << " ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    
    // argument
    printCounting(n);

    return 0;
}