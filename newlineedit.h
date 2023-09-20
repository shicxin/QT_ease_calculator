#ifndef NEWLINEEDIT_H
#define NEWLINEEDIT_H

#include <qlineedit.h>

class NewlineEdit : public QLineEdit
{
public:
    void keyPressEvent(QKeyEvent *event);

    void keyReleaseEvent(QKeyEvent *event);

};

#endif // NEWLINEEDIT_H
