#include <QHBoxLayout>

#include "texteditorwidget.h"
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent), editorWidget(new TextEditorWidget(this))
{
  editorWidget->show();
}

MainWindow::~MainWindow()
{
}

