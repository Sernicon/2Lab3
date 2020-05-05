#include "Software.h"

Software::Software()
{
	this->name = "None";
	this->type = "None";
	this->author = "None";
}
Software::Software(const string name, const string type, const string author)
{
	this->name = name;
	this->type = type;
	this->author = author;
}
Software::Software(Software &s)
{
    this->name = s.name;
    this->type = s.type;
    this->author = s.author;
}
Software::~Software()
{
    cout << name << " by " << author << " was deleted.\n" << endl;
}
    const string Software::getname() { return name; }
	void Software::setname(const string name) { this->name = name; }
	const string Software::gettype() { return type; }
	void Software::settype(const string type) { this->type = type; }
	const string Software::getauthor() { return author; }
	void Software::setauthor(const string author) { this->author = author; }
