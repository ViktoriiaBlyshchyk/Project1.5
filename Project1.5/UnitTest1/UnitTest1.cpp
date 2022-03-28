#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project1.5\Project1.5\Lorry.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Car c;
			double f = 20;
			double d = c.Change1();
			Assert::AreEqual(d, f);
		}
	};
}
