#-------------------------------------------------
#
# Project created by QtCreator 2019-04-09T16:23:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = InterfazGrafica
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    main.cpp \
    opcionregistro.cpp \
    pantallaespera.cpp \
    registrojugador1.cpp \
    registrojugador2.cpp \
    mainwindow.cpp \
    tablerodejuego.cpp \
    socketclient.cpp \
    jsoncomm.cpp \
    principal.cpp \
    util.cpp \
    nodoespecial.cpp \
    node.cpp \
    list.cpp \
    helloworld.cpp \

HEADERS += \
    registrojugador1.h \
    opcionregistro.h \
    pantallaespera.h \
    registrojugador2.h \
    mainwindow.h \
    tablerodejuego.h \
    socketclient.h \
    principal.h \
    util.h \
    rapidjson/error/en.h \
    rapidjson/error/error.h \
    rapidjson/internal/biginteger.h \
    rapidjson/internal/diyfp.h \
    rapidjson/internal/dtoa.h \
    rapidjson/internal/ieee754.h \
    rapidjson/internal/itoa.h \
    rapidjson/internal/meta.h \
    rapidjson/internal/pow10.h \
    rapidjson/internal/regex.h \
    rapidjson/internal/stack.h \
    rapidjson/internal/strfunc.h \
    rapidjson/internal/strtod.h \
    rapidjson/internal/swap.h \
    rapidjson/msinttypes/inttypes.h \
    rapidjson/msinttypes/stdint.h \
    rapidjson/allocators.h \
    rapidjson/cursorstreamwrapper.h \
    rapidjson/document.h \
    rapidjson/encodedstream.h \
    rapidjson/encodings.h \
    rapidjson/filereadstream.h \
    rapidjson/filewritestream.h \
    rapidjson/fwd.h \
    rapidjson/istreamwrapper.h \
    rapidjson/memorybuffer.h \
    rapidjson/memorystream.h \
    rapidjson/ostreamwrapper.h \
    rapidjson/pointer.h \
    rapidjson/prettywriter.h \
    rapidjson/rapidjson.h \
    rapidjson/reader.h \
    rapidjson/schema.h \
    rapidjson/stream.h \
    rapidjson/stringbuffer.h \
    rapidjson/writer.h \
    nodoespecial.h \
    node.h \
    list.h \
    helloworld.h \
    jsonComm.h \



FORMS += \
    registrojugador1.ui \
    registrojugador2.ui \
    pantallaespera.ui \
    secdialog.ui \
    mainwindow.ui \
    tablerodejuego.ui \
    helloworld.ui

RESOURCES += \
    imagenes.qrc
