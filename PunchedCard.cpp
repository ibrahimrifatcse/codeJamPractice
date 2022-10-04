// problem link : shorturl.at/cgkz8

#include"bits/stdc++.h"
#define debug(...) 42
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;
int T,R,C,i,j;
int main(){
optimize();

cin>>T;
for(int tc=1;tc<=T;tc++){
    cout<<"Case "<<"#"<<tc<<":"<<"\n";
    cin>>R>>C;
    for(i=0;i < R * 2 + 1;i++){
        for(j=0;j < C * 2 + 1;j++){
            if (i == 0 && j == 0) {
                    cout<<".";
                } else if (i + j == 1) {
                    cout<<".";
                } else if (i % 2 == 0 && j % 2 == 0) {
                    cout<<"+";
                } else if (i % 2 == 1 && j % 2 == 0) {
                    cout<<"|";
                } else if (i % 2 == 0 && j % 2 == 1) {
                    cout<<"-";
                } else {
                    cout<<".";
                }

        }
         cout<<"\n";
    }
}




return 0;
}
