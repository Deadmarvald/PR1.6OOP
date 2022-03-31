#include "pch.h"
#include "CppUnitTest.h"
#include "../PR1.6/RealC.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			RealC a, b;
			a.SetKorStep(1);
			a.SetPiStep(1);
			a.SetRandNum(1);
			b.SetKorStep(1);
			b.SetPiStep(1);
			b.SetRandNum(1);

			a.Root(2, 4);
			b.Root(4, 16);

			Assert::AreEqual(a, b);
		}
	};
}