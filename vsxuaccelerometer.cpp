#include "vsxuaccelerometer.h"

#include <QDebug>

VSXuAccelerometer::VSXuAccelerometer(QObject *parent) :
    QAccelerometer(parent),
    m_moduleName("PJ's Module")
{
    qDebug()<<"Initialized VSXuAccelerometer Module...";

    connect(this, SIGNAL( readingChanged() ), this, SLOT( updateReading() ) );

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

void VSXuAccelerometer::updateReading()
{
    qDebug()<< "Do something here";
}
