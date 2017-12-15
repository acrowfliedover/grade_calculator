#include "grade_calculator.h"
#include <QApplication>

//#include <QLabel>

int main(int argc, char *argv[])
{


   QApplication app(argc, argv);
   QWidget *window=new QWidget;
   window->setWindowTitle("Calculate Your Grade");

   QHBoxLayout *grand= new QHBoxLayout;
   QVBoxLayout *left= new QVBoxLayout;
   QVBoxLayout *right= new QVBoxLayout;
   QHBoxLayout *Assignments= new QHBoxLayout;
   QHBoxLayout *Midterm= new QHBoxLayout;
   QHBoxLayout *Final= new QHBoxLayout;
   QHBoxLayout *Project= new QHBoxLayout;
   //setting up the layouts

   QLabel *assignments_label=new QLabel("Assignments");
   QSpinBox *assignments= new QSpinBox;
   QSlider *assignments_slider= new QSlider(Qt::Horizontal);
   assignments->setRange(0,100);
   assignments_slider->setRange(0,100);
   QObject::connect(assignments, SIGNAL(valueChanged(int)),assignments_slider,SLOT(setValue(int)));
   QObject::connect(assignments_slider, SIGNAL(valueChanged(int)),assignments,SLOT(setValue(int)));
   //for assignments

   Assignments->addWidget(assignments_label);
   Assignments->addWidget(assignments);
   Assignments->addWidget(assignments_slider);

   left->addLayout(Assignments);
   //put in the layout

   QLabel *midterm_label=new QLabel("Midterm       ");
   QSpinBox *midterm= new QSpinBox;
   QSlider *midterm_slider= new QSlider(Qt::Horizontal);
   midterm->setRange(0,100);
   midterm_slider->setRange(0,100);
   QObject::connect(midterm, SIGNAL(valueChanged(int)),midterm_slider,SLOT(setValue(int)));
   QObject::connect(midterm_slider, SIGNAL(valueChanged(int)),midterm,SLOT(setValue(int)));
   //for midterm

   Midterm->addWidget(midterm_label);
   Midterm->addWidget(midterm);
   Midterm->addWidget(midterm_slider);

   left->addLayout(Midterm);

   //of course some copy and paste involved...I still think it's easier than making a function...

   QLabel *final_label=new QLabel("Final             ");
   QSpinBox *final= new QSpinBox;
   QSlider *final_slider= new QSlider(Qt::Horizontal);
   final->setRange(0,100);
   final_slider->setRange(0,100);
   QObject::connect(final, SIGNAL(valueChanged(int)),final_slider,SLOT(setValue(int)));
   QObject::connect(final_slider, SIGNAL(valueChanged(int)),final,SLOT(setValue(int)));
   //for final

   Final->addWidget(final_label);
   Final->addWidget(final);
   Final->addWidget(final_slider);

   left->addLayout(Final);

   //done with final

   QLabel *project_label=new QLabel("Project         ");
   QSpinBox *project= new QSpinBox;
   QSlider *project_slider= new QSlider(Qt::Horizontal);
   project->setRange(0,100);
   project_slider->setRange(0,100);
   QObject::connect(project, SIGNAL(valueChanged(int)),project_slider,SLOT(setValue(int)));
   QObject::connect(project_slider, SIGNAL(valueChanged(int)),project,SLOT(setValue(int)));
   //for project

   Project->addWidget(project_label);
   Project->addWidget(project);
   Project->addWidget(project_slider);

   left->addLayout(Project);


   window->setLayout(left);

   window->show();
   return app.exec();
}

