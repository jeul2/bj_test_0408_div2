/*
어떤식 1~N까지의 합을 fn(N)이라할때
fn(a) x fn(a+1) x fn(b-1) x fn(b) 를 14579로 나눈값을 출력하는 프로그램 작성.
-------
1+2+3 = 6
1+2+3+4 = 10
1+2+3+4+5 = 15
= 900

a(a+1)*0.5

3*4 *4*5 *5*6
2    2      2

3 * 16 * 25 * 6
2 2 2

m (m+1)^2 (n-1)^2 n^2 n+1
2^(m-n+1)
*/

#include <stdio.h>

int fnSumUntilNumber(int nNumber);

int main()
{
	int nM;
	int nN;
	int nRes;

	scanf("%d %d", &nM, &nN);
	nRes = 1;
	for (int i = nM; i <= nN; ++i)
	{
		nRes *= fnSumUntilNumber(i);
		if (nRes >= 14579)
			nRes %= 14579;
	}

	printf("%d\n", nRes);


	return 0;
}

int fnSumUntilNumber(int nNumber)
{
	int nSum(0);
	for (int i = 1; i <= nNumber; ++i)
	{
		nSum += i;
	}

	return nSum;
}
