#ifndef SETTINGSIO_H
#define SETTINGSIO_H

#include <QObject>
#include <QFile>

class SettingsIO
{
    QFile* settingsFile;
public:
    explicit SettingsIO(const QString& settingsLocation);
    ~SettingsIO();
};

#endif // SETTINGSIO_H
