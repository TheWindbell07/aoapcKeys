//daffodil
#include <bits/stdc++.h>
int main()
{
	for(int num=100;num<=999;num++) {
		if(pow(num/100,3)+pow((num/10)%10,3)+pow(num%10,3)==num)
			printf("%d\n", num);
	}
	return 0;
}
