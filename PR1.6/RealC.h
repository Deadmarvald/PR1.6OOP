#pragma once

#include <iostream>

class RealC
{
private:
	double KorStep;
	int PiStep;
	double RandNum;
	class Number
	{
	private:
		double firstNum, secondNum;

	public:
		double GetFirstNum() { return firstNum; }
		void SetFirstNum(double firstNum) { this->firstNum = firstNum; }
		double GetSecondNum() { return secondNum; }
		void SetSecondNum(double secondNum) { this->secondNum = secondNum; }

		void Init(double firstNum, double secondNUm);
		void Display()const;
		void DisplayRes();
		void Read();

		double Mul(double firstNum, double secondNum);
		double Sub(double firstNum, double secondNum);
	};
	Number number;
public:
	double GetKorStep() { return KorStep; }
	int GetPiStep() { return PiStep; }
	double GetRandNum() { return RandNum; }
	RealC::Number GetNumber() { return number; }

	void SetKorStep(double KorStep) { this->KorStep = KorStep; }
	void SetPiStep(int PiStep) { this->PiStep = PiStep; }
	void SetRandNum(int RandNum) { this->RandNum = RandNum; }
	void SetNumber(RealC::Number number) { this->number = number; }

	void Init(double KorStep, int PiStep, double RandNum, Number number);
	void Display()const;
	void DisplayRes();
	void Read();

	double Root(double KorStep, double RandNum);
	double DegPi(int PiStep);
};