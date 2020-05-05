#ifndef OPERATIONSYSTEM_H_INCLUDED
#define OPERATIONSYSTEM_H_INCLUDED
#include "Software.h"

class OperationSystem :public Software
{
private:
    string architecture;
public:
    OperationSystem();
    OperationSystem(const string name, const string type, const string author, const string architecture);
    OperationSystem(OperationSystem &o);
    ~OperationSystem();

	const string getarchitecture() const;
	void setarchitecture(const string architecture);

	const void print() const override;

	OperationSystem & operator = (const OperationSystem &os);
};

#endif // OPERATIONSYSTEM_H_INCLUDED
