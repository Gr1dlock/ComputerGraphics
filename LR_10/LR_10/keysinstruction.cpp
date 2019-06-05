#include "keysinstruction.h"
#include "ui_keysinstruction.h"

KeysInstruction::KeysInstruction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KeysInstruction)
{
    ui->setupUi(this);
}

KeysInstruction::~KeysInstruction()
{
    delete ui;
}
