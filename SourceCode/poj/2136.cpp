#include <bits/stdc++.h>
using namespace std;
int main(){
freopen("input.txt", "r", stdin);
int cnt[26]={0} , max_cnt=0;
char buf[75];
for(int i=0;i<4;i++){
	fgets(buf,75,stdin);
	for(int j=0;buf[j]!='\n';j++){
		if(buf[j]>='A' && buf[j]<='Z'){
			cnt[buf[j]-'A']++;
			if(max_cnt<cnt[buf[j]-'A']) max_cnt++;
		}
	}
}
for(int i=max_cnt;i>0;i--){
	int prev=0;
	for(int j=0;j<26;j++){
		if(cnt[j]>=i){
			for(int k=0;k<prev;k++) printf(" ");
			printf("*");
			prev=1;
		}else prev+=2;
	}
printf("\n");
}
for(int i=0;i<25;i++) printf("%c ",'A'+i);
printf("Z\n");
return 0;
}
