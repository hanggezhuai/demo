#include "outputhandler.h"
#include <QFile>
#include <QTextStream>

bool OutputHandler::saveToFile(const QString &filePath, const QString &data) {
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return false;

    QTextStream out(&file);
    out << data;
    file.close();
    return true;
}