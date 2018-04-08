/*
20%할인쿠폰
달러단위로 출력
100.00 -> 80.00
59.99 -> 
*/
#include <stdio.h>

int main()
{
	int nTC(0);
	float fOrigin(0);
	float fModified(0);

	double dOrigin(0);
	double dModified(0);

	//
	freopen("input.txt", "r", stdin);
	scanf("%d", &nTC);
	for (int i = 0; i < nTC; ++i)
	{
		scanf("%lf", &dOrigin);
		fOrigin = dOrigin;
		fModified = fOrigin * 0.8f;
		printf("$%0.2f %f\n", fModified, fModified);

		dModified = dOrigin * 0.8;
		printf("$%0.2f %f\n", dModified, dModified);

	}

	return 0;
}