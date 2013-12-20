#ifndef VSXUACCELEROMETER_H
#define VSXUACCELEROMETER_H

#include <QAccelerometer>

class VSXuAccelerometer : public QAccelerometer
{
    Q_OBJECT

    Q_PROPERTY(QString moduleName READ moduleName WRITE setModuleName NOTIFY moduleNameChanged)
public:
    explicit VSXuAccelerometer(QObject *parent = 0);

    QString moduleName() const;
    void setModuleName(const QString& name);

signals:
    void moduleNameChanged();

public slots:
    void updateReading();

private:
    QString m_moduleName;
};

#endif // VSXUACCELEROMETER_H
