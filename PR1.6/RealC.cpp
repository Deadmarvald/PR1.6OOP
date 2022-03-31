#include "RealC.h"
#include <math.h>
#define M_PI 3.14159265358979323846

using namespace std;

void RealC::Init(double KorStep, int PiStep, double RandNum, Number number)
{
	SetKorStep(KorStep);
	SetPiStep(PiStep);
	SetRandNum(RandNum);
	SetNumber(number);
}

void RealC::Display()const
{
	cout << endl;
	cout << "Degree of root = " << KorStep << endl;
	cout << "Degree of the number pi = " << PiStep << endl;
	cout << "Random number under the root = " << RandNum << endl;
	number.Display();
	cout << endl;
}

void RealC::DisplayRes()
{
	cout << endl;
	cout << "The root of the " << KorStep << "th degree of a "
		<< RandNum << " = " << Root(KorStep, RandNum) << endl;
	cout << PiStep << " degree of the number pi = " << DegPi(PiStep) << endl;
	number.DisplayRes();
	cout << endl;
}

void RealC::Read()
{
	double KorStep;
	int PiStep, RandNum;
	Number number;

	cout << endl;
	cout << "Degree of root = ";
	cin >> KorStep;
	cout << "Degree of the number pi = ";
	cin >> PiStep;
	cout << "Random number under the root = ";
	cin >> RandNum;
	number.Read();
	cout << endl;

	Init(KorStep, PiStep, RandNum, number);
}

double RealC::Root(double KorStep, double RandNum)
{
	return pow(RandNum, (1. / KorStep));
}

double RealC::DegPi(int PiStep)
{
	return pow(M_PI, PiStep);
}

void RealC::Number::Init(double firstNum, double secondNum)
{
	SetFirstNum(firstNum);
	SetSecondNum(secondNum);
}

void RealC::Number::Display()const
{
	cout << endl;
	cout << "First Number = " << firstNum << endl;
	cout << "Second Number = " << secondNum << endl;
	cout << endl;
}

void RealC::Number::DisplayRes()
{
	cout << firstNum << " * " << secondNum << " = " << Mul(firstNum, secondNum) << endl;
	cout << firstNum << " - " << secondNum << " = " << Sub(firstNum, secondNum) << endl;
}

void RealC::Number::Read()
{
	double firstNum, secondNum;

	cout << "First Number = ";
	cin >> firstNum;
	cout << "Second Number = ";
	cin >> secondNum;

	Init(firstNum, secondNum);
}

double RealC::Number::Mul(double firstNum, double secondNum)
{
	return firstNum * secondNum;
}

double RealC::Number::Sub(double firstNum, double secondNum)
{
	return firstNum - secondNum;
}