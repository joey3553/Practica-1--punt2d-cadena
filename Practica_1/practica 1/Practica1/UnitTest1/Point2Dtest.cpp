#include "stdafx.h"
#include "CppUnitTest.h"
#include ""
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Plus)
		{
			Point2D a(2.0f, 3.0f);
			Point2D b(1.0f, 1.0f);
			Point2D c;

			c = a + b;

			Assert::IsTrue(c.x == 3.0f && c.y == 4.0f);
		}

		TEST_METHOD(Sub)
		{
			Point2D a(2.0f, 3.0f);
			Point2D b(1.0f, 1.0f);
			Point2D c;

			c = a - b;

			Assert::IsTrue(c.x == 1.0f && c.y == 2.0f);
		}

		TEST_METHOD(PlusEqual)
		{
			Point2D a(2.0f, 3.0f);
			Point2D b(1.0f, 1.0f);
			

			a += b;

			Assert::IsTrue(a.x == 3.0f && a.y == 4.0f);
		}

		TEST_METHOD(SubEqual)
		{
			Point2D a(2.0f, 3.0f);
			Point2D b(1.0f, 1.0f);


			a -= b;

			Assert::IsTrue(a.x == 1.0f && a.y == 2.0f);
		}

		TEST_METHOD(EqualEqual)
		{
			Point2D a(1.0f, 3.0f);
			Point2D b(1.0f, 3.0f);

			Assert::IsTrue(a == b);

		}

		TEST_METHOD(Different)
		{
			Point2D a(2.0f, 3.0f);
			Point2D b(1.0f, 1.0f);

			Assert::IsTrue(a != b);
		}

		TEST_METHOD(isZero)
		{
			Point2D a;
			Point2D b(0.0f, 0.0f);

			Assert::IsTrue(a.isZero() && b.isZero());
		}

		TEST_METHOD(setZero)
		{
			Point2D a(1.0f, 3.0f);

			a.setZero();

			Assert::IsTrue(a.x == 0.0f && a.y == 0.0f);
		}

		TEST_METHOD(distanceTo)
		{
			Point2D a(4.0f, 2.0f);
			Point2D b(2.0f, 5.0f);

			Assert::IsTrue(a.distanceTo(b) == sqrt(13.0f));
		}





	};
}