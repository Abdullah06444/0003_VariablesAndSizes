#include <iostream>
#include <climits>
#include <cfloat>
#include <iomanip>
using namespace std;

int main()
{

	// Primitive Variable types
	cout << "The Character takes char between => " << CHAR_MIN << " <=> "
		<< CHAR_MAX << " and also size => " << sizeof(char) << " byte" << endl;
	cout << "The SignedCharacter takes char between => " << SCHAR_MIN << " <=> "
		<< SCHAR_MAX << " and also size => " << sizeof(signed char) << " byte" << endl;
	cout << "The UnsignedCharacter takes char between => " << SCHAR_MIN << " <=> "
		<< UCHAR_MAX << " and also size => " << sizeof(unsigned char) << " byte" << endl;
	// Byte is not a variable.
	cout << "The Short takes value between => " << SHRT_MIN << " <=> "
		<< SHRT_MAX << " and also size => " << sizeof(short) << " byte" << endl;
	cout << "The UnsignedShort takes value between => " << SHRT_MIN << " <=> "
		<< USHRT_MAX << " and also size => " << sizeof(unsigned short) << " byte" << endl;

	cout << "The Integer takes value between => " << INT_MIN << " <=> "
		<< INT_MAX << " and also size => " << sizeof(int) << " byte" << endl;
	cout << "The UnsignedInteger takes value between => " << INT_MIN << " <=> "
		<< UINT_MAX << " and also size => " << sizeof(unsigned int) << " byte" << endl;

	cout << "The Long takes value between => " << LONG_MIN << " <=> "
		<< LONG_MAX << " and also size => " << sizeof(long) << " byte" << endl;
	cout << "The UnsignedLong takes value between => " << LONG_MIN << " <=> "
		<< ULONG_MAX << " and also size => " << sizeof(unsigned long) << " byte" << endl;
	cout << "The LongLong takes value between => " << LLONG_MIN << " <=> "
		<< LLONG_MAX << " and also size => " << sizeof(long long) << " byte" << endl;
	cout << "The UnsignedLongLong takes value between => " << LLONG_MIN << " <=> "
		<< ULLONG_MAX << " and also size => " << sizeof(unsigned long long) << " byte" << endl;

	cout << "The Float takes value between => " << FLT_MIN << " <=> "
		<< FLT_MAX << " and also size => " << sizeof(float) << " byte" << endl;
	cout << "The Float takes value between => " << setprecision(50) << FLT_MIN << " <=> "
		<< setprecision(50) << FLT_MAX << " and also size => " << sizeof(float) << " byte" << endl;

	cout << "The Double takes value between => " << DBL_MIN << " <=> "
		<< DBL_MAX << " and also size => " << sizeof(double) << " byte" << endl;
	cout << "The Double takes value between => " << setprecision(350) << DBL_MIN << " <=> "
		<< setprecision(350) << DBL_MAX << " and also size => " << sizeof(double) << " byte" << endl;
}
