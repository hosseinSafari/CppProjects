#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main(){
int n;
char a[11],b[11];
scanf("%d",&n);
while(n--){
	scanf("%s%s",a,b);
	scanf(b,11,stdin);
	reverse(a,a+strlen(a));
	reverse(b,b+strlen(b));
        int c=atoi(a)+atoi(b);
	char str[11];
	sprintf(str,"%d",c);
	reverse(str,str+strlen(str));
	c=atoi(str);
	while(c%10==0)c/=10;
	printf("%d\n",c);
}
return 0;
}
