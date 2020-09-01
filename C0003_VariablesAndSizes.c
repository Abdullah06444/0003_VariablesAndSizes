#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

	// Primitive Variable types
	printf("The Character takes char between => %d <=> %d", CHAR_MIN, CHAR_MAX);
	printf(" and also size => % d byte\n", sizeof(char));
	printf("The SignedCharacter takes char between => %d <=> %d", SCHAR_MIN, SCHAR_MAX);
	printf(" and also size => % d byte\n", sizeof(signed char));
	printf("The UnsignedCharacter takes char between => %d <=> %d", SCHAR_MIN, UCHAR_MAX);
	printf(" and also size => % d byte\n", sizeof(unsigned char));

	// Byte is not a variable.
	printf("The Short takes value between => %d <=> %d", SHRT_MIN, SHRT_MAX);
	printf(" and also size => % d byte\n", sizeof(short));
	printf("The UnsignedShort takes value between => %d <=> %d", SHRT_MIN, USHRT_MAX);
	printf(" and also size => % d byte\n", sizeof(unsigned short));

	printf("The Integer takes value between => %d <=> %d", INT_MIN, INT_MAX);
	printf(" and also size => % d byte\n", sizeof(int));
	printf("The UnsignedInteger takes value between => %d <=> %d", INT_MIN, UINT_MAX);
	printf(" and also size => % d byte\n", sizeof(unsigned int));

	printf("The Long takes value between => %d <=> %d", LONG_MIN, LONG_MAX);
	printf(" and also size => % d byte\n", sizeof(long));
	printf("The UnsignedLong takes value between => %d <=> %d", LONG_MIN, ULONG_MAX);
	printf(" and also size => % d byte\n", sizeof(unsigned long));
	printf("The LongLong takes value between => %d <=> %d", LLONG_MIN, LLONG_MAX);
	printf(" and also size => % d byte\n", sizeof(long long));
	printf("The UnsignedLongLong takes value between => %d <=> %d", LLONG_MIN, ULLONG_MAX);
	printf(" and also size => % d byte\n", sizeof(unsigned long long));

	printf("The Float takes value between => %.20e <=> %.20e", FLT_MIN, FLT_MAX);
	printf(" and also size => % d byte\n", sizeof(float));
	printf("The Float takes value between => %.50lf <=> %.50lf", FLT_MIN, FLT_MAX);
	printf(" and also size => % d byte\n", sizeof(float));

	printf("The Double takes value between => %.20e <=> %.20e", DBL_MIN, DBL_MAX);
	printf(" and also size => % d byte\n", sizeof(double));
	printf("The Double takes value between => %.350lf <=> %.350lf", DBL_MIN, DBL_MAX);
	printf(" and also size => % d byte\n", sizeof(double));

	return 0;
}