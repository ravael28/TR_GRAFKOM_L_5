#include <windows.h>
#include <gl/glut.h>

void er_init(void);
void er_tampil(void);
void keyboard(unsigned char, int, int);
void er_ukuran(int, int);
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);

float xrot = 0.0;
float yrot = 0.0;
float xdiff = 0.0;
float ydiff = 0.0;
bool mouseDown = false;
int is_depth;

int main(int sta, char **dion)
{
    glutInit(&sta, dion);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1200, 750);
    glutInitWindowPosition(100, 20);
    glutCreateWindow("KELOMPOK 5 - ESTADIO RIAZOR");
    er_init();
    glutDisplayFunc(er_tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(er_ukuran);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutIdleFunc(er_tampil);
    glutMainLoop();
    return 0;
}

void er_init(void)
{
    glClearColor(0.5, 0.5, 1.5, 1.5);
    glViewport(1000, 400, -1000, -400);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(7.0);
    glLineWidth(4.5);
}

void gawang()
{
    //gawang kiri depan
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-220, -14.5, -30);
    glVertex3f(-220, 34.5, -30);
    glVertex3f(-220, 34.5, 30);
    glVertex3f(-220, -14.5, 30);
    glEnd();

    //gawang kiri kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-220, -14.5, -30);
    glVertex3f(-260, -14.5, -30);
    glVertex3f(-240, 34.5, -30);
    glVertex3f(-220, 34.5, -30);
    glEnd();

    //gawang kiri kiri
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(-220, -14.5, 30);
    glVertex3f(-260, -14.5, 30);
    glVertex3f(-240, 34.5, 30);
    glVertex3f(-220, 34.5, 30);
    glEnd();

    //gawang kiri kanan
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(-220, -14.5, -30);
    glVertex3f(-260, -14.5, -30);
    glVertex3f(-240, 34.5, -30);
    glVertex3f(-220, 34.5, -30);
    glEnd();

    //gawang kiri atas
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-220, 34.5, -30);
    glVertex3f(-220, 34.5, 30);
    glVertex3f(-240, 34.5, 30);
    glVertex3f(-240, 34.5, -30);
    glEnd();

    //gawang kiri belakang
    glBegin(GL_LINE_LOOP);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(-240, 34.5, -30);
    glVertex3f(-240, 34.5, 30);
    glVertex3f(-260, -14.5, 30);
    glVertex3f(-260, -14.5, -30);
    glEnd();

    //jaring gawang atas
    glBegin(GL_LINE_STRIP);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-220, 34, -30);
    glVertex3f(-240, 34, -30);
    glVertex3f(-240, 34, -25);
    glVertex3f(-220, 34, -25);
    glVertex3f(-220, 34, -20);
    glVertex3f(-240, 34, -20);
    glVertex3f(-240, 34, -15);
    glVertex3f(-220, 34, -15);
    glVertex3f(-220, 34, -10);
    glVertex3f(-240, 34, -10);
    glVertex3f(-240, 34, -5);
    glVertex3f(-220, 34, -5);
    glVertex3f(-220, 34, 0);
    glVertex3f(-240, 34, 0);
    glVertex3f(-240, 34, 5);
    glVertex3f(-220, 34, 5);
    glVertex3f(-220, 34, 10);
    glVertex3f(-240, 34, 10);
    glVertex3f(-240, 34, 15);
    glVertex3f(-220, 34, 15);
    glVertex3f(-220, 34, 20);
    glVertex3f(-240, 34, 20);
    glVertex3f(-240, 34, 25);
    glVertex3f(-220, 34, 25);
    glVertex3f(-220, 34, 30);
    glVertex3f(-240, 34, 30);
    glVertex3f(-240, 34, -30);
    glVertex3f(-236, 34, -30);
    glVertex3f(-236, 34, 30);
    glVertex3f(-232, 34, 30);
    glVertex3f(-232, 34, -30);
    glVertex3f(-228, 34, -30);
    glVertex3f(-228, 34, 30);
    glVertex3f(-224, 34, 30);
    glVertex3f(-224, 34, -30);
    glVertex3f(-220, 34, -30);
    glVertex3f(-220, 34, 30);
    glEnd();

    //jaring gawang belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-240, 34, -30);
    glVertex3f(-260, -14, -30);
    glVertex3f(-260, -14, -25);
    glVertex3f(-240, 34, -25);
    glVertex3f(-240, 34, -20);
    glVertex3f(-260, -14, -20);
    glVertex3f(-260, -14, -15);
    glVertex3f(-240, 34, -15);
    glVertex3f(-240, 34, -10);
    glVertex3f(-260, -14, -10);
    glVertex3f(-260, -14, -5);
    glVertex3f(-240, 34, -5);
    glVertex3f(-240, 34, 0);
    glVertex3f(-260, -14, 0);
    glVertex3f(-260, -14, 5);
    glVertex3f(-240, 34, 5);
    glVertex3f(-240, 34, 10);
    glVertex3f(-260, -14, 10);
    glVertex3f(-260, -14, 15);
    glVertex3f(-240, 34, 15);
    glVertex3f(-240, 34, 20);
    glVertex3f(-260, -14, 20);
    glVertex3f(-260, -14, 25);
    glVertex3f(-240, 34, 25);
    glVertex3f(-240, 34, 30);
    glVertex3f(-260, -14, 30);
    glVertex3f(-260, -14, -30);
    glVertex3f(-258, -10, -30);
    glVertex3f(-258, -10, 30);
    glVertex3f(-257, -6, 30);
    glVertex3f(-257, -6, -30);
    glVertex3f(-255, -2, -30);
    glVertex3f(-255, -2, 30);
    glVertex3f(-254, 0, 30);
    glVertex3f(-254, 0, -30);
    glVertex3f(-252, 2, -30);
    glVertex3f(-252, 2, 30);
    glVertex3f(-251, 6, 30);
    glVertex3f(-251, 6, -30);
    glVertex3f(-249, 10, -30);
    glVertex3f(-249, 10, 30);
    glVertex3f(-248, 14, 30);
    glVertex3f(-248, 14, -30);
    glVertex3f(-246, 18, -30);
    glVertex3f(-246, 18, 30);
    glVertex3f(-245, 24, 30);
    glVertex3f(-245, 24, -30);
    glVertex3f(-243, 28, -30);
    glVertex3f(-243, 28, 30);
    glEnd();

    //kanan

    //gawang kanan depan
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(220, -14.5, -30);
    glVertex3f(220, 34.5, -30);
    glVertex3f(220, 34.5, 30);
    glVertex3f(220, -14.5, 30);
    glEnd();

    //gawang kanan kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(220, -14.5, -30);
    glVertex3f(260, -14.5, -30);
    glVertex3f(240, 34.5, -30);
    glVertex3f(220, 34.5, -30);
    glEnd();

    //gawang kanan kiri
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(220, -14.5, 30);
    glVertex3f(260, -14.5, 30);
    glVertex3f(240, 34.5, 30);
    glVertex3f(220, 34.5, 30);
    glEnd();

    //gawang kanan kanan
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(220, -14.5, -30);
    glVertex3f(260, -14.5, -30);
    glVertex3f(240, 34.5, -30);
    glVertex3f(220, 34.5, -30);
    glEnd();

    //gawang kanan atas
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(220, 34.5, -30);
    glVertex3f(220, 34.5, 30);
    glVertex3f(240, 34.5, 30);
    glVertex3f(240, 34.5, -30);
    glEnd();

    //gawang kanan belakang
    glBegin(GL_LINE_LOOP);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(240, 34.5, -30);
    glVertex3f(240, 34.5, 30);
    glVertex3f(260, -14.5, 30);
    glVertex3f(260, -14.5, -30);
    glEnd();

    //jaring gawang atas
    glBegin(GL_LINE_STRIP);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(220, 34, -30);
    glVertex3f(240, 34, -30);
    glVertex3f(240, 34, -25);
    glVertex3f(220, 34, -25);
    glVertex3f(220, 34, -20);
    glVertex3f(240, 34, -20);
    glVertex3f(240, 34, -15);
    glVertex3f(220, 34, -15);
    glVertex3f(220, 34, -10);
    glVertex3f(240, 34, -10);
    glVertex3f(240, 34, -5);
    glVertex3f(220, 34, -5);
    glVertex3f(220, 34, 0);
    glVertex3f(240, 34, 0);
    glVertex3f(240, 34, 5);
    glVertex3f(220, 34, 5);
    glVertex3f(220, 34, 10);
    glVertex3f(240, 34, 10);
    glVertex3f(240, 34, 15);
    glVertex3f(220, 34, 15);
    glVertex3f(220, 34, 20);
    glVertex3f(240, 34, 20);
    glVertex3f(240, 34, 25);
    glVertex3f(220, 34, 25);
    glVertex3f(220, 34, 30);
    glVertex3f(240, 34, 30);
    glVertex3f(240, 34, -30);
    glVertex3f(236, 34, -30);
    glVertex3f(236, 34, 30);
    glVertex3f(232, 34, 30);
    glVertex3f(232, 34, -30);
    glVertex3f(228, 34, -30);
    glVertex3f(228, 34, 30);
    glVertex3f(224, 34, 30);
    glVertex3f(224, 34, -30);
    glVertex3f(220, 34, -30);
    glVertex3f(220, 34, 30);
    glEnd();

    //jaring gawang belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(240, 34, -30);
    glVertex3f(260, -14, -30);
    glVertex3f(260, -14, -25);
    glVertex3f(240, 34, -25);
    glVertex3f(240, 34, -20);
    glVertex3f(260, -14, -20);
    glVertex3f(260, -14, -15);
    glVertex3f(240, 34, -15);
    glVertex3f(240, 34, -10);
    glVertex3f(260, -14, -10);
    glVertex3f(260, -14, -5);
    glVertex3f(240, 34, -5);
    glVertex3f(240, 34, 0);
    glVertex3f(260, -14, 0);
    glVertex3f(260, -14, 5);
    glVertex3f(240, 34, 5);
    glVertex3f(240, 34, 10);
    glVertex3f(260, -14, 10);
    glVertex3f(260, -14, 15);
    glVertex3f(240, 34, 15);
    glVertex3f(240, 34, 20);
    glVertex3f(260, -14, 20);
    glVertex3f(260, -14, 25);
    glVertex3f(240, 34, 25);
    glVertex3f(240, 34, 30);
    glVertex3f(260, -14, 30);
    glVertex3f(260, -14, -30);
    glVertex3f(258, -10, -30);
    glVertex3f(258, -10, 30);
    glVertex3f(257, -6, 30);
    glVertex3f(257, -6, -30);
    glVertex3f(255, -2, -30);
    glVertex3f(255, -2, 30);
    glVertex3f(254, 0, 30);
    glVertex3f(254, 0, -30);
    glVertex3f(252, 2, -30);
    glVertex3f(252, 2, 30);
    glVertex3f(251, 6, 30);
    glVertex3f(251, 6, -30);
    glVertex3f(249, 10, -30);
    glVertex3f(249, 10, 30);
    glVertex3f(248, 14, 30);
    glVertex3f(248, 14, -30);
    glVertex3f(246, 18, -30);
    glVertex3f(246, 18, 30);
    glVertex3f(245, 24, 30);
    glVertex3f(245, 24, -30);
    glVertex3f(243, 28, -30);
    glVertex3f(243, 28, 30);
    glEnd();
}

