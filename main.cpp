
#include "Gradebook.h"
#include <iostream>


int main()
{
    std::cout << std::endl << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << "-- Opgave 2  test --" << std::endl;
    std::cout << "--------------------" << std::endl << std::endl;

    Gradebook gBook;

    std::string activityCPP1 = "2.5\n";
    std::string activityCPP2 = "2.5\n";
    std::string activityOOP1 = "5\n";
    std::string examCPP = "45\n";
    std::string examOOP = "45\n";
    activityCPP1 += "prhol02 100\njejen20 80\nninie20 20\njajol20 50\n\n";
    activityCPP2 += "prhol02 100\njejen20 80\nninie20 50\njajol20 35\njejoe20 10\n";
    activityOOP1 += "prhol02 100\njejen20 80\n\n\njajol20 17\njejoe20 50\n";
    examCPP      += "prhol02 100\njejen20 100\nninie20 90\njajol20 80\njejoe20 70\n";
    examOOP      += "prhol02 100\njejen20 100\nninie20 80\njajol20 30\njejoe20 45\n";

    std::stringstream saCPP1(activityCPP1);
    std::stringstream saCPP2(activityCPP2);
    std::stringstream saOOP1(activityOOP1);
    std::stringstream seCPP(examCPP);
    std::stringstream seOOP(examOOP);
    gBook.readResults(saCPP1);
    gBook.readResults(saCPP2);
    gBook.readResults(saOOP1);
    gBook.readResults(seCPP);
    gBook.readResults(seOOP);

    std::stringstream ssoutput;
    gBook.printResults(ssoutput);
    std::cout << "Resultater printet i stream" << std::endl;
    std::cout << ssoutput.str() << std::endl;
    std::cout << "Resultater printet på skærm" << std::endl;
    return 0;
}
