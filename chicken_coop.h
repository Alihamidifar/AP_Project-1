#pragma once

#ifndef CHECKEN_COOP_H
#define CHECKEN_COOP_H

#include <QDialog>

namespace Ui {class checken_coop;}

class chicken_coop : public QDialog
{
    Q_OBJECT

public:
    explicit chicken_coop(QWidget *parent = nullptr , int = 0);
    ~chicken_coop();

private slots:

    void on_feed_clicked();

    void on_collect_eggs_clicked();

    void on_upgrade_clicked();

public:


    Ui::checken_coop *ui;
    int id ;

};

#endif // CHECKEN_COOP_H
