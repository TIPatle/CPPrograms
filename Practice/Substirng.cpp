#include <bits/stdc++.h>

using namespace std;

void printSubstirngs( string s, string ans ){

    if ( s == "" ){

        cout<<ans<<endl;
        return;

    }

    printSubstirngs(s.substr(1), ans);
    printSubstirngs(s.substr(1), ans + s[0]);


}

int main(){

    printSubstirngs("ABC", "");

    return 0;

}