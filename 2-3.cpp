//triangle
#include <bits/stdc++.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int l=1;l<=n;l++) {
		for(int i=1;i<=l-1;i++) printf(" ");
		for(int i=1;i<=2*(n-l)+1;i++) printf("#");
		printf("\n");
	}
	return 0;
}
