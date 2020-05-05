#ifndef DEVELOPMENTENVIRONMENT_H_INCLUDED
#define DEVELOPMENTENVIRONMENT_H_INCLUDED
#include "Software.h"

class DevEnviroment :public Software
{
private:
    string proglang;
public:
    DevEnviroment();
    DevEnviroment(const string name, const string type, const string author, const string proglang);
    DevEnviroment(DevEnviroment &d);
    ~DevEnviroment();

	const string getproglang();
	void setproglang(const string proglang);

	const void print() override;

	DevEnviroment & operator = (const DevEnviroment &de);
};

#endif // DEVELOPMENTENVIRONMENT_H_INCLUDED
