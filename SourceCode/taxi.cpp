#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,count=0;
int d1=0,d2=0,d3=0,d4=0;
string str;
cin>>n;
cin.ignore();
getline(cin , str);
str.erase(remove(str.begin(), str.end(), ' '), str.end());
cout<<str<<endl;
for(int i=0;i<str.size();i++){
	if(str[i]=='1') d1++;
	else if(str[i]=='2') d2++;
	else if(str[i]=='3') d3++;
	else d4++;
}
count+=d4;

if(d1<=d3) {
	count+=d3;
	d1=0;
}
else{
	count+=d3;
	d1-=d3;
}

count= count+((d2*2)+d1)/4;
if(((d2*2)+d1)%4!=0) count++;


cout<<count;
return 0;
}


//another algorithm

/*
#include<iostream>
using namespace std;
int A[5],N,i,t;
int main(){
cin>>N;
while(cin>>t)
A[t]++;
A[1]=max(A[1]-A[3],0);
cout<<A[3]+A[4]+(A[1]+2*A[2]+3)/4;
}
*/

