#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
if(a.F != b.F)
  return a.F > b.F;
return a.S < b.S;
} 

int main() {

int n,k,x,y;
vector<pair<int, int>> v;

cin>>n>>k;
while(cin>>x>>y){
	v.PB(MP(x,y));
}

sort(v.begin(), v.end() , sortbysec);

cout<<count(v.begin(), v.end() , MP(v[k-1].F,v[k-1].S));

return 0;
}
