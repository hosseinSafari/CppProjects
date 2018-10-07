#include <bits/stdc++.h>
using namespace std;


int main() {

int k,l,m,n;
long long d,count=0;

cin>>k>>l>>m>>n>>d;
for(long long i=1;i<=d;i++){
	if(i%k==0){ count++; continue;}
	else if(i%l==0){ count++; continue;}
	else if(i%m==0){ count++; continue;}
	else if(i%n==0){ count++; continue;}
	else{continue;}	
}

cout<<count;
	
return 0;
}

