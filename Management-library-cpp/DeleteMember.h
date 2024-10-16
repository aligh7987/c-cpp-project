#ifndef DELETEMEMBER_H
#define DELETEMEMBER_H

#include <QDialog>

namespace Ui {
class DeleteMember;
}

class DeleteMember : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteMember(QWidget *parent = nullptr);
    ~DeleteMember();

private slots:
    void on_back_clicked();

    void on_delete_2_clicked();

private:
    Ui::DeleteMember *ui;
};

#endif // DELETEMEMBER_H
