QT += core gui svg widgets

TARGET = TypesetWidget
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS
CONFIG += c++11
INCLUDEPATH += ../TypesetWidget

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

SOURCES += \
    ../TypesetWidget/accent.cpp \
    ../TypesetWidget/algorithm.cpp \
    ../TypesetWidget/bigqchar.cpp \
    ../TypesetWidget/binomial.cpp \
    ../TypesetWidget/cases.cpp \
    ../TypesetWidget/commanddeletechar.cpp \
    ../TypesetWidget/commanddeletemultiline.cpp \
    ../TypesetWidget/commanddeletephrase.cpp \
    ../TypesetWidget/commanddeletetext.cpp \
    ../TypesetWidget/commandevalmultiline.cpp \
    ../TypesetWidget/commandevalphrase.cpp \
    ../TypesetWidget/commandinsertchar.cpp \
    ../TypesetWidget/commandinsertmultiline.cpp \
    ../TypesetWidget/commandinserttext.cpp \
    ../TypesetWidget/commandlist.cpp \
    ../TypesetWidget/construct.cpp \
    ../TypesetWidget/cursor.cpp \
    ../TypesetWidget/cursor_adhoc_sub.cpp \
    ../TypesetWidget/cursorview.cpp \
    ../TypesetWidget/document.cpp \
    ../TypesetWidget/edit.cpp \
    ../TypesetWidget/fraction.cpp \
    ../TypesetWidget/globals.cpp \
    ../TypesetWidget/grouping.cpp \
    ../TypesetWidget/integral.cpp \
    ../TypesetWidget/line.cpp \
    ../TypesetWidget/matrix.cpp \
    ../TypesetWidget/parser.cpp \
    ../TypesetWidget/phrase.cpp \
    ../TypesetWidget/root.cpp \
    ../TypesetWidget/script.cpp \
    ../TypesetWidget/subphrase.cpp \
    ../TypesetWidget/text.cpp \
    ../TypesetWidget/underscriptedword.cpp

HEADERS += \
    ../TypesetWidget/accent.h \
    ../TypesetWidget/algorithm.h \
    ../TypesetWidget/bigqchar.h \
    ../TypesetWidget/binomial.h \
    ../TypesetWidget/cases.h \
    ../TypesetWidget/commanddeletechar.h \
    ../TypesetWidget/commanddeletemultiline.h \
    ../TypesetWidget/commanddeletephrase.h \
    ../TypesetWidget/commanddeletetext.h \
    ../TypesetWidget/commandevalmultiline.h \
    ../TypesetWidget/commandevalphrase.h \
    ../TypesetWidget/commandinsertchar.h \
    ../TypesetWidget/commandinsertmultiline.h \
    ../TypesetWidget/commandinserttext.h \
    ../TypesetWidget/commandlist.h \
    ../TypesetWidget/construct.h \
    ../TypesetWidget/cursor.h \
    ../TypesetWidget/cursorview.h \
    ../TypesetWidget/document.h \
    ../TypesetWidget/edit.h \
    ../TypesetWidget/fraction.h \
    ../TypesetWidget/globals.h \
    ../TypesetWidget/grouping.h \
    ../TypesetWidget/integral.h \
    ../TypesetWidget/line.h \
    ../TypesetWidget/matrix.h \
    ../TypesetWidget/parser.h \
    ../TypesetWidget/phrase.h \
    ../TypesetWidget/root.h \
    ../TypesetWidget/script.h \
    ../TypesetWidget/subphrase.h \
    ../TypesetWidget/substitutions.h \
    ../TypesetWidget/text.h \
    ../TypesetWidget/underscriptedword.h

FORMS += mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += example_resource.qrc \
             ../TypesetWidget/qtypesetobjectresource.qrc
RC_ICONS += lambda.ico
