#include "igraphicobject.h"

const QRect& Graphic::IObject::GetBoundingBox() const
{
  return boundingBox;
}

Graphic::IObject::IObject(const QRect& boundingBox)
  : boundingBox(boundingBox)
{
}
