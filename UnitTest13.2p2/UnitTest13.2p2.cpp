#include "pch.h"
#include "CppUnitTest.h"
#include "../lab13.2part2/lab13.2p2.cpp"
#include "math.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest132p2
{
	TEST_CLASS(UnitTest132p2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test = ADD(2, 4);
			Assert::AreEqual(6, test);
		}
	};
}
