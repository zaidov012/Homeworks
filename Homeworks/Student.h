#ifndef SALAM
#define SALAM
class Student
{
	int _field1{};
	int _field2{};

public:
	Student();
	Student(int f);
	Student(int f1, int f2);

	void xsetF(int f);
	void setF2(int f2);

	int getF();
	int getF2();
};
#endif