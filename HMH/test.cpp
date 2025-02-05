#include <stdio.h>



int main()
{
//	char sSmall; // 8 bits - 256 values, negative and positive values, [-128,127]
//	char unsigned uSmall; // 8 bits positive, [0,255]
//	
//	
//	short sMedium; // 16 bits - 65536 values
//	short unsigned uMedium;
//	
//	
//	int sLarge; // 32 bits - 4 billion
//	int unsigned uLarge; // 32 bits - 4 billion
	
	int Test = 0;
	int *pTest;
	pTest = &Test;

	// basically copy 200 to Test
	Test = 255;
	pTest = &Test;
	printf("1. pTest=%d\n", *pTest);
	pTest = &Test + 1;
	printf("Test=%d\n", Test);
	printf("2. pTest=%d\n", *pTest);
	return 0;
}
