#include <bits/stdc++.h>
int main()
{
	int year;
	scanf("%d", &year);
	// 闰年：能被400整除或能被4整除但不能被100整除。 
	if(year%400==0 || year%4==0 && year%100!=0) printf("yes\n");
	else printf("no\n");
	return 0;
}
