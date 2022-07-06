#include "texteditorwidget.h"

TextEditorWidget::TextEditorWidget(QWidget *parent) : QWidget(parent)
{
  editor.AddText("test");
}

void TextEditorWidget::paintEvent(QPaintEvent* event)
{
  QWidget::paintEvent(event);
  editor.Paint(this);
}
