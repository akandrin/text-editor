
namespace Graphic
{
  class IVisitor;

  class IVisitable
  {
  public:
    virtual ~IVisitable() = default;
    virtual void accept(Graphic::IVisitor* visitor) = 0;
  };
}
