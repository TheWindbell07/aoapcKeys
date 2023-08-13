//subsequence
#include <bits/stdc++.h>
int main()
{
	int n, m, kase=0;
	while(scanf("%d%d", &n, &m)==2 && n+m!=0) {
		double term, sum=0.0;
		for(long long i=n;i<=m;i++) {
			term = 1.0/(i*i);
			sum += term;
		}
		printf("Case%d: %.5lf\n", ++kase, sum);
	}
	return 0;
}
