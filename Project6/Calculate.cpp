// 프로젝트 6 계산기 만들기(클래스 복습)
#include <iostream>
#include <vector>
using namespace std;

class Operation
{
public:

	virtual double printOperation(double num1, double num2) = 0;
	virtual ~Operation() {}

};

class Add : public Operation
{
public:

	double printOperation(double num1, double num2) override { return num1 + num2; }
};

class Sub : public Operation
{
public:

	double printOperation(double num1, double num2) override { return num1 - num2; }
};

class Mul : public Operation
{
public:

	double printOperation(double num1, double num2) override { return num1 * num2; }
};

class Div : public Operation
{
public:

	double printOperation(double num1, double num2) override { return num1 / num2; }
};


class Calculate
{
public:
	static double preResult;	// 이전 결과 저장
	static bool usepreResult;	// 이전 결과 사용 여부
	vector<Operation*> operation;

	Calculate()
	{
		operation.push_back(new Add());
		operation.push_back(new Sub());
		operation.push_back(new Mul());
		operation.push_back(new Div());

	}
	~Calculate()
	{
		for (Operation* op : operation) {
			delete op;
		}
	}
	void run()
	{
		string input;
		double num1, num2;
		string operations;

		//Operation* add = new Add();
		//Operation* sub = new Sub();
		//Operation* mul = new Mul();
		//Operation* div = new Div();

		while (1)
		{
			if (!usepreResult)
			{
				cout << "숫자를 입력해주세요 : ";
				cin >> num1;
			}
			else
			{
				num1 = preResult;
			}
			
		
			cout << "연산자를 입력해주세요 : ";
			cin >> operations;
			
			cout << "숫자를 입력해주세요 : ";
			cin >> num2;

			Operation* op = nullptr;
			if (operations == "+") {
				op = operation[0];
			}
			else if (operations == "-") {
				op = operation[1];
			}
			else if (operations == "*") {
				op = operation[2];
			}
			else if (operations == "/") {
				op = operation[3];
			}
			else {
				cerr << "연산자 찾을 수 없음!" << endl;
				continue;
			}

			double result = op->printOperation(num1, num2);
			cout << "결과: " << result << endl;
			preResult = result;
			usepreResult = true;
		
			cout << "연산을 계속 진행하시겠습니까? (Y : 계속, AC : 초기화, EXIT : 종료) : ";
			cin >> input;

			if (input == "AC")
			{
				reset();
			}
			else if (input == "EXIT")
			{
				cout << "연산을 종료 합니다." << endl;
				return;
			}
			else if (input != "Y")
			{
				usepreResult = false;
			}
		}
	}

	void reset() 
	{
		preResult = 0;
		usepreResult = false;
	}
	
};

double Calculate::preResult = 0;
bool Calculate::usepreResult = false;

int main()
{
	Calculate cal;
	cal.run();	

	return 0;
}