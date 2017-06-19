#include <stdio.h>

main()
{
	int nNumA = 100;
	int nNumB = 24;

	printf("%d \n", nNumA + nNumB);
	printf("%d \n", nNumA - nNumB);
	printf("%d \n", nNumA * nNumB);
	printf("%d \n", nNumA / nNumB);
	printf("%d \n", nNumA % nNumB);

	printf("%d \n", + nNumA);
	printf("%d \n", - nNumA);

	nNumB = nNumA;
	printf("%d \n", nNumB);


	system("pause");
}