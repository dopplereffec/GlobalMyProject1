//���� program.cpp
#include "stdafx.h"
#include <iostream> 
#include "funcs.h"
using namespace std;
double MySum(double a, double b)
{ 
	return a+b; 
}
double MySub(double a, double b) 
{ 
	return a - b; 
}
int main() 
{
	cout << MySum(10, 3) << endl; 
	cout << MySub(10, 3) << endl; 
	cout << MyMul(10, 3) << endl;
	cout << MyDiv(10, 3) << endl; 
<<<<<<< HEAD
	cout << MyPow(10, 3) << endl;
=======
	cout << MyPow(10.5, 3.7) << endl;
>>>>>>> develop
	system("pause");
	return 0; 
}