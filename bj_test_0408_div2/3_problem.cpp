/*
서로 다른 자리수의 개수 X를 구하는 프로그램 작성.
int범위내 입력.
*/

#include <stdio.h>

int fnDistinctDigitNum(int nNumber);

int main()
{
	int nTC(0);
	int nData(0);

	//
	freopen("input.txt", "r", stdin);
	scanf("%d", &nTC);
	for (int i = 0; i < nTC; ++i)
	{
		scanf("%d", &nData);
		printf("%d\n", fnDistinctDigitNum(nData));
	}

	return 0;
}

int fnDistinctDigitNum(int nNumber)
{
	int arDP[10]{};
	int nData(0);
	int nDigit(0);
	int nCount(0);

	if (nNumber == 0)
		return 1;

	nData = nNumber;
	while (nData != 0)
	{
		nDigit = nData % 10;
		arDP[nDigit] += 1;

		nData = nData / 10;
	}

	for (int i = 0; i < 10; ++i)
	{
		if (arDP[i] != 0)
			nCount += 1;
	}

	return nCount;
}
