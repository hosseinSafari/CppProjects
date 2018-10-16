#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define PB push_back
int main(){
string n;
vector<string> v;
cin>>n;
v.PB(n);
reverse(v[0].begin(),v[0].end());
cout<<n<<v[0];
return 0;
}
