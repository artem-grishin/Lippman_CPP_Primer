#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Hi!";
    Sales_item item1, item2, item3, item4;
    cout << "Enter the book info:\n";
    cin >> item1 >> item2 >> item3 >> item4;
    cout << item1 + item2 + item3 + item4 << "\n";
//    cout << item2 << "\n";

    qFatal("\n\nGoodbye\n\n");
    return a.exec();
}
