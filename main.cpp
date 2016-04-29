#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(60);
    glBegin(GL_POINTS);
    glVertex3f(0.5f,0.5f,0.0f);
    glVertex3f(-0.5f,-0.5f,0.0f);
    glVertex3f(0.7f,0.7f,0.0f);
    glVertex3f(-0.7f,-0.7f,0.0f);
    glEnd();
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
 
	
} void init (void) {
gluLookAt(2.0, 5.0, -4.0, 2.0, 5.0, -4.0, 0.0, 5.0, -5.0); // a 45 grados
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (250, 250);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
