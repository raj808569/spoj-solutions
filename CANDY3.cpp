#include<stdio.h>
# define ll long long
int main()
{
	ll t,n,x;
	scanf("%lld",&t);
	while(t--)
	{
		ll sum=0;
		scanf("%lld",&n);
		for(ll i=0;i<n;i++)
		{
			scanf("%lld",&x);
			sum=((sum%n)+(x%n))%n;
		}
		if(sum==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
