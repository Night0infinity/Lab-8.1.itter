#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 8.1.itter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[101] = {'w', 'h', 'i', 'l', 'e', 'w'};
			Change(str);
			Assert::AreEqual(str[2], '*');

		}
	};
}