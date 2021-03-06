﻿/*
 * Copyright 2018-2020 Qter(qsak@foxmail.com). All rights reserved.
 *
 * The file is encoding with utf-8 (with BOM). It is a part of QtSwissArmyKnife
 * project(https://www.qsak.pro). The project is an open source project. You can
 * get the source of the project from: "https://github.com/qsak/QtSwissArmyKnife"
 * or "https://gitee.com/qsak/QtSwissArmyKnife". Also, you can join in the QQ
 * group which number is 952218522 to have a communication.
 */
#ifndef SAKUsbDEVICE_HH
#define SAKUsbDEVICE_HH

#include <QTimer>
#include <QThread>

#include "SAKDevice.hh"

extern "C" {
#include "hidapi.h"
}

class SAKUsbDebugPage;
class SAKUsbDevice:public SAKDevice
{
    Q_OBJECT
public:
    SAKUsbDevice(SAKUsbDebugPage *debugPage, QObject *parent = Q_NULLPTR);
    ~SAKUsbDevice();
private:
    void run();    
private:    
    SAKUsbDebugPage *debugPage;
    QString path;
    hid_device *hidDevice;
};

#endif
