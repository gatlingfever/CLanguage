// Post Address : http://gamegramming.tistory.com/210

#include <stdio.h>

main()
{
	signed char cChar = 0xff;
	short nShort = 0xffff;
	short nShort2 = 0xffff;
	short nShort3 = 0xffff;
	short nShort4 = 0xffff;

	int nInt = 0xffffffff;
	long nLong = 0xffffffff;

	printf("%d \n", &cChar);
	printf("%d \n", &nShort);
	printf("%d \n", &nShort2);
	printf("%d \n", &nShort3);
	printf("%d \n", &nShort4);


	printf("%d \n", &nInt);
	printf("%d \n", &nLong);





	system("pause"); 
}