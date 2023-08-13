//permutation
#include <bits/stdc++.h>
int main()
{
	int num1, num2, num3;
	for(num1=123;num1<=329;num1++) {  // 987/3=329
		//根据比例算出另两个数 
		num2=num1*2;  num3=num1*3;
		//分离出每个数的百位、十位、个位 
		int a1=num1/100, b1=num1/10%10, c1=num1%10;
		int a2=num2/100, b2=num2/10%10, c2=num2%10;
		int a3=num3/100, b3=num3/10%10, c3=num3%10;
		//检查数据是否是想要的
		if(a1*a2*a3*b1*b2*b3*c1*c2*c3!=362880)  continue;
		if(a1+a2+a3+b1+b2+b3+c1+c2+c3!=45)  continue;
		//输出 
		printf("%d %d %d\n", num1, num2, num3);
	}
	return 0;
} 
