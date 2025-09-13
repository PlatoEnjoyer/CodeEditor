#include "stylemanager.hpp"
#include <QFile>
#include <QTextStream>
#include <QDebug>


QString loadStyleSheet(const QString& fileName) {
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning() << "Couldn't open the style file: " << fileName;
        return QString();
    }

    QTextStream stream(&file);
    QString style = stream.readAll();
    file.close();

    return style;
}
