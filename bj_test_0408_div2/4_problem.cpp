/*
���� ��Ʈ���̴�.
N���� ������������ ���ư���. ���ư����� ���� �ʰ��Ǹ� 1���� �ٽ� ��������.
���ư��µ� 1�ʰ� �ɸ���, �� ���ư������ �ɸ��� �ð��� ����.
--
14
13/ 1
11/ 1 2
8/ 1 2 3
4/ 1 2 3 4
3/ 1 2 3 4 1
1/ 1 2 3 4 1 2
0/ 1 2 3 4 1 2 1  = 7��
*/

#include <stdio.h>

int main()
{
	int nBirdNum(0);
	int nUpper(0);
	int nTime(0);

	scanf("%d", &nBirdNum);

	nUpper = 1;
	while (nBirdNum != 0)
	{
		if (nBirdNum < nUpper)
		{
			nUpper = 1;
		}
		nBirdNum -= nUpper;
		++nTime;
		++nUpper;
	}

	printf("%d\n", nTime);

	return 0;
}