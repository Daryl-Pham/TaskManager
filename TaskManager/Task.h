#include <QString>

class Task {
public:
    Task(const QString &name, const QString &description);
    QString getName() const;
    QString getDescription() const;
    bool isCompleted() const;
    void setCompleted(bool completed);

private:
    QString name;
    QString description;
    bool completed;
};
