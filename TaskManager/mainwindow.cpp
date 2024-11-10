#include "MainWindow.h"
#include <QVBoxLayout>
#include <QInputDialog>
#include <QCheckBox>
#include <QDialog>
#include <QLineEdit>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), taskList(new QListWidget), addButton(new QPushButton("Add Task")),
    updateButton(new QPushButton("Mark as Completed")), deleteButton(new QPushButton("Delete Task")) {

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(taskList);
    layout->addWidget(addButton);
    layout->addWidget(updateButton);
    layout->addWidget(deleteButton);

    QWidget *centralWidget = new QWidget;
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);

    connect(addButton, &QPushButton::clicked, this, &MainWindow::addTask);
    connect(updateButton, &QPushButton::clicked, this, &MainWindow::updateTaskStatus);
    connect(deleteButton, &QPushButton::clicked, this, &MainWindow::deleteTask);
}

MainWindow::~MainWindow() {}

void MainWindow::addTask() {
    QDialog dialog(this);
    QVBoxLayout layout(&dialog);

    QLineEdit taskName;
    QTextEdit taskDescription;

    layout.addWidget(&taskName);
    layout.addWidget(&taskDescription);

    QPushButton addButton("Add", &dialog);
    layout.addWidget(&addButton);
    connect(&addButton, &QPushButton::clicked, &dialog, &QDialog::accept);

    if (dialog.exec() == QDialog::Accepted) {
        Task task(taskName.text(), taskDescription.toPlainText());
        tasks.append(task);
        taskList->addItem(task.getName());
    }
}

void MainWindow::updateTaskStatus() {
    int currentRow = taskList->currentRow();
    if (currentRow != -1) {
        tasks[currentRow].setCompleted(true);
        taskList->item(currentRow)->setText(tasks[currentRow].getName() + " (Completed)");
    }
}

void MainWindow::deleteTask() {
    int currentRow = taskList->currentRow();
    if (currentRow != -1) {
        tasks.remove(currentRow);
        delete taskList->takeItem(currentRow);
    }
}
