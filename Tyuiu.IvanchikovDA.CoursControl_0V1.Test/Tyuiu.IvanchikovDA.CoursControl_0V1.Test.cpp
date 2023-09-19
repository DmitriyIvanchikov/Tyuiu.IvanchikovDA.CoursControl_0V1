#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IvanchikovDA.CoursControl_0V1.Lib/Tyuiu.IvanchikovDA.CoursControl_0V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace KulmameovZRCrTest
{
	TEST_CLASS(KulmameovZRCrTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V0* serviceV1 = new Service1();
			int p;
			p = serviceV1->Control(123);

			Assert::AreEqual(6, p);
		}
	};
}
