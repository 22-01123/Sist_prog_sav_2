#include "pch.h"
#include "Form1.h"


using namespace CppCLRWinFormsProject;

int Form1::generateRandomGrade() {
    return rand() % 10 + 1;
}
