#include "pch.h"
#include "CppUnitTest.h"
#include "customer_r.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char pos1[] = "A1B 2C3";

			Assert::IsTrue(pos1);
		}
		TEST_METHOD(TestMethod2)
		{
			char pos2[] = "A1B2C3";

			Assert::IsTrue(pos2);
		}
		TEST_METHOD(TestMethod3)
		{
			char pos3[] = "A1B 2C 3";

			Assert::IsFalse(pos3);
		}
	
		TEST_METHOD(TestMethod4)
		{
			char pos4[] = "m2e44x";

				Assert::IsTrue(pos4);
		}
		TEST_METHOD(TestMethod5)
		{
			char pos5[] = "m2e 4x4";

			Assert::IsTrue(pos5);
		
		}
	
	
	};









}
