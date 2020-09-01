#include "Question.h"

Question::Question() : name("-") , correct(0)
{
}

Question::Question(std::string name, int correct) : name(name), correct(correct)
{
}

Question::~Question()
{
}

void Question::display()
{
	cout << "Nmae: " << name << endl;
	cout << "Correct: " << correct << endl;
	cout << endl;
}


