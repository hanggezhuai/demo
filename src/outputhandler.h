#ifndef OUTPUTHANDLER_H
#define OUTPUTHANDLER_H

#include <QString>

class OutputHandler {
public:
    bool saveToFile(const QString &filePath, const QString &data);
};

#endif // OUTPUTHANDLER_H