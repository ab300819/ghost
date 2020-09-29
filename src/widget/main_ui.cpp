#include "paint_widget.h"

#include <QApplication>

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	PaintWidget w(nullptr);
	w.resize(800, 600);
	w.show();
	return a.exec();
}
