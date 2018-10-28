#include <bits/stdc++.h>
using namespace std;
int main(){
long long n , k , x=1;
cin>>n>>k;
if(k==1) cout<<n;
else {
    while(n>=x) x*=2;
    cout<<x-1;
}
return 0;
}
