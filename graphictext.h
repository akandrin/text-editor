#ifndef GRAPHICTEXT_H
#define GRAPHICTEXT_H

#include "igraphicobject.h"

namespace Graphic
{
  class Text : public IObject
  {
    QString text;
  public:
    Text(const QString& text, const QRect& boundingBox);
    void Paint(QWidget* widget) const override;
  };
}

#endif // GRAPHICTEXT_H
