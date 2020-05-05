#include "GraphicEditor.h"

GraphicEditor::GraphicEditor()
{
	this->opsyst = "None";
}
GraphicEditor::GraphicEditor(const string name, const string type, const string author, const string opsyst) : Software(name, type, author)
{
	this->opsyst = opsyst;
}
GraphicEditor::GraphicEditor(GraphicEditor &o) : Software(o.name,o.type,o.author)
{
    this->opsyst = o.opsyst;
}
GraphicEditor::~GraphicEditor()
{
    cout << "Graphic editor ";
}
	const string GraphicEditor::getopsyst() const { return opsyst; }
	void GraphicEditor::setopsyst(const string opsyst) { this->opsyst = opsyst; }

const void GraphicEditor::print() const
{
    cout << "Name: " << name << "\nType: " << type << "\nAuthor: " << author << "\nOperation system: " << opsyst << endl << endl;
}
GraphicEditor & GraphicEditor::operator = (const GraphicEditor &ge)
{
    if(this == &ge)
        return *this;
    GraphicEditor::name = ge.name;
    GraphicEditor::type = ge.type;
    GraphicEditor::author = ge.author;
    GraphicEditor::opsyst = ge.opsyst;
    return *this;
}
