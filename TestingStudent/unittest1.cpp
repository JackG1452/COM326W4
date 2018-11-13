#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingModule
{		
	TEST_CLASS(ModuleClass)
	{
	public:
		
		TEST_METHOD(TestGetTitle)
		{
			// TODO: Your test code here

			//Arrange
			Module Test{"TestingTitle", "TestingCode", 1, 1};
			std::string expected{ "TestingTitle" };
			std::string actual{};

			//Act
			actual = Test.getModuleTitle();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestSetTitle)
		{
			// TODO: Your test code here

			//Arrange
			Module Test{};
			std::string expected{ "SetTitle" };
			std::string actual{};

			//Act
			Test.setModuleTitle("SetTitle");
			actual = Test.getModuleTitle();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestGetCode)
		{
			// TODO: Your test code here

			//Arrange
			Module Test{ "TestingTitle", "TestingCode", 1, 1 };
			std::string expected{ "TestingCode" };
			std::string actual{};

			//Act
			actual = Test.getModuleCode();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestSetCode)
		{
			// TODO: Your test code here

			//Arrange
			Module Test{};
			std::string expected{ "SetCode" };
			std::string actual{};

			//Act
			Test.setModuleCode("SetCode");
			actual = Test.getModuleCode();

			//Assert
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestGetModuleMark)
		{
			// TODO: Your test code here

			//Arrange
			Module Test{ "TestingTitle", "TestingCode", 1, 1 };
			int expected{ 1 };
			int actual{};

			//Act
			actual = Test.getModuleMark();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestSetModuleMark)
		{
			// TODO: Your test code here

			//Arrange
			Module Test{};
			int expected{ 1 };
			int actual{};

			//Act
			Test.setModuleMark( 1 );
			actual = Test.getModuleMark();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestGetCreditPoints)
		{
			// TODO: Your test code here

			//Arrange
			Module Test{ "TestingTitle", "TestingCode", 1, 1 };
			int expected{ 1 };
			int actual{};

			//Act
			actual = Test.getModuleCreditPoints();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestSetCreditPoints)
		{
			// TODO: Your test code here

			//Arrange
			Module Test{};
			int expected{ 1 };
			int actual{};

			//Act
			Test.setModuleCreditPoints(1);
			actual = Test.getModuleCreditPoints();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestCustom)
		{
			// TODO: Your test code here

			//Arrange
			Module Test{ "TestingTitle", "TestingCode", 1, 1 };
			std::string expectedTitle{ "TestingTitle" };
			std::string actualTitle{};

			std::string expectedCode{ "TestingCode" };
			std::string actualCode{};

			int expectedMark{ 1 };
			int actualMark{};

			int expectedCreditPoints{ 1 };
			int actualCreditPoints{};

			//Act
			actualTitle = Test.getModuleTitle();
			actualCode = Test.getModuleCode();
			actualMark = Test.getModuleMark();
			actualCreditPoints = Test.getModuleCreditPoints();


			//Assert
			Assert::AreEqual(expectedTitle, actualTitle);
			Assert::AreEqual(expectedCode, actualCode);
			Assert::AreEqual(expectedMark, actualMark);
			Assert::AreEqual(expectedCreditPoints, actualCreditPoints);
		}
	};
}

namespace TestingStudent
{
	TEST_CLASS(StudentClass)
	{
	public:

		TEST_METHOD(TestCustom)
		{
			// TODO: Your test code here

			//Arrange
			Student Test{ "Test McTest", "Test", "1", 1 };
			std::string expectedName{ "Test McTest" };
			std::string actualName{};

			std::string expectedReg{ "Test" };
			std::string actualReg{};

			std::string expectedCourse{ "1" };
			std::string actualCourse{};

			int expectedYear{ 1 };
			int actualYear{};

			//Act
			actualName = Test.GetName();
			actualReg = Test.GetRegistrationID();
			actualCourse = Test.GetCourse();
			actualYear = Test.GetYearofStudy();

			//Assert
			Assert::AreEqual(expectedName, actualName);
			Assert::AreEqual(expectedReg, actualReg);
			Assert::AreEqual(expectedCourse, actualCourse);
			Assert::AreEqual(expectedYear, actualYear);
		}

		TEST_METHOD(TestAddModule)
		{

		}
	};
}