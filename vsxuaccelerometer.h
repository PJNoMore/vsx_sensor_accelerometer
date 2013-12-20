#ifndef VSXUACCELEROMETER_H
#define VSXUACCELEROMETER_H

#include <QtDeclarative/QDeclarativeItem>
#include <QVector3D>

class VSXuAccelerometer : public QDeclarativeItem
{
    Q_PROPERTY(QVector3D reading READ getXYZ WRITE setXYZ NOTIFY xyzChanged)
    Q_OBJECT
public:
    explicit VSXuAccelerometer(QDeclarativeItem *parent = 0);
    ~VSXuAccelerometer();

    const QVector3D getXYZ();

    void setXYZ(const QVector3D);


signals:
    void xyzChanged(QVector3D);

private:
    QVector3D m_xyz;
};

#endif // VSXUACCELEROMETER_H
