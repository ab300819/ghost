#include "paint_widget.h"

#include <QApplication>

int main(int argc, char *argv[]) {
	
	QSurfaceFormat glFormat;
	glFormat.setVersion(3,3);
	glFormat.setProfile(QSurfaceFormat::CoreProfile);
	QSurfaceFormat::setDefaultFormat(glFormat);

	QApplication a(argc, argv);
	PaintWidget w(nullptr);
	w.resize(800, 600);
	w.show();
	return QApplication::exec();
}
