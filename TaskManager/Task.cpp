#include "Task.h"

Task::Task(const QString &name, const QString &description)
    : name(name), description(description), completed(false) {}

QString Task::getName() const {
    return name;
}

QString Task::getDescription() const {
    return description;
}

bool Task::isCompleted() const {
    return completed;
}

void Task::setCompleted(bool completed) {
    this->completed = completed;
}
