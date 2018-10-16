#ifdef QT_QML_DEBUG
#include <QtQuick>
#endif

#include <sailfishapp.h>

int main(int argc, char *argv[])
{
    QGuiApplication* app = SailfishApp::application(argc, argv);
    app->setApplicationDisplayName("Nextcloud Notes");
    app->setApplicationName("harbour-nextcloud-notes");
    app->setApplicationVersion("0.1");
    app->setOrganizationDomain("https://github.com/scharel");
    app->setOrganizationName("harbour-nextcloud-notes");

    qDebug() << app->applicationDisplayName() << app->applicationVersion();

    QQuickView* view = SailfishApp::createView();

    view->setSource(SailfishApp::pathTo("qml/harbour-nextcloud-notes.qml"));
    view->show();

    return app->exec();
}
