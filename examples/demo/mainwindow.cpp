#include "mainwindow.h"

MainWindow::MainWindow()
    : QWidget()
{

    // 每个对象可以指定自己的记录级别, 如果不设置就使用RootLogger的级别.
    logger()->setLevels(QtLog::All);
    // 添加一个文本记录器. 这样本对象的日志将会被单独记录.
    logger()->addAppender(new QTextFileAppender(QString("demo.txt"), this));
    // 这条信息将会被记录下来. 判定顺序是ObjectLogger->RootLogger->Appender.
    logger()->warn("This is a warnning message.");
}
