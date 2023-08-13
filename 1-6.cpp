#include <bits/stdc++.h>
int main()
{
	// input
	int a, b, c, t;
	scanf("%d%d%d", &a, &b, &c);
	
	// sort (make a<b<c)
	if(a>b) {t=a; a=b; b=t;}
	if(a>c) {t=a; a=c; c=t;}
	if(b>c) {t=b; b=c; c=t;}
	
	// judge
	if(a+b<=c)
		printf("not a triangle\n");
	else {
		if(a*a+b*b==c*c)
			printf("yes\n");
		else
			printf("no\n");
	}
	
	// end
	return 0;
}
