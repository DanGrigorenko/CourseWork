#ifndef HASHTABLEWINDOW_H
#define HASHTABLEWINDOW_H

#include <QMainWindow>

namespace Ui {
class HashTableWindow;
}

class HashTableWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HashTableWindow(QWidget *parent = nullptr);
    ~HashTableWindow();

private slots:
    void on_action_triggered();

private:
    Ui::HashTableWindow *ui;
};

#endif // HASHTABLEWINDOW_H
