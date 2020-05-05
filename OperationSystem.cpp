#include "OperationSystem.h"

OperationSystem::OperationSystem()
{
	this->architecture = "None";
}
OperationSystem::OperationSystem(const string name, const string type, const string author, const string architecture) : Software(name, type, author)
{
	this->architecture = architecture;
}
OperationSystem::OperationSystem(OperationSystem &o) : Software(o.name,o.type,o.author)
{
    this->architecture = o.architecture;
}
OperationSystem::~OperationSystem()
{
    cout << "Operation system ";
}
	const string OperationSystem::getarchitecture() { return architecture; }
	void OperationSystem::setarchitecture(const string architecture) { this->architecture = architecture; }

const void OperationSystem::print()
{
    cout << "Name: " << name << "\nType: " << type << "\nAuthor: " << author << "\nArchitecture: " << architecture << endl << endl;
}
OperationSystem & OperationSystem::operator = (const OperationSystem &os)
{
    if(this == &os)
        return *this;
    OperationSystem::name = os.name;
    OperationSystem::type = os.type;
    OperationSystem::author = os.author;
    OperationSystem::architecture = os.architecture;
    return *this;
}
