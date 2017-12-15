#include "grade_calculator.h"
#include "ui_grade_calculator.h"

grade_calculator::grade_calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::grade_calculator)
{
    ui->setupUi(this);
 //   QObject::connect(ui->spinBox,SIGNAL(valueChanged(int)),
     //                    this,SLOT(update_overall(int)));
}

grade_calculator::~grade_calculator()
{
    delete ui;
}

void grade_calculator::update_overall(int unused){
    // double score = 31.4;
    double score = static_cast<double>(unused);

   // ui->label_14->setText(QString::number(score));

    return;
}


double calculate_final_grade(double assignments=0,double midterm=0,double final=0,double project=0){
    if (15*assignments+25*midterm+30*final+35*project>15*assignments+50*final+35*project)
        return 15*assignments+25*midterm+30*final+35*project;
    else
        return 15*assignments+50*final+35*project;
}
