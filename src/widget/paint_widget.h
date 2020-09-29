//
// Created by 孟伸 on 2020/9/29.
//

#pragma once
#include <QOpenGLBuffer>
#include <QOpenGLContext>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLWidget>

class PaintWidget : public QOpenGLWidget {
	Q_OBJECT
public:
	PaintWidget(QWidget *parent);
	~PaintWidget();

protected:
	void initializeGL();
	void paintGL();
	void resizeGL(int w, int h);

private:
	QOpenGLBuffer *m_vbo;
	QOpenGLVertexArrayObject *m_vao;
	QOpenGLShaderProgram *m_shader;
};