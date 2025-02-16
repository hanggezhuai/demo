#ifndef CALCULATION_H
#define CALCULATION_H

#include <QString>

class Calculation {
public:
    QString calculateLoad(const QString &vehicleInfo, const QString &cargoInfo);
};

#endif // CALCULATION_H