#include "grade_calculator.h"
#include <QApplication>

//#include <QLabel>

int main(int argc, char *argv[])
{


   QApplication app(argc, argv);
   QWidget *window=new QWidget;
   window->setWindowTitle("Calculate Your Grade");

   QSpinBox *HW1= new QSpinBox;
   QSlider *HW1S= new QSlider(Qt::Horizontal);
   HW1->setRange(0,100);
   HW1S->setRange(0,100);
   QObject::connect(HW1, SIGNAL(valueChanged(int)),HW1S,SLOT(setValue(int)));
   QObject::connect(HW1S, SIGNAL(valueChanged(int)),HW1,SLOT(setValue(int)));
   QHBoxLayout *layout1 = new QHBoxLayout;
   QLabel *HW1L=new QLabel("Homework 1");
   QVBoxLayout *layout2= new QVBoxLayout;
   layout1->addWidget(HW1);
   layout1->addWidget(HW1S);
   layout2->addWidget(HW1L);
   layout2->addLayout(layout1);
   window->setLayout(layout2);

   window->show();
   return app.exec();
}

