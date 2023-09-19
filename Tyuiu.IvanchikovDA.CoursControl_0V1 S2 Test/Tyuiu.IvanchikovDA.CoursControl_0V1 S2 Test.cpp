#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IvanchikovDA.CoursControl_0V1 S2.Lib/Tyuiu.IvanchikovDA.CoursControl_0V1 S2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace KulmameovZRCr2Test
{
	TEST_CLASS(KulmameovZRCr2Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V3* serviceV2 = new Service1();
			int Rez;
			Rez = serviceV2->Proizved(5, 1, 2);
			Assert::AreEqual(Rez, 7);
		}
	};
}