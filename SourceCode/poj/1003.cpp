#include <bits/stdc++.h>
using namespace std;
int main(){
double f,sum=0;
int i;
vector<int> v;
while(cin>>f){
sum=0;
if(f==0.00)break;
for(i=2;sum<f;i++) sum+=(1/(double)i);
v.push_back(i-2);
}
for(int i=0;i<v.size();i++) printf("%d card(s)\n",v[i]);
return 0;
}