void er_tampil(void)
{
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
        glClear(GL_COLOR_BUFFER_BIT);

gawang();

    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 3.0);
        break;
    case 'd':
    case 'D':
        glTranslatef(3.0, 0.0, 0.0);
        break;
    case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -3.0);
        break;
    case 'a':
    case 'A':
        glTranslatef(-3.0, 0.0, 0.0);
        break;
    case '7':
        glTranslatef(0.0, 3.0, 0.0);
        break;
    case '9':
        glTranslatef(0.0, 3.0, 0.0);
        break;
    case '2':
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
    case '8':
        glRotatef(-2.0, 1.0, 0.0, 0.0);
        break;
    case '6':
        glRotatef(2.0, 0.0, 1.0, 0.0);
        break;
    case '4':
        glRotatef(-2.0, 0.0, 1.0, 0.0);
    case '1':
        glRotatef(2.0, 0.0, 0.0, 1.0);
        break;
    case '3':
        glRotatef(-2.0, 0.0, 0.0, 1.0);
        break;
    case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    er_tampil();
}

void idle()
{
    if(!mouseDown)
    {
        xrot += 0.3;
        yrot += 0.4;
    }
glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
    mouseDown = false;
}

void mouseMotion(int x, int y)
{
    glLoadIdentity();
    gluLookAt(0.0, 0.0, 3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glRotatef(xrot, 1.0, 0.0, 0.0);
    glRotatef(yrot, 0.0, 1.0, 0.0);
    if (mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void er_ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(100.0, lebar / tinggi, 5.0, 5000.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
