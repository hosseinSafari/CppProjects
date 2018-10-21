#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define PB push_back
int main(){
int n,x;
bool check=true;
cin>>n;
vector<int> v[n];
vector<int> v_f;
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cin>>x;
		v[i].PB(x);
	}
	int r=*max_element(v[i].begin(), v[i].end());
	if(r==(n-1) && check==true) {v_f.PB(n); check=false;}
	else v_f.PB(r);
	
}
for(int i=0;i<v_f.size();i++) cout<<v_f[i]<<" ";
return 0;
}

