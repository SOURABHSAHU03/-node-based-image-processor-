#include "miniproj.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    miniproj w;

   
    //w.setFixedSize(1024,768);  // You can adjust this size as needed

    w.show();
    return a.exec();
}
