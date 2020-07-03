#include "windows.h"
#include "gl/freeglut.h"
#include "iostream"
bool isDepth = true;

using namespace std;

float step = 3.0;
float doubleAngle = 2.0;
float rotationStep = 1.0;

void ukuran(int lebar, int tinggi) {
	if (tinggi == 0) {
		tinggi = 1;
	}
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
	glTranslatef(0.0, -5.0, -150.0);
	glMatrixMode(GL_MODELVIEW);
}
void init() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST);
	isDepth = true;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(9.0);
	glLineWidth(9.0f);
}

void tembok() {
	glColor3f(0.4, 0.4, 1.0);
	glBegin(GL_POLYGON);
	glVertex3d(1.0, 2.0, 0.0);
	glVertex3d(-1.0, 2.0, 0.0);
	glVertex3d(-1.0, 2.0, 4.0);
	glVertex3d(1.0, 2.0, 4.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(1.0, 0.0, 4.0);
	glVertex3d(1.0, 2.0, 4.0);
	glVertex3d(-1.0, 2.0, 4.0);
	glVertex3d(-1.0, 0.0, 4.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-1.0, 0.0, 4.0);
	glVertex3d(-1.0, 2.0, 4.0);
	glVertex3d(-1.0, 2.0, 0.0);
	glVertex3d(-1.0, 0.0, 0.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-1.0, 0.0, 0.0);
	glVertex3d(1.0, 0.0, 0.0);
	glVertex3d(1.0, 0.0, 4.0);
	glVertex3d(-1.0, 0.0, 4.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(1.0, 0.0, 0.0);
	glVertex3d(1.0, 2.0, 0.0);
	glVertex3d(1.0, 2.0, 4.0);
	glVertex3d(1.0, 0.0, 4.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-1.0, 0.0, 0.0);
	glVertex3d(-1.0, 2.0, 0.0);
	glVertex3d(1.0, 2.0, 0.0);
	glVertex3d(1.0, 0.0, 0.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-6.0, 2.0, 4.0);
	glVertex3d(-6.0, 2.0, 8.0);
	glVertex3d(6.0, 2.0, 8.0);
	glVertex3d(6.0, 2.0, 4.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.0, 0.0, 4.0);
	glVertex3d(6.0, 2.0, 4.0);
	glVertex3d(6.0, 2.0, 8.0);
	glVertex3d(6.0, 0.0, 8.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.0, 0.0, 8.0);
	glVertex3d(6.0, 2.0, 8.0);
	glVertex3d(-6.0, 2.0, 8.0);
	glVertex3d(-6.0, 0.0, 8.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-6.0, 0.0, 8.0);
	glVertex3d(-6.0, 0.0, 4.0);
	glVertex3d(6.0, 0.0, 4.0);
	glVertex3d(6.0, 0.0, 8.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-6.0, 0.0, 4.0);
	glVertex3d(-6.0, 2.0, 4.0);
	glVertex3d(6.0, 2.0, 4.0);
	glVertex3d(6.0, 0.0, 4.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-6.0, 0.0, 8.0);
	glVertex3d(-6.0, 2.0, 8.0);
	glVertex3d(-6.0, 2.0, 4.0);
	glVertex3d(-6.0, 0.0, 4.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(9.0, 2.0, 4.0);
	glVertex3d(6.0, 2.0, 4.0);
	glVertex3d(6.0, 2.0, 8.0);
	glVertex3d(9.0, 2.0, 8.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(9.0, 0.0, 8.0);
	glVertex3d(9.0, 2.0, 8.0);
	glVertex3d(6.0, 2.0, 8.0);
	glVertex3d(6.0, 0.0, 8.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.0, 0.0, 8.0);
	glVertex3d(6.0, 2.0, 8.0);
	glVertex3d(6.0, 2.0, 4.0);
	glVertex3d(6.0, 0.0, 4.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.0, 0.0, 4.0);
	glVertex3d(9.0, 0.0, 4.0);
	glVertex3d(9.0, 0.0, 8.0);
	glVertex3d(6.0, 0.0, 8.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(9.0, 0.0, 4.0);
	glVertex3d(9.0, 2.0, 4.0);
	glVertex3d(9.0, 2.0, 8.0);
	glVertex3d(9.0, 0.0, 8.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.0, 0.0, 4.0);
	glVertex3d(6.0, 2.0, 4.0);
	glVertex3d(9.0, 2.0, 4.0);
	glVertex3d(9.0, 0.0, 4.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.2, 2.0, 0.0);
	glVertex3d(5.8, 2.0, 0.0);
	glVertex3d(5.8, 2.0, 4.0);
	glVertex3d(6.2, 2.0, 4.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.2, 0.0, 4.0);
	glVertex3d(6.2, 2.0, 4.0);
	glVertex3d(5.8, 2.0, 4.0);
	glVertex3d(5.8, 0.0, 4.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(5.8, 0.0, 4.0);
	glVertex3d(5.8, 2.0, 4.0);
	glVertex3d(5.8, 2.0, 0.0);
	glVertex3d(5.8, 0.0, 0.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(5.8, 0.0, 0.0);
	glVertex3d(6.2, 0.0, 0.0);
	glVertex3d(6.2, 0.0, 4.0);
	glVertex3d(5.8, 0.0, 4.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.2, 0.0, 0.0);
	glVertex3d(6.2, 2.0, 0.0);
	glVertex3d(6.2, 2.0, 4.0);
	glVertex3d(6.2, 0.0, 4.0);
	glEnd();
	glColor3f(0.3, 4.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3d(5.8, 0.0, 0.0);
	glVertex3d(5.8, 2.0, 0.0);
	glVertex3d(6.2, 2.0, 0.0);
	glVertex3d(6.2, 0.0, 0.0);
	glEnd();


}


void atap() {
	glColor3f(0.8, 0.2, 0.2);
	glBegin(GL_POLYGON);
	glVertex3d(-1.161006, 2.011647, -0.345992);
	glVertex3d(-0.00847, 3.36261, -0.345992);
	glVertex3d(-0.00847, 3.36261, 5.497739);
	glVertex3d(-1.161006, 2.011647, 5.497739);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(1.16844, 2.036111, -0.35);
	glVertex3d(-0.00208, 3.371522, -0.35);
	glVertex3d(-0.00208, 3.371522, 5.493731);
	glVertex3d(1.16844, 2.036111, 5.493731);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-6.723242, 2.081351, 8.305853);
	glVertex3d(-6.723242, 4.783277, 6.000781);
	glVertex3d(6.079469, 4.783277, 6.000781);
	glVertex3d(6.079469, 2.081351, 8.305852);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-6.73202, 2.072441, 3.696347);
	glVertex3d(-6.73202, 4.742576, 6.036784);
	glVertex3d(6.067396, 4.742576, 6.036783);
	glVertex3d(6.067396, 2.072441, 3.696346);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.1, 1.959999, 8.508255);
	glVertex3d(6.1, 3.20066, 6.040781);
	glVertex3d(9.021866, 3.20066, 6.040781);
	glVertex3d(9.021866, 1.959999, 8.508255);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.088247, 2.083139, 3.713504);
	glVertex3d(6.088247, 3.20338, 6.034396);
	glVertex3d(8.998294, 3.20338, 6.034396);
	glVertex3d(8.998294, 2.083139, 3.713504);
	glEnd();
	glColor3f(0.5, 0.2, 0.2);
	
	glBegin(GL_POLYGON);
	glVertex3d(-1.0, 2.2, -0.0);
	glVertex3d(1.0, 2.2, -0.0);
	glVertex3d(0.0, 3.366667, 0.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(1.0, 2.2, -0.0);
	glVertex3d(-1.0, 2.2, -0.0);
	glVertex3d(-1.0, 2.0, -0.0);
	glVertex3d(1.0, 2.0, -0.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-5.965422, 2.400515, 8.029486);
	glVertex3d(-5.965422, 2.400515, 4.030515);
	glVertex3d(-5.965422, 4.733248, 6.03);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-5.965422, 2.400515, 4.030515);
	glVertex3d(-5.965422, 2.400515, 8.029486);
	glVertex3d(-5.965422, 2.000618, 8.029486);
	glVertex3d(-5.965422, 2.000618, 4.030515);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.0, 2.400515, 8.029486);
	glVertex3d(6.0, 2.400515, 4.030515);
	glVertex3d(6.0, 4.733248, 6.03);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(6.0, 2.400515, 4.030515);
	glVertex3d(6.0, 2.400515, 8.029486);
	glVertex3d(6.0, 2.000618, 8.029486);
	glVertex3d(6.0, 2.000618, 4.030515);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(8.982972, 2.20647, 8.029486);
	glVertex3d(8.982972, 2.20647, 4.030515);
	glVertex3d(8.982972, 3.199378, 6.03);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(8.982972, 2.20647, 4.030515);
	glVertex3d(8.982972, 2.20647, 8.029486);
	glVertex3d(8.982972, 2.036257, 8.029486);
	glVertex3d(8.982972, 2.036257, 4.030515);
	glEnd();




}

void seng() {
	glColor3f(0.7, 0.7, 1.0);
	glBegin(GL_POLYGON);
	glVertex3d(0.714286, 1.793651, -0.013968);
	glVertex3d(1.0, 1.865972, -0.013968);
	glVertex3d(1.0, 2.134028, -1.286032);
	glVertex3d(0.714286, 2.061708, -1.286032);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-1.0, 1.793651, -0.013968);
	glVertex3d(-0.714286, 1.865972, -0.013968);
	glVertex3d(-0.714286, 2.134028, -1.286032);
	glVertex3d(-1.0, 2.061708, -1.286032);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-0.714286, 1.865972, -0.013968);
	glVertex3d(-0.428571, 1.793651, -0.013968);
	glVertex3d(-0.428571, 2.061708, -1.286032);
	glVertex3d(-0.714286, 2.134028, -1.286032);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-0.428571, 1.793651, -0.013968);
	glVertex3d(-0.142857, 1.865972, -0.013968);
	glVertex3d(-0.142857, 2.134028, -1.286032);
	glVertex3d(-0.428571, 2.061708, -1.286032);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-0.142857, 1.865972, -0.013968);
	glVertex3d(0.142857, 1.793651, -0.013968);
	glVertex3d(0.142857, 2.061708, -1.286032);
	glVertex3d(-0.142857, 2.134028, -1.286032);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(0.142857, 1.793651, -0.013968);
	glVertex3d(0.428571, 1.865972, -0.013968);
	glVertex3d(0.428571, 2.134028, -1.286032);
	glVertex3d(0.142857, 2.061708, -1.286032);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(0.428571, 1.865972, -0.013968);
	glVertex3d(0.714286, 1.793651, -0.013968);
	glVertex3d(0.714286, 2.061708, -1.286032);
	glVertex3d(0.428571, 2.134028, -1.286032);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(5.471428, 2.111175, 3.99475);
	glVertex3d(5.8, 2.24482, 3.99475);
	glVertex3d(5.8, 1.95518, 0.00525);
	glVertex3d(5.471428, 1.821535, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(1.2, 2.24482, 3.99475);
	glVertex3d(1.528571, 2.111175, 3.99475);
	glVertex3d(1.528571, 1.821535, 0.00525);
	glVertex3d(1.2, 1.95518, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(1.528571, 2.111175, 3.99475);
	glVertex3d(1.857143, 2.24482, 3.99475);
	glVertex3d(1.857143, 1.95518, 0.00525);
	glVertex3d(1.528571, 1.821535, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(1.857143, 2.24482, 3.99475);
	glVertex3d(2.185714, 2.111175, 3.99475);
	glVertex3d(2.185714, 1.821535, 0.00525);
	glVertex3d(1.857143, 1.95518, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(2.185714, 2.111175, 3.99475);
	glVertex3d(2.514286, 2.24482, 3.99475);
	glVertex3d(2.514286, 1.95518, 0.00525);
	glVertex3d(2.185714, 1.821535, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(2.514286, 2.24482, 3.99475);
	glVertex3d(2.842857, 2.111175, 3.99475);
	glVertex3d(2.842857, 1.821535, 0.00525);
	glVertex3d(2.514286, 1.95518, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(2.842857, 2.111175, 3.99475);
	glVertex3d(3.171428, 2.24482, 3.99475);
	glVertex3d(3.171429, 1.95518, 0.00525);
	glVertex3d(2.842857, 1.821535, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(3.171428, 2.24482, 3.99475);
	glVertex3d(3.5, 2.111175, 3.99475);
	glVertex3d(3.5, 1.821535, 0.00525);
	glVertex3d(3.171429, 1.95518, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(3.5, 2.111175, 3.99475);
	glVertex3d(3.828571, 2.24482, 3.99475);
	glVertex3d(3.828572, 1.95518, 0.00525);
	glVertex3d(3.5, 1.821535, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(3.828571, 2.24482, 3.99475);
	glVertex3d(4.157143, 2.111175, 3.99475);
	glVertex3d(4.157143, 1.821535, 0.00525);
	glVertex3d(3.828572, 1.95518, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(4.157143, 2.111175, 3.99475);
	glVertex3d(4.485714, 2.24482, 3.99475);
	glVertex3d(4.485714, 1.95518, 0.00525);
	glVertex3d(4.157143, 1.821535, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(4.485714, 2.24482, 3.99475);
	glVertex3d(4.814286, 2.111175, 3.99475);
	glVertex3d(4.814286, 1.821535, 0.00525);
	glVertex3d(4.485714, 1.95518, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(4.814286, 2.111175, 3.99475);
	glVertex3d(5.142857, 2.24482, 3.99475);
	glVertex3d(5.142857, 1.95518, 0.00525);
	glVertex3d(4.814286, 1.821535, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(5.142857, 2.24482, 3.99475);
	glVertex3d(5.471428, 2.111175, 3.99475);
	glVertex3d(5.471428, 1.821535, 0.00525);
	glVertex3d(5.142857, 1.95518, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-1.528571, 2.111175, 3.99475);
	glVertex3d(-1.2, 2.24482, 3.99475);
	glVertex3d(-1.2, 1.95518, 0.00525);
	glVertex3d(-1.528571, 1.821535, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-5.8, 2.24482, 3.99475);
	glVertex3d(-5.471428, 2.111175, 3.99475);
	glVertex3d(-5.471428, 1.821535, 0.00525);
	glVertex3d(-5.8, 1.95518, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-5.471428, 2.111175, 3.99475);
	glVertex3d(-5.142857, 2.24482, 3.99475);
	glVertex3d(-5.142857, 1.95518, 0.00525);
	glVertex3d(-5.471428, 1.821535, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-5.142857, 2.24482, 3.99475);
	glVertex3d(-4.814286, 2.111175, 3.99475);
	glVertex3d(-4.814286, 1.821535, 0.00525);
	glVertex3d(-5.142857, 1.95518, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-4.814286, 2.111175, 3.99475);
	glVertex3d(-4.485714, 2.24482, 3.99475);
	glVertex3d(-4.485714, 1.95518, 0.00525);
	glVertex3d(-4.814286, 1.821535, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-4.485714, 2.24482, 3.99475);
	glVertex3d(-4.157143, 2.111175, 3.99475);
	glVertex3d(-4.157143, 1.821535, 0.00525);
	glVertex3d(-4.485714, 1.95518, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-4.157143, 2.111175, 3.99475);
	glVertex3d(-3.828572, 2.24482, 3.99475);
	glVertex3d(-3.828571, 1.95518, 0.00525);
	glVertex3d(-4.157143, 1.821535, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-3.828572, 2.24482, 3.99475);
	glVertex3d(-3.5, 2.111175, 3.99475);
	glVertex3d(-3.5, 1.821535, 0.00525);
	glVertex3d(-3.828571, 1.95518, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-3.5, 2.111175, 3.99475);
	glVertex3d(-3.171429, 2.24482, 3.99475);
	glVertex3d(-3.171428, 1.95518, 0.00525);
	glVertex3d(-3.5, 1.821535, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-3.171429, 2.24482, 3.99475);
	glVertex3d(-2.842857, 2.111175, 3.99475);
	glVertex3d(-2.842857, 1.821535, 0.00525);
	glVertex3d(-3.171428, 1.95518, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-2.842857, 2.111175, 3.99475);
	glVertex3d(-2.514286, 2.24482, 3.99475);
	glVertex3d(-2.514286, 1.95518, 0.00525);
	glVertex3d(-2.842857, 1.821535, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-2.514286, 2.24482, 3.99475);
	glVertex3d(-2.185714, 2.111175, 3.99475);
	glVertex3d(-2.185714, 1.821535, 0.00525);
	glVertex3d(-2.514286, 1.95518, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-2.185714, 2.111175, 3.99475);
	glVertex3d(-1.857143, 2.24482, 3.99475);
	glVertex3d(-1.857143, 1.95518, 0.00525);
	glVertex3d(-2.185714, 1.821535, 0.00525);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-1.857143, 2.24482, 3.99475);
	glVertex3d(-1.528571, 2.111175, 3.99475);
	glVertex3d(-1.528571, 1.821535, 0.00525);
	glVertex3d(-1.857143, 1.95518, 0.00525);
	glEnd();


}

void detail() {
	glColor3f(0.2, 0.2, 4.0);
	glBegin(GL_POLYGON);
	glVertex3d(-0.4, 0.0, -0.04);
	glVertex3d(0.4, 0.0, -0.04);
	glVertex3d(0.4, 1.5, -0.04);
	glVertex3d(-0.4, 1.5, -0.04);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-0.83, 0.5, -0.04);
	glVertex3d(-0.53, 0.5, -0.04);
	glVertex3d(-0.53, 1.5, -0.04);
	glVertex3d(-0.83, 1.5, -0.04);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(0.546989, 0.5, -0.04);
	glVertex3d(0.846989, 0.5, -0.04);
	glVertex3d(0.846989, 1.5, -0.04);
	glVertex3d(0.546989, 1.5, -0.04);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(0.0, 2.35, -0.04);
	glVertex3d(0.196858, 2.35, -0.04);
	glVertex3d(0.3, 2.696381, -0.04);
	glVertex3d(0.0, 2.85, -0.04);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-0.196858, 2.35, -0.04);
	glVertex3d(0.0, 2.35, -0.04);
	glVertex3d(0.0, 2.85, -0.04);
	glVertex3d(-0.3, 2.696381, -0.04);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(4.35, 0.5, 3.9);
	glVertex3d(4.65, 0.5, 3.9);
	glVertex3d(4.65, 1.5, 3.9);
	glVertex3d(4.35, 1.5, 3.9);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(3.85, 0.5, 3.9);
	glVertex3d(4.15, 0.5, 3.9);
	glVertex3d(4.15, 1.5, 3.9);
	glVertex3d(3.85, 1.5, 3.9);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(3.35, 0.5, 3.9);
	glVertex3d(3.65, 0.5, 3.9);
	glVertex3d(3.65, 1.5, 3.9);
	glVertex3d(3.35, 1.5, 3.9);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(2.85, 0.5, 3.9);
	glVertex3d(3.15, 0.5, 3.9);
	glVertex3d(3.15, 1.5, 3.9);
	glVertex3d(2.85, 1.5, 3.9);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-3.031785, 0.5, 3.9);
	glVertex3d(-2.731785, 0.5, 3.9);
	glVertex3d(-2.731785, 1.5, 3.9);
	glVertex3d(-3.031785, 1.5, 3.9);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-3.531785, 0.5, 3.9);
	glVertex3d(-3.231785, 0.5, 3.9);
	glVertex3d(-3.231785, 1.5, 3.9);
	glVertex3d(-3.531785, 1.5, 3.9);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-4.031785, 0.5, 3.9);
	glVertex3d(-3.731785, 0.5, 3.9);
	glVertex3d(-3.731785, 1.5, 3.9);
	glVertex3d(-4.031785, 1.5, 3.9);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(-4.531785, 0.5, 3.9);
	glVertex3d(-4.231785, 0.5, 3.9);
	glVertex3d(-4.231785, 1.5, 3.9);
	glVertex3d(-4.531785, 1.5, 3.9);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3d(7.084819, 0.0, 3.975);
	glVertex3d(7.88482, 0.0, 3.975);
	glVertex3d(7.88482, 1.5, 3.975);
	glVertex3d(7.084819, 1.5, 3.975);
	glEnd();


}

void tampil() {
	if (isDepth) {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	}
	else {
		glClear(GL_COLOR_BUFFER_BIT);
	}
	glColor3f(0.4, 0.4, 1.0);

	tembok();
	atap();
	seng();
	detail();

	glPushMatrix();
	glPopMatrix();
	glutSwapBuffers();
}


void onKeyPressed(unsigned char key, int x, int y) {
	cout << key << endl;
	switch (key) {
	case 'w':
	case 'W':
		glTranslatef(0.0, 0.0, step);
		break;
	case 'd':
	case 'D':
		glTranslatef(step, 0.0, 0.0);
		break;
	case 's':
	case 'S':
		glTranslatef(0.0, 0.0, -step);
		break;
	case 'a':
	case 'A':
		glTranslatef(-step, 0.0, 0.0);
		break;
	case 'i':
	case 'I':
		glTranslatef(0.0, 0.0, step);
		break;
	case 'k':
	case 'K':
		glTranslatef(0.0, 0.0, -step);
		break;

	case ' ':
		if (isDepth) {
			glDisable(GL_DEPTH_TEST);
		}
		else {
			glEnable(GL_DEPTH_TEST);
		}
		isDepth = !isDepth;
		break;
	}
	tampil();
}

void onSpecialKeyPressed(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_UP:
		glRotatef(doubleAngle, rotationStep ,0.0, 0.0);
		break;
	case GLUT_KEY_DOWN:
		glRotatef(doubleAngle, -rotationStep, 0.0, 0.0);
		break;
	case GLUT_KEY_LEFT:
		glRotatef(doubleAngle, 0.0, rotationStep, 0.0);
		break;
	case GLUT_KEY_RIGHT:
		glRotatef(doubleAngle, 0.0, -rotationStep, 0.0);
		break;
	}
	tampil();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("Gilang Windu Asmara-672018200");
	init();
	glutDisplayFunc(tampil);
	glutKeyboardFunc(onKeyPressed);
	glutSpecialFunc(onSpecialKeyPressed);
	glutReshapeFunc(ukuran);
	glutMainLoop();
	return 0;
}