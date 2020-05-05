#include <iostream>
#include "Software.h"
#include "OperationSystem.h"
#include "GraphicEditor.h"
#include "DevelopmentEnvironment.h"

int main()
{
    OperationSystem Windows("Windows", "Proprietary", "Bill Gates", "NT");
    Windows.print();

    OperationSystem Linux = Windows;
    Linux.setname("Linux");
    Linux.setauthor("Linus Torvalds");
    Linux.setarchitecture("Linux");

    Software *Print = &Linux;
    Print->print();

    GraphicEditor Paint("","Free","Unknown","");
    Paint.setname("Paint");
    Paint.setopsyst(Linux.getarchitecture());

    Software *Prnt = &Paint;
    Prnt->print();

    DevEnviroment CodeBlocks("CodeBlocks","Free","Unknown","C++");
    CodeBlocks.print();

    return 0;
}
