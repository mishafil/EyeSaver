#include "settingsmodel.h"

SettingsModel::SettingsModel(const QString &htmlLocation, const unsigned long interval)
    : htmlUrl(QUrl::fromLocalFile(htmlLocation)), intervalMs(interval)
{

}


QTextStream& operator<<(QTextStream& output, const SettingsModel& model)
{
    output << model.getHtmlUrl().url() << endl << model.getIntervalMs();
    return output;
}
QTextStream& operator>>(QTextStream& input, SettingsModel& model)
{
    unsigned long interval;
    QString url = input.device()->readLine();
    input >> interval;

    model.setHtmlUrl(url);
    model.setIntervalMs(interval);

    return input;
}
