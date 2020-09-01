#pragma once
#include "pch.h"
#include "Question.h"
#include "Answer.hpp"

class Test 
{
private:
	Question* arr;
	Answer* arr1;
	int countQ;
	int countA;
public:
	Test();
	~Test();
	void display();
	void addQuestion(const Question& q);
	void addAnswer(const Answer& a);
};


