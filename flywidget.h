#ifndef FLYWIDGET_H
#define FLYWIDGET_H

#include <QWidget>
#include<QPixmap>
#include<QMouseEvent>
#include<QPainter>
#include"fsettingmenu.h"

class FlyWidget : public QWidget
{
    Q_OBJECT
private:
    QWidget* p;

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent * event);
    void paintEvent(QPaintEvent *event);
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);

private:
    QPoint m_CurrentPos;
    QPixmap m_Pixmap;
public:
    FSettingMenu* menu;
public:
    explicit FlyWidget(QWidget *parent = 0);
    void initData();
    void initUI();
    void initConnect();
signals:

public slots:

};

#endif // FLYWIDGET_H
