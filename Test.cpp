#include "Test.h"

Test::Test() : countQ(0), countA(0), arr(nullptr) , arr1(nullptr)
{
}

Test::~Test()
{
	if (arr != nullptr)
	{
		delete arr;
		arr = nullptr;
		countQ = 0;
	}

	if (arr1 != nullptr)
	{
		delete arr1;
		arr1 = nullptr;
		countA = 0;
	}
}

void Test::display()
{
	for (int i = 0; i < countQ; i++)
	{
		arr[i].display();
	}

	for (int i = 0; i < countA; i++)
	{
		arr1[i].displayAnsw();
	}
}

void Test::addQuestion(const Question& q)
{
	Question* buff = new Question[countQ];
	for (int i = 0; i < countQ; i++)
	{
		buff[i] = arr[i];
	}
	delete[] arr;
	arr = new Question[countQ + 1];
	for (int i = 0; i < countQ; i++)
	{
		arr[i] = buff[i];
	}
	arr[countQ] = q;
	countQ++;
}

void Test::addAnswer(const Answer& a)
{
	Answer* buff = new Answer[countA];
	for (int i = 0; i < countA; i++)
	{
		buff[i] = arr1[i];
	}
	delete[] arr1;
	arr1 = new Answer[countA + 1];
	for (int i = 0; i < countA; i++)
	{
		arr1[i] = buff[i];
	}
	arr1[countA] = a;
	countA++;
}
