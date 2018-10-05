#include <bits/stdc++.h>
using namespace std;

#define PB push_back


int main() {

//ios_base::sync_with_stdio(0);
//cin.tie(0);
//cout.tie(0);

//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

typedef vector<long> vec;
int t , n ;
long p ,s,x;
vec v_inp[t];
vec v_out;

cin>>t;

for(int i=0; i<t ;i++){
	s = 0;
	p = -100;
	cin>> n;
	for(int j=0; j< n; j++){
		cin>> x;
		v_inp[i].PB(x);
		

		s = max(x , s+x);
		p = max(p , s);
	}
	v_out.PB(p);	
}

for(int i=0;i<v_out.size() ; i++){
	cout<<v_out[i]<<"\n";
}


	
return 0;
}

