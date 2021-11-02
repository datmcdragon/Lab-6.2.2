#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int B[4] = {-2,4,1,0};
			int S = SumArr(B, 4, 0);
			Assert::AreEqual(S, 2);
		}
	};
}
