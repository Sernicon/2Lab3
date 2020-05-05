#ifndef GRAPHICEDITOR_H_INCLUDED
#define GRAPHICEDITOR_H_INCLUDED
#include "Software.h"

class GraphicEditor :public Software
{
private:
    string opsyst;
public:
    GraphicEditor();
    GraphicEditor(const string name, const string type, const string author, const string opsyst);
    GraphicEditor(GraphicEditor &g);
    ~GraphicEditor();

	const string getopsyst();
	void setopsyst(const string opsyst);

	const void print() override;

	GraphicEditor & operator = (const GraphicEditor &ge);
};

#endif // GRAPHICEDITOR_H_INCLUDED
