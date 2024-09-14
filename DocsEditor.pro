QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fileeditor.cpp \
    main.cpp \
    mainwindow.cpp \
    utils.cpp

HEADERS += \
    fileeditor.h \
    mainwindow.h \
    utils.h

FORMS += \
    mainwindow.ui

win32:RC_FILE = file.rc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/lib/x64/release/ -lSpire.Doc.Cpp
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/lib/x64/debug/ -lSpire.Doc.Cpp
else:unix: LIBS += -L$$PWD/lib/x64/ -lSpire.Doc.Cpp

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include
