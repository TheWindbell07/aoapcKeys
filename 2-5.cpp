//fraction2decimal
#include <bits/stdc++.h>
void solve(int a, int b, int c, int kase)
{
	double quotient=1.0*a/b;
	long long zheng=floor(quotient);
	long long xiao=floor((quotient-zheng)*pow(10,c)+0.5);
	printf("Case%d: %lld.%lld\n", kase, zheng, xiao);
} 

int main()
{
	int a, b, c, kase=0;
	while(scanf("%d%d%d", &a, &b, &c)==3 && a+b+c!=0)
		solve(a, b, c, ++kase);
	return 0;
} 
