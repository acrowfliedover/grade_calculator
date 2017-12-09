#include "grade_calculator.h"
#include <QApplication>
//#include <QLabel>

int main(int argc, char *argv[])
{


    QApplication app(argc, argv);
   // grade_calculator w;
   // w.show();
    QLabel *label=new QLabel("Hello Qt!");//new returns a pointer….
    label->show();
    return app.exec();
}
