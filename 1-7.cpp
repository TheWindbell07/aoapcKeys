#include <bits/stdc++.h>
int main()
{
	int year;
	scanf("%d", &year);
	// ���꣺�ܱ�400�������ܱ�4���������ܱ�100������ 
	if(year%400==0 || year%4==0 && year%100!=0) printf("yes\n");
	else printf("no\n");
	return 0;
}
