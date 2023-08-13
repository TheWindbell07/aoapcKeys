#include <bits/stdc++.h>
int main()
{
	double n;
	const double pi = 3.14159265358979;
	scanf("%lf", &n);
	double x = n*pi/180;  //½Ç¶È->»¡¶È 
	printf("%f %f\n", sin(x), cos(x));
	return 0;
}
