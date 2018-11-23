#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,r,v,h,m;
cin>>a>>b>>r;
r*=2;
v=a/r;
h=b/r;
m=min(a,b);
if(r>m) cout<<"Second";
else cout<<"First";
return 0;
}
