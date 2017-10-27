//#include "dialog.h"
#include "toolbox.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Dialog w;
    //w.show();

    ToolBox tool_box;
    tool_box.show();

    return a.exec();
}
