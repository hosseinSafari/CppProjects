#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define PB push_back
#define MP make_pair
#define Vstr vector<string>
#define VpairInt vector<pair<int,int>>
int main(){
int n,m,sum=0,c=0;
string s;
scanf("%d",&n);
scanf("%d",&m);
Vstr *vs=new Vstr[m]; 
VpairInt vp;
while(m--){
	sum=0;
	cin>>s;
	vs[c].PB(s);c++;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++){
			char a=s[i];
			char b=s[j];
			if((int)a > (int)b) sum++;
		}
	vp.PB(MP(sum , c-1));
}

sort(vp.begin(),vp.end());
for(int i=0;i<vp.size();i++){
int x=vp[i].second;
cout<<vs[x][0]<<"\n";
}
return 0;
}
