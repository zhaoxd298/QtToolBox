#ifndef TOOLBOX_H
#define TOOLBOX_H

#include <QToolBox>
#include "ui_toolbox.h"


namespace Ui {
class ToolBox;
}

class ToolBox : public QToolBox, public Ui::ToolBox
{
    Q_OBJECT

public:
    explicit ToolBox(QWidget *parent = 0, Qt::WindowFlags f=0);
    ~ToolBox();

private:
};

#endif // TOOLBOX_H
