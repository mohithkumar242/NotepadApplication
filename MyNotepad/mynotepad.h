#ifndef MYNOTEPAD_H
#define MYNOTEPAD_H

#include <QMainWindow>

namespace Ui {
class MyNotepad;
}


class MyNotepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyNotepad(QWidget *parent = 0);
    ~MyNotepad();

private slots:
    void newDocument();

    void open();

    void save();

    void saveAs();

    void print();

    void exit();

    void copy();

    void cut();

    void paste();

    void undo();

    void redo();

    void selectFont();

    void setFontBold(bool bold);

    void setFontUnderline(bool underline);

    void setFontItalic(bool italic);

    void about();

private:
    Ui::MyNotepad *ui;
    QString currentFile;
};

#endif
