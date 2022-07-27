#include <iostream>

using namespace std;

int main(){

    int num;
    cin>>num;

    if ( num & 1 )
        cout<<"Odd"<<endl;

    else 
        cout<<"even"<<endl;

    return 0;

}