QT       += core gui sql #add sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    course_1.cpp \
    course_2.cpp \
    main.cpp \
    pro2.cpp \
    stu_1.cpp \
    stu_2.cpp

HEADERS += \
    course_1.h \
    course_2.h \
    pro2.h \
    stu_1.h \
    stu_2.h

FORMS += \
    course_1.ui \
    course_2.ui \
    pro2.ui \
    stu_1.ui \
    stu_2.ui \
    stu_2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
