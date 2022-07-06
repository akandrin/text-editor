#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class TextEditorWidget;

class MainWindow : public QMainWindow
{
  Q_OBJECT

private:
  TextEditorWidget* editorWidget;
public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow() override;
};

#endif // MAINWINDOW_H
