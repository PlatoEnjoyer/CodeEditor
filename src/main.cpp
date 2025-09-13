#include <QApplication>
#include <QMainWindow>
#include <QStyleFactory>
#include <QDebug>
#include "ui/stylemanager.hpp"



int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    app.setStyle(QStyleFactory::create("Fusion"));

    QString styleSheet = loadStyleSheet("ui/styles/dark.qss");
    if (!styleSheet.isEmpty()) {
        app.setStyleSheet(styleSheet);
    }
    else {
        qDebug() << "The style was not loaded.";
    }

    QMainWindow window;
    window.setWindowTitle("My Window");
    window.resize(1920, 1080);
    window.show();

    return app.exec();
}
