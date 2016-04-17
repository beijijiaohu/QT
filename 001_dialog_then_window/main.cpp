#include "mainwindow.h"
#include "mdialog.h"
#include <QApplication>
#include <iostream>

using namespace  std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    MDialog dialog;

    if (dialog.exec() == QDialog::Accepted) {
        w.show();
        a.exec();
    }

    cout << "程序结束运行" << endl;

    return 0;
}
