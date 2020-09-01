#pragma once
#include "pch.h"

class Question
{
private:
	std::string name;
	int correct;
public:
	Question();
	Question(std::string name, int correct);
	~Question();
	void display();
};

