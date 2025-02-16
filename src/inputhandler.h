#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <QString>

class InputHandler {
public:
    bool loadFromUserInput(const QString &vehicleInfo, const QString &cargoInfo);
};

#endif // INPUTHANDLER_H