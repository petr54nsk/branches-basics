#include <iostream>
#include <cstdlib>
#include "../thirdparty/ctest.h"
#include "../src/deposit.c"

CTEST(Days, Days_test){
	int expected1 = 0;
	int expected2 = 365;
	int d=rand() % 365;
	int result = Days(&d);
	ASSERT_INTERVAL(expected1,expected2,result);
}

CTEST(Money, Money_test){
	int expected1 = 10000;
	int expected2 = 10000000;
	int s=rand() % 10000000;
	int result = Money(&s);
	ASSERT_INTERVAL(expected1,expected2,result);
}
