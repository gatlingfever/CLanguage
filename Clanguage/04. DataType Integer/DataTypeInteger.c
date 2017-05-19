// Post Address : http://gamegramming.tistory.com/

#include <stdio.h>

main()
{
	char cCharacter = 0;
	cCharacter = 95;
	printf("Type char size : %d \n", sizeof(cCharacter));

	short nShort = 0;
	nShort = 5399;
	printf("Type short size : %d \n", sizeof(nShort));

	int nInteger = 0;
	nInteger = 5010943;
	printf("Type int size : %d \n", sizeof(nInteger));

	long nLong = 0;
	nLong = 591812037;
	printf("Type long size : %d \n", sizeof(nLong));

	system("pause");
} 