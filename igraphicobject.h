#ifndef IGRAPHICOBJECT_H
#define IGRAPHICOBJECT_H

#include <QWidget>

namespace Graphic
{
  class IObject
  {
  protected:
    QRect boundingBox;

  protected:
    IObject(const QRect& boundingBox = QRect());

  public:
    virtual ~IObject() = default;

    const QRect& GetBoundingBox() const;

    virtual void Paint(QWidget* widget) const = 0;
  };
}

#endif // IGRAPHICOBJECT_H
