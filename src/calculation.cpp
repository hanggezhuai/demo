#include "calculation.h"

QString Calculation::calculateLoad(const QString &vehicleInfo, const QString &cargoInfo) {
    // 简单的装箱算法示例
    QString result = "装箱结果:\n";
    result += "车辆信息: " + vehicleInfo + "\n";
    result += "货物信息: " + cargoInfo + "\n";
    result += "装箱完成。\n";
    return result;
}