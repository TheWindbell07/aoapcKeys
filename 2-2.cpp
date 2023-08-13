//hanxin
#include <bits/stdc++.h>
int main()
{
	int a, b, c, kase=0;
	while(scanf("%d%d%d", &a, &b, &c)==3) {
		int answer=0;
		for(int num=100;num>=10;num--)
			if((num%3==a)&&(num%5==b)&&(num%7==c))
				answer = num;
		if(answer==0) printf("Case%d:No answer\n", ++kase);
		else printf("Case%d:%d\n", ++kase, answer);
	}
	return 0;
}
