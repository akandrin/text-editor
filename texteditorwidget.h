#ifndef TEXTEDITORWIDGET_H
#define TEXTEDITORWIDGET_H

#include <QWidget>

#include "texteditor.h"

namespace Graphic
{
  class IObject;
}

class TextEditorWidget : public QWidget
{
  Q_OBJECT
private:
  TextEditor editor;
public:
  explicit TextEditorWidget(QWidget *parent = nullptr);

  void paintEvent(QPaintEvent* event) override;

signals:

public slots:
};

#endif // TEXTEDITORWIDGET_H
