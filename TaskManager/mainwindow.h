#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QPushButton>
#include "Task.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void addTask();
    void updateTaskStatus();
    void deleteTask();

private:
    QListWidget *taskList;
    QPushButton *addButton;
    QPushButton *updateButton;
    QPushButton *deleteButton;
    QVector<Task> tasks;
};

#endif // MAINWINDOW_H
