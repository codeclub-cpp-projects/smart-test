#pragma once
#include "Answer.h"

class Question
{
	std::vector < std::unique_ptr<Answer>> answers;
public:
	Question();
	~Question();
};

