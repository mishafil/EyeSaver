#ifndef SETTINGSMODEL_H
#define SETTINGSMODEL_H

#include <QUrl>
#include <QTextStream>


class SettingsModel
{
    QUrl htmlUrl;
    unsigned long intervalMs;

public:
    SettingsModel(const QString &htmlLocation, const unsigned long intervalMs);

    QUrl getHtmlUrl() const;
    unsigned long getIntervalMs() const;

    void setHtmlUrl(const QString& newUrl);
    void setIntervalMs(const unsigned long interval);
};

QTextStream& operator<<(const QTextStream& output, const SettingsModel& model);
QTextStream& operator>>(const QTextStream& input, SettingsModel& model);

#endif // SETTINGSMODEL_H
