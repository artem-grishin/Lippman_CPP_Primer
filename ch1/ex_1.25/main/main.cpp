#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Sales_item total;
    if (cin >> total) {
        Sales_item trans;
        while (cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            }
            else {
                cout << total << "\n";
                total = trans;
            }
        }
        cout << total << "\n";
    }
    else {
        cerr << "No data?!\n";
        return -1;
    }
    return 0;

    qFatal("\n\nGoodbye\n\n");
    return a.exec();
}
