#ifndef CFGSHAREDPATHWGT_H
#define CFGSHAREDPATHWGT_H
#include "cfgbase.h"

class QLineEdit;
class QPushButton;
class QLabel;

class CfgSharedpathWgt : public CfgBase
{
    Q_OBJECT
public:
    explicit CfgSharedpathWgt(QWidget *parent = 0);
    void paintEvent(QPaintEvent *) override;

    virtual void onEditorMode();
    virtual void onRunningMode();
private:
    QLineEdit* _editPath;
    QPushButton* _btnChoose;
signals:

public slots:
    void onPathChanging();
};

#endif // CFGSHAREDPATHWGT_H
