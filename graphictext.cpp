#include <QPainter>

#include "graphictext.h"

Graphic::Text::Text(const QString& text, const QRect& boundingBox)
  : IObject(boundingBox), text(text)
{

}

void Graphic::Text::Paint(QWidget* widget) const
{
  QPainter painter(widget);
  painter.setPen(Qt::black);
  painter.drawText(QPoint(20,30), text);
  /*painter.setPen(Qt::red);
  painter.drawText(QFontMetrics(painter.font()).size(Qt::TextSingleLine, text).width(), 20, "Two");*/
}
