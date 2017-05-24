// Post Address : http://gamegramming.tistory.com/207

#include <stdio.h>
#include <stdint.h>

main()
{
	// checking MSB
	char cCharacter = 0;
	cCharacter = 89;

	char cMinusChar = 0;
	cMinusChar = -cCharacter;

	char cSum = 0;
	cSum = cCharacter + cMinusChar;

	printf("sum : %d \n", cSum);



	//using unsigned keyword
	unsigned char cCharacter2 = 0;
	cCharacter2 = 89;

	unsigned char cMinusChar2 = 0;
	cMinusChar2 = -cCharacter2;

	unsigned char cSum2 = 0;
	cSum2 = cCharacter2 + cMinusChar2;

	printf("cCharacter : %d \n", cCharacter2);
	printf("cMinusChar : %d \n", cMinusChar2);
	printf("cSum : %d \n", cSum2);




	//cautions for using unsigned
	unsigned char cUChar1 = -80;
	unsigned char cUChar2 =  40;
	char cChar1 = -80;
	char cChar2 =  40;

	printf("uchar - uchar : %d \n", cUChar1 - cUChar2);
	printf("uchar - char : %d \n", cUChar1 - cChar2);
	printf("char - uchar : %d \n", cChar1 - cUChar2);
	printf("char - char : %d \n", cChar1 - cChar2);

	printf("uchar %% uchar : %d \n", cUChar1 % cUChar2);
	printf("uchar %% char : %d \n", cUChar1 % cChar2);
	printf("char %% uchar : %d \n", cChar1 % cUChar2);
	printf("char %% char : %d \n", cChar1 % cChar2);





	//checking size in 32bit or 64bit (changing target platform)
	printf("char : %d \n", sizeof(char));
	printf("short : %d \n", sizeof(short));
	printf("int : %d \n", sizeof(int));
	printf("long : %d \n", sizeof(long));
	printf("pointer : %d \n", sizeof(int*));



	

	//checking standard sized int
	printf("int8_t : %d \n", sizeof(int8_t));
	printf("int16_t : %d \n", sizeof(int16_t));
	printf("int32_t : %d \n", sizeof(int32_t));
	printf("int64_t : %d \n", sizeof(int64_t));
	printf("pointer : %d \n", sizeof(int*));


	system("pause");
}