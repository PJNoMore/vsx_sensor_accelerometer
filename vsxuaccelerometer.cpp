#include "vsxuaccelerometer.h"

VSXuAccelerometer::VSXuAccelerometer(QDeclarativeItem *parent) :
    QDeclarativeItem(parent)
{
      qDebug("vsxuaccelerometer init");
}

VSXuAccelerometer::~VSXuAccelerometer()
{

}

const QVector3D VSXuAccelerometer::getXYZ()
{
    return m_xyz;
}

void VSXuAccelerometer::setXYZ(const QVector3D xyz)
{
    if(xyz != m_xyz)
    {
        m_xyz = xyz;
        emit xyzChanged(m_xyz);
    }
}
