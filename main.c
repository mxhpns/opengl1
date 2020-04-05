#include <GL/freeglut.h>

void display() {
    glClearColor(0.0f, 1.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(300, 200);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("My first window");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
