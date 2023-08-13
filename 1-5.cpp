#include <bits/stdc++.h>
int main()
{
	int amount;
	scanf("%d", &amount);
	float money = amount*95;
	if(money>=300) money=money*0.85;
	printf("%.0f\n", money);
	return 0;
}
