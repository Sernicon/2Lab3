#include "DevelopmentEnvironment.h"

DevEnviroment::DevEnviroment()
{
	this->proglang = "None";
}
DevEnviroment::DevEnviroment(const string name, const string type, const string author, const string proglang) : Software(name, type, author)
{
	this->proglang = proglang;
}
DevEnviroment::DevEnviroment(DevEnviroment &d) : Software(d.name,d.type,d.author)
{
    this->proglang = d.proglang;
}
DevEnviroment::~DevEnviroment()
{
    cout << "Development environment ";
}
	const string DevEnviroment::getproglang() const { return proglang; }
	void DevEnviroment::setproglang(const string proglang) { this->proglang = proglang; }

const void DevEnviroment::print() const
{
    cout << "Name: " << name << "\nType: " << type << "\nAuthor: " << author << "\nProgramming language: " << proglang << endl << endl;
}
DevEnviroment & DevEnviroment::operator = (const DevEnviroment &de)
{
    if(this == &de)
        return *this;
    DevEnviroment::name = de.name;
    DevEnviroment::type = de.type;
    DevEnviroment::author = de.author;
    DevEnviroment::proglang = de.proglang;
    return *this;
}
