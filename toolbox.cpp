#include "toolbox.h"

ToolBox::ToolBox(QWidget *parent, Qt::WindowFlags f) :
    QToolBox(parent, f)
{
    setupUi(this);
    //setItemText(0, "My Friends");
}

ToolBox::~ToolBox()
{
}
