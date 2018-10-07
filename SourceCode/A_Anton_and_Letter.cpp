#include <bits/stdc++.h>
using namespace std;
int main() {

string str;
getline(cin,str);
int count=0;
str.erase(remove(str.begin(), str.end(), ','), str.end());
str.erase(remove(str.begin(), str.end(), ' '), str.end());
str.erase(remove(str.begin(), str.end(), '{'), str.end());
str.erase(remove(str.begin(), str.end(), '}'), str.end());
while(str!=""){
count++;
char ch=str[0];
str.erase(remove(str.begin(), str.end(), ch), str.end());
}
cout<<count<<"\n";


return 0;
}

//another algorithm.
/* 
#include<iostream>
#include<set>
using namespace std;

char c;
set <char> S;
int main(){ 
 while(cin>>c) if(isalpha(c))S.insert(c);
 cout<<S.size();
}
*/

