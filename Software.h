#ifndef SOFT_H_INCLUDED
#define SOFT_H_INCLUDED
#include <iostream>
using namespace std;

class Software
{
protected:
    string name;
    string type;
    string author;
public:
	Software();
	Software(const string name, const string type, const string author);
	Software(Software &s);
	~Software();

	const string getname();
	void setname(const string name);
	const string gettype();
	void settype(const string type);
	const string getauthor();
	void setauthor(const string author);

	virtual const void print() = 0;
};

#endif // SOFT_H_INCLUDED
