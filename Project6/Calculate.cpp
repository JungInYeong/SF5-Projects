// 프로젝트 6 계산기 만들기(클래스 복습)
#include <iostream>
using namespace std;

class Calculate
{
public:

	virtual double printCalculate(double input1, double input2) = 0;

};

class Add : public Calculate
{
public:

	double printCalculate(double input1, double input2) override { return input1 + input2; }
};

class Sub : public Calculate
{
public:

	double printCalculate(double input1, double input2) override { return input1 - input2; }
};

class Mul : public Calculate
{
public:

	double printCalculate(double input1, double input2) override { return input1 * input2; }
};

class Div : public Calculate
{
public:

	double printCalculate(double input1, double input2) override { return input1 / input2; }
};

int main()
{


	return 0;
}