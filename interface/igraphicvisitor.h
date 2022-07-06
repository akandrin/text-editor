#ifndef IVISITOR_H
#define IVISITOR_H

namespace Graphic
{
  class Text;

  class IVisitor
  {
  public:
    virtual ~IVisitor() = default;
    virtual void visit(Text* object) = 0;
  };
}

#endif // IVISITOR_H
