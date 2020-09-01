//
//  Answer.cpp
//  TestSystem
//
//  Created by Vanyusha on 01.09.2020.
//  Copyright © 2020 EasyExam. All rights reserved.
//

#include "Answer.hpp"
//реализация конструктора по умолчанию

Answer::Answer() : answ(0)
{
    
}
// реализация ответа

Answer::Answer(int answ) : answ(answ)
{
    
}
//вывод ответа

void Answer::displayAnsw()
{
    cout << "The entered answer is:" << answ << endl;
}

