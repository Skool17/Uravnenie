#include <ctest.h>
#include <../src/procedure.h>

// proverka diskriminanta
CTEST(Test1_diskcheck, input_m_1)
{
    int result = diskcheck(-1);
	
    int expected = 1;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Test2_diskcheck, input_1)
{
    int result = diskcheck(1);
	
    int expected = 2;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Test3_discheck, input_0)
{
    int result = diskcheck(0);
	
    int expected = 0;
	
    ASSERT_EQUAL(expected, result);
}

// nahodim diskriminant
CTEST(Test1_diskr, input_2_4_2)
{
    float result = diskr(2,4,2);
	
    float expected = 0;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test2_diskr, input_3_5_1)
{
    float result = diskr(3,5,1);
	
    float expected = 13;
	
   ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test3_diskr, input_5_3_6)
{
    float result = diskr(5,3,6);
	
    float expected = -111;
	
    ASSERT_DBL_NEAR(expected, result);
}

// nahodim korni
CTEST(Test1_koren, input_4_1_10_24_1)
{
    float result = koren(4,1,10,24,1);
	
    float expected = -4;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test2_koren, input_4_1_10_24_m_1)
{
    float result = koren(4,1,10,24,-1);
	
    float expected = -6;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test3_koren, input_0_1_6_9)
{
    float result = koren(0,1,6,9);
	
    float expected = -3;
	
    ASSERT_DBL_NEAR(expected, result);
}
