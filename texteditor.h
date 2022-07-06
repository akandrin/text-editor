#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

class QString;
class QWidget;

namespace Graphic
{
  class IObject;
}

class TextEditor
{
  Graphic::IObject* graphicRootObject = nullptr;

public:
  TextEditor();
  ~TextEditor();
  void AddText(const QString& text);
  void Paint(QWidget* widget);
};

#endif // TEXTEDITOR_H
