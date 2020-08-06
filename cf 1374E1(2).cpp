
#include <cstdio>
#include <algorithm>
#define maxn 200010
using namespace std;
int a[maxn],b[maxn],c[maxn],an,bn,cn;
int main(){
	int n,k,i,t,x,y,ans=0;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++){
		scanf("%d%d%d",&t,&x,&y);
		if(x==1&&y==1)c[++cn]=t;
		else if(x==1)a[++an]=t;
		else if(y==1)b[++bn]=t;
	}
	sort(a+1,a+1+an);
	sort(b+1,b+1+bn);
	n=min(an,bn);
	printf("%d :",cn);
	for(i=1;i<=n;i++)
		c[++cn]=a[i]+b[i];
    printf("%d :",cn);
	sort(c+1,c+1+cn);
	printf("%d :",cn);
	if(cn<k) printf("-1\n");
	else{
		for(i=1;i<=k;i++)ans+=c[i];
		printf("%d\n",ans);
	}
	return 0;}
