#include "pch.h"
#include "Question.h"

int main()
{
    Question n1("Gde zalupa u slona?1-u slona,2-u volka",1);
    n1.display();
 
    std::string name;
    int correct;

    cout << "Enter the question: " << endl;
    cin >> name;
    cout << "Enter the correct answer: " << endl;
    cin >> correct;

    // # -> FINISH:
    cout << endl;
    return 0;

}

