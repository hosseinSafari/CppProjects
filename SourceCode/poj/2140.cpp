#include <iostream>
using namespace std;
int main() {
	int n,count=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i+=2)
		if((2*n)%i==0) count++;
	cout<<count;
return 0;
}
