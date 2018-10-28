#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,r,v,h;
cin>>a>>b>>r;
r*=2;
v=a/r;
h=b/r;
if((v*h)%2 != 0) cout<<"First";
else cout<<"Second";
return 0;
}
