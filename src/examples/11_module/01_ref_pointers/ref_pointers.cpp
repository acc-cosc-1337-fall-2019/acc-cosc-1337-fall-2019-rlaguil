#include "ref_pointers.h"

// show that references and pointes can modify data pointed to

void ref(int &number, int* numberPtr)
{
	number = 500;
	*numberPtr = 1000;
}

