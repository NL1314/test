#include "stdafx.h"
#include "CppUnitTest.h"
#include "../vs1/add.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO:  �ڴ�������Դ���
			Assert::AreEqual(3, add(1, 2));
		}

	};
}