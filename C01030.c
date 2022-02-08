#include<stdio.h>

int main()
{
long long a,b,i,index;
	scanf("%lld %lld",&a,&b);
	
	for( i=a<b?a:b;i>=1;i--)
	{
		if(a%i==0&&b%i==0){
			printf("%lld\n",i);
			index=i;
			break;
		}
	}
	printf("%lld",a*b/index);
}
	


 
