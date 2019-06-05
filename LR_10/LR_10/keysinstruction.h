#ifndef KEYSINSTRUCTION_H
#define KEYSINSTRUCTION_H

#include <QDialog>

namespace Ui {
class KeysInstruction;
}

class KeysInstruction : public QDialog
{
    Q_OBJECT

public:
    explicit KeysInstruction(QWidget *parent = nullptr);
    ~KeysInstruction();

private:
    Ui::KeysInstruction *ui;
};

#endif // KEYSINSTRUCTION_H
