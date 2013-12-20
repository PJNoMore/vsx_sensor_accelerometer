#ifndef VSXUACCELEROMETER_H
#define VSXUACCELEROMETER_H

#include <QAccelerometer>

class VSXuAccelerometer : public QAccelerometer
{
    Q_OBJECT

    Q_PROPERTY(QString moduleName READ moduleName WRITE setModuleName NOTIFY moduleNameChanged)
    Q_PROPERTY(QString readingString READ readingString NOTIFY readingStringChanged CONSTANT)
public:
    explicit VSXuAccelerometer(QObject *parent = 0);

    QString moduleName() const;
    void setModuleName(const QString& name);

    QString readingString() const;

signals:
    void moduleNameChanged();
    void readingStringChanged();

public slots:

private:
    QString m_moduleName;
};

#endif // VSXUACCELEROMETER_H
