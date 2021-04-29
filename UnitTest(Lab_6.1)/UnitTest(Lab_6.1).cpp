#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_6.1/main.cpp"
#include "../Lab_6.1/Array.cpp"
#include "../Lab_6.1/Task.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab61
{
	TEST_CLASS(UnitTestLab61)
	{
	public:

        TEST_METHOD(Test_Array_Sum) 
        {
            int masuv[6]{12.0, 55.0, -33.0, -21.0, 12.0, -67.0 };
            Array dynamic_array = Create_Dynamic_Array(masuv, 6);
            Assert::AreEqual(dynamic_array.Sum(), -42.0);
        }
    };
}
