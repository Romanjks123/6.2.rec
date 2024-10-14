#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		

        TEST_METHOD(TestSortWithAllIdenticalElements)
        {
            // Test case with all identical elements
            int arr[] = { 7, 7, 7, 7, 7 };
            const int size = sizeof(arr) / sizeof(arr[0]);
            Sort(arr, size, 0);

            // Expected sorted array (should remain unchanged)
            int expected[] = { 7, 7, 7, 7, 7 };
            for (int i = 0; i < size; ++i)
            {
                Assert::AreEqual(expected[i], arr[i], L"Array is not sorted correctly");
            }
        }

        TEST_METHOD(TestSortWithSingleElementArray)
        {
            // Test case with a single-element array
            int arr[] = { 42 };
            const int size = sizeof(arr) / sizeof(arr[0]);
            Sort(arr, size, 0);

            // Expected sorted array (should remain unchanged)
            int expected[] = { 42 };
            for (int i = 0; i < size; ++i)
            {
                Assert::AreEqual(expected[i], arr[i], L"Array is not sorted correctly");
            }
        }
	};
}
