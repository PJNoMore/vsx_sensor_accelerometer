#include "vsxuaccelerometer.h"

#include <QDebug>

VSXuAccelerometer::VSXuAccelerometer(QObject *parent) :
    QAccelerometer(parent),
    m_moduleName("PJ's Module")
{
    qDebug()<<"Initialized VSXuAccelerometer Module...";

    connect(this, SIGNAL( readingChanged() ), this, SIGNAL(readingStringChanged()) );

    //start taking the reading
    start();
}

QString VSXuAccelerometer::moduleName() const
{
    return m_moduleName;
}

void VSXuAccelerometer::setModuleName(const QString &name)
{
    if(m_moduleName != name){
        m_moduleName = name;
        emit moduleNameChanged();
    }
}

QString VSXuAccelerometer::readingString() const
{
    QAccelerometerReading* result = this->reading();
    return QString("(x,y,z) = (%1, %2, %3)").arg(result->x()).arg(result->y()).arg(result->z());
}
