#include "texteditor.h"
#include "graphictext.h"

TextEditor::TextEditor()
{
}

TextEditor::~TextEditor()
{
  delete graphicRootObject;
}

void TextEditor::AddText(const QString& text)
{
  graphicRootObject = new Graphic::Text(text, QRect(0, 0, -1, -1));
}

void TextEditor::Paint(QWidget* widget)
{
  graphicRootObject->Paint(widget);
}
