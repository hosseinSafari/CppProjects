#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main(){
int t,r,c,n,zi=0,yi=0,zj=0,yj=0;
vector<char> vf;
char x;

cin>>t;

for(int u=0;u<t;u++){
	cin>>r>>c>>n;
	vector<pair<char,char>> v[r];
	for(int l=0;l<r;l++) for(int q=0;q<c;q++){ cin>>x; v[l].PB(MP(x,x));}

	for(int k=0;k<n;k++){
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				zi=i-1; zj=j-1; yi=i+1; yj=j+1;
				if(v[i][j].S=='R'){
					if(zi>=0){
						if(v[zi][j].S=='P') v[i][j].F=v[zi][j].S;
					}
					if(yi<=r){
						if(v[yi][j].S=='P') v[i][j].F=v[yi][j].S; 
					}
					if(zj>=0){
						if(v[i][zj].S=='P') v[i][j].F=v[i][zj].S; 
					}
					if(yj<=c){
						if(v[i][yj].S=='P') v[i][j].F=v[i][yj].S; 
					}
				}
				else if(v[i][j].S=='S'){
					if(zi>=0){
						if(v[zi][j].S=='R') v[i][j].F=v[zi][j].S;
					}
					if(yi<=r){
						if(v[yi][j].S=='R') v[i][j].F=v[yi][j].S;
					}
					if(zj>=0){
						if(v[i][zj].S=='R') v[i][j].F=v[i][zj].S;
					}
					if(yj<=c){
						if(v[i][yj].S=='R') v[i][j].F=v[i][yj].S; 
					}
				}
				else{
					if(zi>=0){
						if(v[zi][j].S=='S') v[i][j].F=v[zi][j].S; 
					}
					if(yi<=r){
						if(v[yi][j].S=='S') v[i][j].F=v[yi][j].S; 
					}
					if(zj>=0){
						if(v[i][zj].S=='S') v[i][j].F=v[i][zj].S; 
					}
					if(yj<=c){
						if(v[i][yj].S=='S') v[i][j].F=v[i][yj].S; 
					}
				}
			}
		}

		for(int h=0;h<r;h++) for(int g=0;g<c;g++){v[h][g].S=v[h][g].F;}

	}
	for(int h=0;h<r;h++){ for(int g=0;g<c;g++){vf.PB(v[h][g].S);} vf.PB('*');}
	vf.PB('#');
	
}

	for(int i=0;i<vf.size()-1;i++){
		if(vf[i]!='*' && vf[i]!='#')
			cout<<vf[i];
		else
			cout<<"\n";
	}


return 0;
}

