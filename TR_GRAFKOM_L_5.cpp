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
void gedung()
{
    //dinding kanan1(vertikal1)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(600, 300, 350);
    glVertex3f(600, -15, 350);
    glVertex3f(600, -15, -350);
    glVertex3f(600, 300, -350);
    glEnd();

    //dinding kanan2(vertikal2)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(615, 300, 350);
    glVertex3f(615, -15, 350);
    glVertex3f(615, -15, -350);
    glVertex3f(615, 300, -350);
    glEnd();

    //dinding kanan (bawah)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(600, -15, 350);
    glVertex3f(615, -15, 350);
    glVertex3f(615, -15, -350);
    glVertex3f(600, -15, -350);
    glEnd();

    //dinding kanan1 (miring)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.7);
    glVertex3f(600, 300, 350);
    glVertex3f(650, 350, 350);
    glVertex3f(650, 350, -350);
    glVertex3f(600, 300, -350);
    glEnd();

    //dinding kanan2 (miring)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.7);
    glVertex3f(615, 300, 350);
    glVertex3f(665, 350, 350);
    glVertex3f(665, 350, -350);
    glVertex3f(615, 300, -350);
    glEnd();

    //dinding kanan1 (vertikal 3)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(650, 350, 350);
    glVertex3f(650, 400, 350);
    glVertex3f(650, 400, -350);
    glVertex3f(650, 350, -350);
    glEnd();

    //dinding kanan2 (vertikal 4)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(665, 350, 350);
    glVertex3f(665, 400, 350);
    glVertex3f(665, 400, -350);
    glVertex3f(665, 350, -350);
    glEnd();
/////////////////////////////////////////////////
    //dinding kiri1(vertikal1)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(-600, 300, 350);
    glVertex3f(-600, -15, 350);
    glVertex3f(-600, -15, -350);
    glVertex3f(-600, 300, -350);
    glEnd();

    //dinding kiri2(vertikal2)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(-615, 300, 350);
    glVertex3f(-615, -15, 350);
    glVertex3f(-615, -15, -350);
    glVertex3f(-615, 300, -350);
    glEnd();

    //dinding kiri (bawah)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(-600, -15, 350);
    glVertex3f(-615, -15, 350);
    glVertex3f(-615, -15, -350);
    glVertex3f(-600, -15, -350);
    glEnd();

    //dinding kiri1 (miring)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.7);
    glVertex3f(-600, 300, 350);
    glVertex3f(-650, 350, 350);
    glVertex3f(-650, 350, -350);
    glVertex3f(-600, 300, -350);
    glEnd();

    //dinding kiri2 (miring)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.7);
    glVertex3f(-615, 300, 350);
    glVertex3f(-665, 350, 350);
    glVertex3f(-665, 350, -350);
    glVertex3f(-615, 300, -350);
    glEnd();

    //dinding kiri1 (vertikal 3)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(-650, 350, 350);
    glVertex3f(-650, 400, 350);
    glVertex3f(-650, 400, -350);
    glVertex3f(-650, 350, -350);
    glEnd();

    //dinding kiri2 (vertikal 4)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(-665, 350, 350);
    glVertex3f(-665, 400, 350);
    glVertex3f(-665, 400, -350);
    glVertex3f(-665, 350, -350);
    glEnd();
///////////////////////////////////////////
    //dinding belakang1(vertikal1)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, 300, -450);
    glVertex3f(500, -15, -450);
    glVertex3f(-500, -15, -450);
    glVertex3f(-500, 300, -450);
    glEnd();

    //dinding belakang2(vertikal2)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, 300, -465);
    glVertex3f(500, -15, -465);
    glVertex3f(-500, -15, -465);
    glVertex3f(-500, 300, -465);
    glEnd();

    //dinding belakang (bawah)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, -15, -450);
    glVertex3f(-500, -15, -450);
    glVertex3f(-500, -15, -465);
    glVertex3f(500, -15, -465);
    glEnd();

    //dinding belakang1 (miring)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.7);
    glVertex3f(500, 300, -465);
    glVertex3f(500, 350, -515);
    glVertex3f(-500, 350, -515);
    glVertex3f(-500, 300, -465);
    glEnd();

    //dinding belakang2 (miring)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.7);
    glVertex3f(500, 300, -450);
    glVertex3f(500, 350, -500);
    glVertex3f(-500, 350, -500);
    glVertex3f(-500, 300, -450);
    glEnd();

    //dinding belakang1 (vertikal 3)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, 350, -515);
    glVertex3f(500, 400, -515);
    glVertex3f(-500, 400, -515);
    glVertex3f(-500, 350, -515);
    glEnd();

    //dinding belakang2 (vertikal 4)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, 350, -500);
    glVertex3f(500, 400, -500);
    glVertex3f(-500, 400, -500);
    glVertex3f(-500, 350, -500);
    glEnd();
/////////////////////////////////////////////////////
    //dinding depan1(vertikal1)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, 300, 450);
    glVertex3f(500, -15, 450);
    glVertex3f(-500, -15, 450);
    glVertex3f(-500, 300, 450);
    glEnd();

    //dinding depan2(vertikal2)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, 300, 465);
    glVertex3f(500, -15, 465);
    glVertex3f(-500, -15, 465);
    glVertex3f(-500, 300, 465);
    glEnd();

    //dinding depan (bawah)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, -15, 450);
    glVertex3f(-500, -15, 450);
    glVertex3f(-500, -15, 465);
    glVertex3f(500, -15, 465);
    glEnd();

    //dinding depan1 (miring)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.7);
    glVertex3f(500, 300, 465);
    glVertex3f(500, 350, 515);
    glVertex3f(-500, 350, 515);
    glVertex3f(-500, 300, 465);
    glEnd();

    //dinding depan2 (miring)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.7);
    glVertex3f(500, 300, 450);
    glVertex3f(500, 350, 500);
    glVertex3f(-500, 350, 500);
    glVertex3f(-500, 300, 450);
    glEnd();

    //dinding depan1 (vertikal 3)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, 350, 515);
    glVertex3f(500, 400, 515);
    glVertex3f(-500, 400, 515);
    glVertex3f(-500, 350, 515);
    glEnd();

    //dinding depan2 (vertikal 4)
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, 350, 500);
    glVertex3f(500, 400, 500);
    glVertex3f(-500, 400, 500);
    glVertex3f(-500, 350, 500);
    glEnd();
///////////////////////////////////////
    //dinding sambungan depan-kanan1
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, 350, 500);
    glVertex3f(650, 350, 350);
    glVertex3f(650, 400, 350);
    glVertex3f(500, 400, 500);
    glEnd();
    //dinding sambungan depan-kanan2
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, 350, 515);
    glVertex3f(665, 350, 350);
    glVertex3f(665, 400, 350);
    glVertex3f(500, 400, 515);
    glEnd();
    //dinding sambungan depan-kiri1
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(-500, 350, 500);
    glVertex3f(-650, 350, 350);
    glVertex3f(-650, 400, 350);
    glVertex3f(-500, 400, 500);
    glEnd();
    //dinding sambungan depan-kiri2
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(-500, 350, 515);
    glVertex3f(-665, 350, 350);
    glVertex3f(-665, 400, 350);
    glVertex3f(-500, 400, 515);
    glEnd();
    //dinding sambungan depan-kiri-miring3
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.7);
    glVertex3f(-500, 350, 515);
    glVertex3f(-665, 350, 350);
    glVertex3f(-600, 300, 350);
    glVertex3f(-500, 300, 450);
    glEnd();
    //dinding sambungan depan-kanan-miring3
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.7);
    glVertex3f(500, 350, 515);
    glVertex3f(665, 350, 350);
    glVertex3f(600, 300, 350);
    glVertex3f(500, 300, 450);
    glEnd();
    //dinding sambungan depan-kanan3
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(600, 300, 350);
    glVertex3f(500, 300, 450);
    glVertex3f(500, -15, 450);
    glVertex3f(600, -15, 350);
    glEnd();
    //dinding sambungan depan-kiri3
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(-600, 300, 350);
    glVertex3f(-500, 300, 450);
    glVertex3f(-500, -15, 450);
    glVertex3f(-600, -15, 350);
    glEnd();

    //dinding sambungan depan-kanan1
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, 350, -500);
    glVertex3f(650, 350, -350);
    glVertex3f(650, 400, -350);
    glVertex3f(500, 400, -500);
    glEnd();
    //dinding sambungan depan-kanan2
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, 350, -515);
    glVertex3f(665, 350, -350);
    glVertex3f(665, 400, -350);
    glVertex3f(500, 400, -515);
    glEnd();
    //dinding sambungan depan-kiri1
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(-500, 350, -500);
    glVertex3f(-650, 350, -350);
    glVertex3f(-650, 400, -350);
    glVertex3f(-500, 400, -500);
    glEnd();
    //dinding sambungan depan-kiri2
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(-500, 350, -515);
    glVertex3f(-665, 350, -350);
    glVertex3f(-665, 400, -350);
    glVertex3f(-500, 400, -515);
    glEnd();
    //dinding sambungan depan-kiri-miring3
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.7);
    glVertex3f(-500, 350, -515);
    glVertex3f(-665, 350, -350);
    glVertex3f(-600, 300, -350);
    glVertex3f(-500, 300, -450);
    glEnd();
    //dinding sambungan depan-kanan-miring3
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.7);
    glVertex3f(500, 350, -515);
    glVertex3f(665, 350, -350);
    glVertex3f(600, 300, -350);
    glVertex3f(500, 300, -450);
    glEnd();
    //dinding sambungan depan-kanan3
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(600, 300, -350);
    glVertex3f(500, 300, -450);
    glVertex3f(500, -15, -450);
    glVertex3f(600, -15, -350);
    glEnd();
    //dinding sambungan depan-kiri3
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(-600, 300, -350);
    glVertex3f(-500, 300, -450);
    glVertex3f(-500, -15, -450);
    glVertex3f(-600, -15, -350);
    glEnd();

}

void lapangan()
{
    //ALAS Coklat
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.1);
    glVertex3f(-330, -15, 180);
    glVertex3f(-330, -15, -180);
    glVertex3f(330, -15, -180);
    glVertex3f(330, -15, 180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(220, -14.5, 120);
    glVertex3f(-220, -14.5, 120);
    glVertex3f(-220, -14.5, 100);
    glVertex3f(220, -14.5, 100);

    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(220, -14.5, 100);
    glVertex3f(-220, -14.5, 100);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-220, -14.5, 80);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(220, -14.5, 80);

    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(220, -14.5, 80);
    glVertex3f(-220, -14.5, 80);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-220, -14.5, 60);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(220, -14.5, 60);

    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(220, -14.5, 60);
    glVertex3f(-220, -14.5, 60);
    glVertex3f(-220, -14.5, 40);
    glVertex3f(220, -14.5, 40);

    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(220, -14.5, 40);
    glVertex3f(-220, -14.5, 40);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-220, -14.5, 20);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(220, -14.5, 20);

    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(220, -14.5, 20);
    glVertex3f(-220, -14.5, 20);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-220, -14.5, 0);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(220, -14.5, 0);

    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(220, -14.5, 0);
    glVertex3f(-220, -14.5, 0);
    glVertex3f(-220, -14.5, -20);
    glVertex3f(220, -14.5, -20);

    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(220, -14.5, -20);
    glVertex3f(-220, -14.5, -20);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-220, -14.5, -40);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(220, -14.5, -40);

    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(220, -14.5, -40);
    glVertex3f(-220, -14.5, -40);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-220, -14.5, -60);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(220, -14.5, -60);

    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(220, -14.5, -60);
    glVertex3f(-220, -14.5, -60);
    glVertex3f(-220, -14.5, -80);
    glVertex3f(220, -14.5, -80);

    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(220, -14.5, -80);
    glVertex3f(-220, -14.5, -80);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-220, -14.5, -100);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(220, -14.5, -100);

    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(220, -14.5, -100);
    glVertex3f(-220, -14.5, -100);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-220, -14.5, -120);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(220, -14.5, -120);
    glEnd();

    //PEMBATAS
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-221, -14.5, 121);
    glVertex3f(-221, -14.5, -121);
    glVertex3f(221, -14.5, -121);
    glVertex3f(221, -14.5, 121);
    glEnd();

    //GARIS MID
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(0, -14.5, -121);
    glVertex3f(0, -14.5, 121);
    glEnd();

    //kotak gawang kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(221, -14.5, 81);
    glVertex3f(221, -14.5, -81);
    glVertex3f(121, -14.5, -81);
    glVertex3f(121, -14.5, 81);
    glEnd();

    //dalemnya
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(221, -14.5, 41);
    glVertex3f(221, -14.5, -41);
    glVertex3f(181, -14.5, -41);
    glVertex3f(181, -14.5, 41);
    glEnd();

    //kotak gawang kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-221, -14.5, 81);
    glVertex3f(-221, -14.5, -81);
    glVertex3f(-121, -14.5, -81);
    glVertex3f(-121, -14.5, 81);
    glEnd();

    //dalemnya
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-221, -14.5, 41);
    glVertex3f(-221, -14.5, -41);
    glVertex3f(-181, -14.5, -41);
    glVertex3f(-181, -14.5, 41);
    glEnd();

    //titik pinalti
    glBegin(GL_POINTS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(141, -14.5, 0);
    glVertex3f(-141, -14.5, 0);
    glEnd();

    //bulatan kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-121, -14.5, 41);
    glVertex3f(-121, -14.5, 41);
    glVertex3f(-111, -14.5, 41);
    glVertex3f(-101, -14.5, 31);
    glVertex3f(-101, -14.5, -31);
    glVertex3f(-111, -14.5, -41);
    glVertex3f(-121, -14.5, -41);
    glEnd();

    //bulatan kiri
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(121, -14.5, 41);
    glVertex3f(121, -14.5, 41);
    glVertex3f(111, -14.5, 41);
    glVertex3f(101, -14.5, 31);
    glVertex3f(101, -14.5, -31);
    glVertex3f(111, -14.5, -41);
    glVertex3f(121, -14.5, -41);
    glEnd();

    //lingkaran tengah
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-10, -14.5, 61);
    glVertex3f(10, -14.5, 61);
    glVertex3f(30, -14.5, 41);
    glVertex3f(30, -14.5, -41);
    glVertex3f(10, -14.5, -61);
    glVertex3f(-10, -14.5, -61);
    glVertex3f(-30, -14.5, -41);
    glVertex3f(-30, -14.5, 41);
    glEnd();

}

void kursi_pelatih()
{
    //kursi kiri
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-40, -14.5, 145);
    glVertex3f(-40, -14.5, 130);
    glVertex3f(-40, -4.5, 130);
    glVertex3f(-40, -4.5, 145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-40, -4.5, 145);
    glVertex3f(-40, -14.5, 145);
    glVertex3f(-80, -14.5, 145);
    glVertex3f(-80, -4.5, 145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-80, -14.5, 145);
    glVertex3f(-80, -14.5, 130);
    glVertex3f(-80, -4.5, 130);
    glVertex3f(-80, -4.5, 145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-40, -4.5, 130);
    glVertex3f(-40, -14.5, 130);
    glVertex3f(-80, -14.5, 130);
    glVertex3f(-80, -4.5, 130);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-40, -4.5, 130);
    glVertex3f(-40, -4.5, 145);
    glVertex3f(-80, -4.5, 145);
    glVertex3f(-80, -4.5, 130);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-40, -4.5, 145);
    glVertex3f(-80, -4.5, 145);
    glVertex3f(-80, 24.5, 145);
    glVertex3f(-40, 24.5, 145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(-40, 24.5, 145);
    glVertex3f(-40, 24.5, 130);
    glVertex3f(-80, 24.5, 130);
    glVertex3f(-80, 24.5, 145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-40, 24.5, 130);
    glVertex3f(-40, 18.5, 130);
    glVertex3f(-80, 18.5, 130);
    glVertex3f(-80, 24.5, 130);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-40, 24.5, 130);
    glVertex3f(-40, -4.5, 130);
    glVertex3f(-40, -4.5, 145);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-80, 24.5, 130);
    glVertex3f(-80, -4.5, 130);
    glVertex3f(-80, -4.5, 145);
    glEnd();

    //kursi kiri
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(40, -14.5, 145);
    glVertex3f(40, -14.5, 130);
    glVertex3f(40, -4.5, 130);
    glVertex3f(40, -4.5, 145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(40, -4.5, 145);
    glVertex3f(40, -14.5, 145);
    glVertex3f(80, -14.5, 145);
    glVertex3f(80, -4.5, 145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(80, -14.5, 145);
    glVertex3f(80, -14.5, 130);
    glVertex3f(80, -4.5, 130);
    glVertex3f(80, -4.5, 145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(40, -4.5, 130);
    glVertex3f(40, -14.5, 130);
    glVertex3f(80, -14.5, 130);
    glVertex3f(80, -4.5, 130);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(40, -4.5, 130);
    glVertex3f(40, -4.5, 145);
    glVertex3f(80, -4.5, 145);
    glVertex3f(80, -4.5, 130);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40, -4.5, 145);
    glVertex3f(80, -4.5, 145);
    glVertex3f(80, 24.5, 145);
    glVertex3f(40, 24.5, 145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(40, 24.5, 145);
    glVertex3f(40, 24.5, 130);
    glVertex3f(80, 24.5, 130);
    glVertex3f(80, 24.5, 145);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40, 24.5, 130);
    glVertex3f(40, 18.5, 130);
    glVertex3f(80, 18.5, 130);
    glVertex3f(80, 24.5, 130);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40, 24.5, 130);
    glVertex3f(40, -4.5, 130);
    glVertex3f(40, -4.5, 145);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(80, 24.5, 130);
    glVertex3f(80, -4.5, 130);
    glVertex3f(80, -4.5, 145);
    glEnd();
}

void bendera_lapangan()
{
     //pojok kanan belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(220, -14.5, 120);
    glVertex3f(220, 5, 120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.8);
    glVertex3f(220, 5, 120);
    glVertex3f(220, 3, 120);
    glVertex3f(225, 3, 120);
    glVertex3f(225, 5, 120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(220, 3, 120);
    glVertex3f(220, 1, 120);
    glVertex3f(225, 1, 120);
    glVertex3f(225, 3, 120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.8);
    glVertex3f(220, 1, 120);
    glVertex3f(220, -1, 120);
    glVertex3f(225, -1, 120);
    glVertex3f(225, 1, 120);
    glEnd();

    //pojok kiri belakang
    glBegin(GL_LINE_STRIP);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(-220, -14.5, 120);
    glVertex3f(-220, 5, 120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.8);
    glVertex3f(-220, 5, 120);
    glVertex3f(-220, 3, 120);
    glVertex3f(-225, 3, 120);
    glVertex3f(-225, 5, 120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-220, 3, 120);
    glVertex3f(-220, 1, 120);
    glVertex3f(-225, 1, 120);
    glVertex3f(-225, 3, 120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.8);
    glVertex3f(-220, 1, 120);
    glVertex3f(-220, -1, 120);
    glVertex3f(-225, -1, 120);
    glVertex3f(-225, 1, 120);
    glEnd();

    //pojok kiri depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(-220, -14.5, -120);
    glVertex3f(-220, 5, -120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.8);
    glVertex3f(-220, 5, -120);
    glVertex3f(-220, 3, -120);
    glVertex3f(-225, 3, -120);
    glVertex3f(-225, 5, -120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-220, 3, -120);
    glVertex3f(-220, 1, -120);
    glVertex3f(-225, 1, -120);
    glVertex3f(-225, 3, -120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.8);
    glVertex3f(-220, 1, -120);
    glVertex3f(-220, -1, -120);
    glVertex3f(-225, -1, -120);
    glVertex3f(-225, 1, -120);
    glEnd();


    //pojok kanan depan
    glBegin(GL_LINE_STRIP);
    glColor3f(0.8, 0.8, 0.8);
    glVertex3f(220, -14.5, -120);
    glVertex3f(220, 5, -120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.8);
    glVertex3f(220, 5, -120);
    glVertex3f(220, 3, -120);
    glVertex3f(225, 3, -120);
    glVertex3f(225, 5, -120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(220, 3, -120);
    glVertex3f(220, 1, -120);
    glVertex3f(225, 1, -120);
    glVertex3f(225, 3, -120);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.8);
    glVertex3f(220, 1, -120);
    glVertex3f(220, -1, -120);
    glVertex3f(225, -1, -120);
    glVertex3f(225, 1, -120);
    glEnd();
}

void gerbang_masuk()
{
        glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(480, 260, 110);
    glVertex3f(580, 260, 110);
    glVertex3f(580, 260, 70);
    glVertex3f(480, 260, 70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(480, 260, 110);
    glVertex3f(580, 260, 110);
    glVertex3f(580, 230, 110);
    glVertex3f(480, 230, 110);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(480, 260, 70);
    glVertex3f(580, 260, 70);
    glVertex3f(580, 230, 70);
    glVertex3f(480, 230, 70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(480, 260, -110);
    glVertex3f(580, 260, -110);
    glVertex3f(580, 260, -70);
    glVertex3f(480, 260, -70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(480, 260, -110);
    glVertex3f(580, 260, -110);
    glVertex3f(580, 230, -110);
    glVertex3f(480, 230, -110);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(480, 260, -70);
    glVertex3f(580, 260, -70);
    glVertex3f(580, 230, -70);
    glVertex3f(480, 230, -70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-480, 260, -110);
    glVertex3f(-580, 260, -110);
    glVertex3f(-580, 260, -70);
    glVertex3f(-480, 260, -70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-480, 260, -110);
    glVertex3f(-580, 260, -110);
    glVertex3f(-580, 230, -110);
    glVertex3f(-480, 230, -110);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-480, 260, -70);
    glVertex3f(-580, 260, -70);
    glVertex3f(-580, 230, -70);
    glVertex3f(-480, 230, -70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-480, 260, 110);
    glVertex3f(-580, 260, 110);
    glVertex3f(-580, 260, 70);
    glVertex3f(-480, 260, 70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-480, 260, 110);
    glVertex3f(-580, 260, 110);
    glVertex3f(-580, 230, 110);
    glVertex3f(-480, 230, 110);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-480, 260, 70);
    glVertex3f(-580, 260, 70);
    glVertex3f(-580, 230, 70);
    glVertex3f(-480, 230, 70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(480, 260, 110);
    glVertex3f(580, 260, 110);
    glVertex3f(580, 260, 70);
    glVertex3f(480, 260, 70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(480, 260, 110);
    glVertex3f(580, 260, 110);
    glVertex3f(580, 230, 110);
    glVertex3f(480, 230, 110);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(480, 260, 70);
    glVertex3f(580, 260, 70);
    glVertex3f(580, 230, 70);
    glVertex3f(480, 230, 70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(480, 260, -110);
    glVertex3f(580, 260, -110);
    glVertex3f(580, 260, -70);
    glVertex3f(480, 260, -70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(480, 260, -110);
    glVertex3f(580, 260, -110);
    glVertex3f(580, 230, -110);
    glVertex3f(480, 230, -110);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(480, 260, -70);
    glVertex3f(580, 260, -70);
    glVertex3f(580, 230, -70);
    glVertex3f(480, 230, -70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-480, 260, -110);
    glVertex3f(-580, 260, -110);
    glVertex3f(-580, 260, -70);
    glVertex3f(-480, 260, -70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-480, 260, -110);
    glVertex3f(-580, 260, -110);
    glVertex3f(-580, 230, -110);
    glVertex3f(-480, 230, -110);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-480, 260, -70);
    glVertex3f(-580, 260, -70);
    glVertex3f(-580, 230, -70);
    glVertex3f(-480, 230, -70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-480, 260, 110);
    glVertex3f(-580, 260, 110);
    glVertex3f(-580, 260, 70);
    glVertex3f(-480, 260, 70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-480, 260, 110);
    glVertex3f(-580, 260, 110);
    glVertex3f(-580, 230, 110);
    glVertex3f(-480, 230, 110);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-480, 260, 70);
    glVertex3f(-580, 260, 70);
    glVertex3f(-580, 230, 70);
    glVertex3f(-480, 230, 70);
    glEnd();
 glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-260, 260, -350);
    glVertex3f(-260, 260, -420);
    glVertex3f(-200, 260, -420);
    glVertex3f(-200, 260, -350);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-260, 260, -350);
    glVertex3f(-260, 220, -350);
    glVertex3f(-260, 220, -420);
    glVertex3f(-260, 260, -420);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-200, 260, -350);
    glVertex3f(-200, 220, -350);
    glVertex3f(-200, 220, -420);
    glVertex3f(-200, 260, -420);
    glEnd();

//
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-30, 260, -350);
    glVertex3f(-30, 260, -420);
    glVertex3f(30, 260, -420);
    glVertex3f(30, 260, -350);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(30, 260, -350);
    glVertex3f(30, 220, -350);
    glVertex3f(30, 220, -420);
    glVertex3f(30, 260, -420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-30, 260, -350);
    glVertex3f(-30, 220, -350);
    glVertex3f(-30, 220, -420);
    glVertex3f(-30, 260, -420);
    glEnd();
//
glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(260, 260, -350);
    glVertex3f(260, 260, -420);
    glVertex3f(200, 260, -420);
    glVertex3f(200, 260, -350);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(200, 260, -350);
    glVertex3f(200, 220, -350);
    glVertex3f(200, 220, -420);
    glVertex3f(200, 260, -420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(260, 260, -350);
    glVertex3f(260, 220, -350);
    glVertex3f(260, 220, -420);
    glVertex3f(260, 260, -420);
    glEnd();
/////
 glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-260, 260, 350);
    glVertex3f(-260, 260, 420);
    glVertex3f(-200, 260, 420);
    glVertex3f(-200, 260, 350);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-260, 260, 350);
    glVertex3f(-260, 220, 350);
    glVertex3f(-260, 220, 420);
    glVertex3f(-260, 260, 420);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-200, 260, 350);
    glVertex3f(-200, 220, 350);
    glVertex3f(-200, 220, 420);
    glVertex3f(-200, 260, 420);
    glEnd();

//
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-30, 260, 350);
    glVertex3f(-30, 260, 420);
    glVertex3f(30, 260, 420);
    glVertex3f(30, 260, 350);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(30, 260, 350);
    glVertex3f(30, 220, 350);
    glVertex3f(30, 220, 420);
    glVertex3f(30, 260, 420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-30, 260, 350);
    glVertex3f(-30, 220, 350);
    glVertex3f(-30, 220, 420);
    glVertex3f(-30, 260, 420);
    glEnd();
//
glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(260, 260, 350);
    glVertex3f(260, 260, 420);
    glVertex3f(200, 260, 420);
    glVertex3f(200, 260, 350);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(200, 260, 350);
    glVertex3f(200, 220, 350);
    glVertex3f(200, 220, 420);
    glVertex3f(200, 260, 420);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(260, 260, 350);
    glVertex3f(260, 220, 350);
    glVertex3f(260, 220, 420);
    glVertex3f(260, 260, 420);
    glEnd();
}

void gerbang_keluar()
{
    //pintu depan(hitam)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(20, 15, 466);
    glVertex3f(20, -15, 466);
    glVertex3f(-20, -15, 466);
    glVertex3f(-20, 15, 466);
    glEnd();
    //pintu depan2(hitam)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(20, 15, 466);
    glVertex3f(20, -15, 466);
    glVertex3f(20, -15, 466);
    glEnd();
    //pintu depan3(hitam)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-20, 15, 466);
    glVertex3f(-20, -15, 466);
    glVertex3f(-20, -15, 466);
    glEnd();
    //pintu belakang(hitam)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(20, 15, -466);
    glVertex3f(20, -15, -466);
    glVertex3f(-20, -15, -466);
    glVertex3f(-20, 15, -466);
    glEnd();
    // belakang(hitam)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(20, 20, -466);
    glVertex3f(20, 16, -466);
    glVertex3f(-20, 16, -466);
    glVertex3f(-20, 20, -466);
    glEnd();
    // depan(hitam)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(20, 20, 466);
    glVertex3f(20, 16, 466);
    glVertex3f(-20, 16, 466);
    glVertex3f(-20, 20, 466);
    glEnd();
    //pintu depan2()
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(20, 15, -466);
    glVertex3f(20, -15, -466);
    glVertex3f(20, -15, -466);
    glEnd();
    //pintu depan3()
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-20, 15, -466);
    glVertex3f(-20, -15, -466);
    glVertex3f(-20, -15, -466);
    glEnd();
}

void papan_iklan()
{
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 1.0);
    glVertex3f(-300, -15, 150);
    glVertex3f(-300, 0, 150);
    glVertex3f(300, 0, 150);
    glVertex3f(300, -15, 150);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 1.0);
    glVertex3f(-300, -15, -150);
    glVertex3f(-300, 0, -150);
    glVertex3f(300, 0, -150);
    glVertex3f(300, -15, -150);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-300, -15, -150);
    glVertex3f(-300, 0, -150);
    glVertex3f(-300, 0, 150);
    glVertex3f(-300, -15, 150);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(300, -15, -150);
    glVertex3f(300, 0, -150);
    glVertex3f(300, 0, 150);
    glVertex3f(300, -15, 150);
    glEnd();
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

void papan_score()
{
//papan1(kanan)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(550, 550, -20);
    glVertex3f(550, 550, 20);
    glVertex3f(550, 600, 20);
    glVertex3f(550, 600, -20);
    glEnd();

    //papan2(kanan)
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(555, 550, -20);
    glVertex3f(555, 550, 20);
    glVertex3f(555, 600, 20);
    glVertex3f(555, 600, -20);
    glEnd();

    //papan3(kanan)
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex3f(550, 550, -20);
    glVertex3f(555, 550, -20);
    glVertex3f(555, 600, -20);
    glVertex3f(550, 600, -20);
    glEnd();

    //papan4(kanan)
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex3f(550, 550, 20);
    glVertex3f(555, 550, 20);
    glVertex3f(555, 600, 20);
    glVertex3f(550, 600, 20);
    glEnd();

    //papan5(kanan)
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex3f(550, 550, -20);
    glVertex3f(550, 550, 20);
    glVertex3f(555, 550, 20);
    glVertex3f(555, 550, -20);
    glEnd();

    //papan6(kanan)
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex3f(550, 600, -20);
    glVertex3f(550, 600, 20);
    glVertex3f(555, 600, 20);
    glVertex3f(555, 600, -20);
    glEnd();

    //papan1(kiri)
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-550, 550, -20);
    glVertex3f(-550, 550, 20);
    glVertex3f(-550, 600, 20);
    glVertex3f(-550, 600, -20);
    glEnd();

    //papan2(kiri)
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-555, 550, -20);
    glVertex3f(-555, 550, 20);
    glVertex3f(-555, 600, 20);
    glVertex3f(-555, 600, -20);
    glEnd();

    //papan3(kiri)
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex3f(-550, 550, -20);
    glVertex3f(-555, 550, -20);
    glVertex3f(-555, 600, -20);
    glVertex3f(-550, 600, -20);
    glEnd();

    //papan4(kiri)
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex3f(-550, 550, 20);
    glVertex3f(-555, 550, 20);
    glVertex3f(-555, 600, 20);
    glVertex3f(-550, 600, 20);
    glEnd();

    //papan5(kiri)
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex3f(-550, 550, -20);
    glVertex3f(-550, 550, 20);
    glVertex3f(-555, 550, 20);
    glVertex3f(-555, 550, -20);
    glEnd();

    //papan6(kiri)
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.7, 0.7);
    glVertex3f(-550, 600, -20);
    glVertex3f(-550, 600, 20);
    glVertex3f(-555, 600, 20);
    glVertex3f(-555, 600, -20);
    glEnd();
}

void kursi_penonton()
{
//KURSI PENONTON SEBELAH KANAN//////////////////////
    //segitiga
    //SEMENTARA kursi bawah kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(330, -15, -150);
    glVertex3f(460, -15, -150);
    glVertex3f(460, 150, -150);
    glEnd();
    //SEMENTARA kursi bawah kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(330, -15, 150);
    glVertex3f(460, -15, 150);
    glVertex3f(460, 150, 150);
    glEnd();

    //kotak
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(330, -15, -150);
    glVertex3f(460, 150, -150);
    glVertex3f(460, 150, 150);
    glVertex3f(330, -15, 150);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(460, 150, -150);
    glVertex3f(460, 150, 150);
    glVertex3f(460, 190, 150);
    glVertex3f(460, 190, -150);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(475, 150, -150);
    glVertex3f(475, 150, 150);
    glVertex3f(475, 190, 150);
    glVertex3f(475, 190, -150);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(460, 190, 150);
    glVertex3f(460, 190, -150);
    glVertex3f(475, 190, -150);
    glVertex3f(475, 190, 150);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(460, 190, 149);
    glVertex3f(475, 190, 149);
    glVertex3f(475, 150, 149);
    glVertex3f(460, 150, 149);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(460, 190, -149);
    glVertex3f(475, 190, -149);
    glVertex3f(475, 150, -149);
    glVertex3f(460, 150, -149);
    glEnd();


    //kursi atas
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(460, 150, 150);
    glVertex3f(590, 315, 150);
    glVertex3f(590, -15, 150);
    glVertex3f(460, -15, 150);
    glEnd();

     //kursi atas
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(460, 150, -150);
    glVertex3f(590, 315, -150);
    glVertex3f(590, -15, -150);
    glVertex3f(460, -15, -150);
    glEnd();


    //kotak atas 1
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(460, 150, 150);
    glVertex3f(590, 315, 150);
    glVertex3f(590, 315, 90);
    glVertex3f(460, 150, 90);
    glEnd();



    //kotak atas 2
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(460, 150, 90);
    glVertex3f(590, 315, 90);
    glVertex3f(590, 315, 30);
    glVertex3f(460, 150, 30);
    glEnd();

    //kotak atas 3
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(460, 150, 30);
    glVertex3f(590, 315, 30);
    glVertex3f(590, 315, -30);
    glVertex3f(460, 150, -30);
    glEnd();

    //kotak atas 4
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(460, 150, -30);
    glVertex3f(590, 315, -30);
    glVertex3f(590, 315, -90);
    glVertex3f(460, 150, -90);
    glEnd();

    //kotak atas 5
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(460, 150, -90);
    glVertex3f(590, 315, -90);
    glVertex3f(590, 315, -150);
    glVertex3f(460, 150, -150);
    glEnd();


    //kursi atas
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(590, 315, 150);
    glVertex3f(590, -15, 150);
    glVertex3f(590, -15, -150);
    glVertex3f(590, 315, -150);
    glEnd();

    //////////KURSI PENONTON SEBELAH KIRI///////////////////////
    //segitiga
    //SEMENTARA kursi bawah kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-330, -15, -150);
    glVertex3f(-460, -15, -150);
    glVertex3f(-460, 150, -150);
    glEnd();
    //SEMENTARA kursi bawah kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-330, -15, 150);
    glVertex3f(-460, -15, 150);
    glVertex3f(-460, 150, 150);
    glEnd();

    //kotak
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-330, -15, -150);
    glVertex3f(-460, 150, -150);
    glVertex3f(-460, 150, 150);
    glVertex3f(-330, -15, 150);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-460, 150, -150);
    glVertex3f(-460, 150, 150);
    glVertex3f(-460, 190, 150);
    glVertex3f(-460, 190, -150);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-475, 150, -150);
    glVertex3f(-475, 150, 150);
    glVertex3f(-475, 190, 150);
    glVertex3f(-475, 190, -150);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-460, 190, 150);
    glVertex3f(-460, 190, -150);
    glVertex3f(-475, 190, -150);
    glVertex3f(-475, 190, 150);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-460, 190, 149);
    glVertex3f(-475, 190, 149);
    glVertex3f(-475, 150, 149);
    glVertex3f(-460, 150, 149);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-460, 190, -149);
    glVertex3f(-475, 190, -149);
    glVertex3f(-475, 150, -149);
    glVertex3f(-460, 150, -149);
    glEnd();


    //kursi atas
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-460, 150, 150);
    glVertex3f(-590, 315, 150);
    glVertex3f(-590, -15, 150);
    glVertex3f(-460, -15, 150);
    glEnd();

     //kursi atas
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-460, 150, -150);
    glVertex3f(-590, 315, -150);
    glVertex3f(-590, -15, -150);
    glVertex3f(-460, -15, -150);
    glEnd();


    //kotak atas 1
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-460, 150, 150);
    glVertex3f(-590, 315, 150);
    glVertex3f(-590, 315, 90);
    glVertex3f(-460, 150, 90);
    glEnd();

    //kotak atas 2
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-460, 150, 90);
    glVertex3f(-590, 315, 90);
    glVertex3f(-590, 315, 30);
    glVertex3f(-460, 150, 30);
    glEnd();

    //kotak atas 3
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-460, 150, 30);
    glVertex3f(-590, 315, 30);
    glVertex3f(-590, 315, -30);
    glVertex3f(-460, 150, -30);
    glEnd();

    //kotak atas 4
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-460, 150, -30);
    glVertex3f(-590, 315, -30);
    glVertex3f(-590, 315, -90);
    glVertex3f(-460, 150, -90);
    glEnd();

    //kotak atas 5
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-460, 150, -90);
    glVertex3f(-590, 315, -90);
    glVertex3f(-590, 315, -150);
    glVertex3f(-460, 150, -150);
    glEnd();


    //kursi atas
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-590, 315, 150);
    glVertex3f(-590, -15, 150);
    glVertex3f(-590, -15, -150);
    glVertex3f(-590, 315, -150);
    glEnd();

    //////Kursi depan//////////////////////
    //segitiga
    //SEMENTARA kursi bawah kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-300, -15, -180);
    glVertex3f(-300, -15, -310);
    glVertex3f(-300, 150, -310);
    glEnd();
    //SEMENTARA kursi bawah kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(300, -15, -180);
    glVertex3f(300, -15, -310);
    glVertex3f(300, 150, -310);
    glEnd();

    //kotak
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-300, -15, -180);
    glVertex3f(-300, 150, -310);
    glVertex3f(300, 150, -310);
    glVertex3f(300, -15, -180);
    glEnd();


    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-300, 150, -310);
    glVertex3f(300, 150, -310);
    glVertex3f(300, 190, -310);
    glVertex3f(-300, 190, -310);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-300, 150, -325);
    glVertex3f(300, 150, -325);
    glVertex3f(300, 190, -325);
    glVertex3f(-300, 190, -325);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-300, 190, -310);
    glVertex3f(300, 190, -310);
    glVertex3f(300, 190, -325);
    glVertex3f(-300, 190, -325);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-300, 150, -310);
    glVertex3f(300, 150, -310);
    glVertex3f(300, 150, -325);
    glVertex3f(-300, 150, -325);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-299, 150, -310);
    glVertex3f(-299, 190, -310);
    glVertex3f(-299, 190, -325);
    glVertex3f(-299, 150, -325);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(299, 150, -310);
    glVertex3f(299, 190, -310);
    glVertex3f(299, 190, -325);
    glVertex3f(299, 150, -325);
    glEnd();


    //kursi atas
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-300, 150, -310);
    glVertex3f(-300, 315, -440);
    glVertex3f(-300, -15, -440);
    glVertex3f(-300, -15, -310);
    glEnd();

     //kursi atas
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(300, 150, -310);
    glVertex3f(300, 315, -440);
    glVertex3f(300, -15, -440);
    glVertex3f(300, -15, -310);
    glEnd();


    //kotak atas 1
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-300, 150, -310);
    glVertex3f(-300, 315, -440);
    glVertex3f(-240, 315, -440);
    glVertex3f(-240, 150, -310);
    glEnd();


    //kotak atas 2
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-240, 150, -310);
    glVertex3f(-240, 315, -440);
    glVertex3f(-180, 315, -440);
    glVertex3f(-180, 150, -310);
    glEnd();

    //kotak atas 3
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-180, 150, -310);
    glVertex3f(-180, 315, -440);
    glVertex3f(-120, 315, -440);
    glVertex3f(-120, 150, -310);
    glEnd();

    //kotak atas 4
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-120, 150, -310);
    glVertex3f(-120, 315, -440);
    glVertex3f(-60, 315, -440);
    glVertex3f(-60, 150, -310);
    glEnd();

    //kotak atas 5
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-60, 150, -310);
    glVertex3f(-60, 315, -440);
    glVertex3f(0, 315, -440);
    glVertex3f(0, 150, -310);
    glEnd();

    //kotak atas 6
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0, 150, -310);
    glVertex3f(0, 315, -440);
    glVertex3f(60, 315, -440);
    glVertex3f(60, 150, -310);
    glEnd();

    //kotak atas 7
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(60, 150, -310);
    glVertex3f(60, 315, -440);
    glVertex3f(120, 315, -440);
    glVertex3f(120, 150, -310);
    glEnd();

     //kotak atas 8
    //SEMENTARA kursi bawah kanan//////////////////////////////
    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-460, 150, -150);
    glVertex3f(-460, 190, -150);
    glVertex3f(-300, 190, -310);
    glVertex3f(-300, 150, -310);
    glEnd();

     //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-475, 150, -150);
    glVertex3f(-475, 190, -150);
    glVertex3f(-300, 190, -325);
    glVertex3f(-300, 150, -325);
    glEnd();

    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-460, 190, -150);
    glVertex3f(-475, 190, -150);
    glVertex3f(-300, 190, -325);
    glVertex3f(-300, 190, -325);
    glEnd();

    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-460, 150, -150);
    glVertex3f(-475, 150, -150);
    glVertex3f(-300, 150, -325);
    glVertex3f(-300, 150, -325);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(120, 150, -310);
    glVertex3f(120, 315, -440);
    glVertex3f(180, 315, -440);
    glVertex3f(180, 150, -310);
    glEnd();

     //kotak atas 9
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(180, 150, -310);
    glVertex3f(180, 315, -440);
    glVertex3f(240, 315, -440);
    glVertex3f(240, 150, -310);
    glEnd();

     //kotak atas 10
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(240, 150, -310);
    glVertex3f(240, 315, -440);
    glVertex3f(300, 315, -440);
    glVertex3f(300, 150, -310);
    glEnd();


    //kursi atas
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(300, 315, -440);
    glVertex3f(300, -15, -440);
    glVertex3f(-300, -15, -440);
    glVertex3f(-300, 315, -440);
    glEnd();


    //////Kursi belakang//////////////////////
    //segitiga
    //SEMENTARA kursi bawah kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-300, -15, 180);
    glVertex3f(-300, -15, 310);
    glVertex3f(-300, 150, 310);
    glEnd();
    //SEMENTARA kursi bawah kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(300, -15, 180);
    glVertex3f(300, -15, 310);
    glVertex3f(300, 150, 310);
    glEnd();

    //kotak
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-300, -15, 180);
    glVertex3f(-300, 150, 310);
    glVertex3f(300, 150, 310);
    glVertex3f(300, -15, 180);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-300, 150, 310);
    glVertex3f(300, 150, 310);
    glVertex3f(300, 190, 310);
    glVertex3f(-300, 190,310);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-300, 150, 325);
    glVertex3f(300, 150, 325);
    glVertex3f(300, 190, 325);
    glVertex3f(-300, 190, 325);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-300, 190, 310);
    glVertex3f(300, 190, 310);
    glVertex3f(300, 190, 325);
    glVertex3f(-300, 190, 325);
    glEnd();

    //kotak pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-300, 150, 310);
    glVertex3f(300, 150, 310);
    glVertex3f(300, 150, 325);
    glVertex3f(-300, 150, 325);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(-299, 150, 310);
    glVertex3f(-299, 190, 310);
    glVertex3f(-299, 190, 325);
    glVertex3f(-299, 150, 325);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(299, 150, 310);
    glVertex3f(299, 190,310);
    glVertex3f(299, 190, 325);
    glVertex3f(299, 150, 325);
    glEnd();


    //kursi atas
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-300, 150, 310);
    glVertex3f(-300, 315, 440);
    glVertex3f(-300, -15, 440);
    glVertex3f(-300, -15, 310);
    glEnd();

     //kursi atas
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(300, 150, 310);
    glVertex3f(300, 315, 440);
    glVertex3f(300, -15, 440);
    glVertex3f(300, -15, 310);
    glEnd();


    //kotak atas 1
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-300, 150, 310);
    glVertex3f(-300, 315, 440);
    glVertex3f(-240, 315, 440);
    glVertex3f(-240, 150, 310);
    glEnd();

    //kotak atas 2
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-240, 150, 310);
    glVertex3f(-240, 315, 440);
    glVertex3f(-180, 315, 440);
    glVertex3f(-180, 150, 310);
    glEnd();

    //kotak atas 3
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-180, 150, 310);
    glVertex3f(-180, 315, 440);
    glVertex3f(-120, 315, 440);
    glVertex3f(-120, 150, 310);
    glEnd();

    //kotak atas 4
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-120, 150, 310);
    glVertex3f(-120, 315, 440);
    glVertex3f(-60, 315, 440);
    glVertex3f(-60, 150, 310);
    glEnd();

    //kotak atas 5
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-60, 150, 310);
    glVertex3f(-60, 315, 440);
    glVertex3f(0, 315, 440);
    glVertex3f(0, 150, 310);
    glEnd();

    //kotak atas 6
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0, 150, 310);
    glVertex3f(0, 315, 440);
    glVertex3f(60, 315, 440);
    glVertex3f(60, 150, 310);
    glEnd();

    //kotak atas 7
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(60, 150, 310);
    glVertex3f(60, 315, 440);
    glVertex3f(120, 315, 440);
    glVertex3f(120, 150, 310);
    glEnd();

     //kotak atas 8
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(120, 150, 310);
    glVertex3f(120, 315, 440);
    glVertex3f(180, 315, 440);
    glVertex3f(180, 150, 310);
    glEnd();

     //kotak atas 9
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(180, 150, 310);
    glVertex3f(180, 315, 440);
    glVertex3f(240, 315, 440);
    glVertex3f(240, 150, 310);
    glEnd();

     //kotak atas 10
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(240, 150, 310);
    glVertex3f(240, 315, 440);
    glVertex3f(300, 315, 440);
    glVertex3f(300, 150, 310);
    glEnd();


    //kursi atas
    //SEMENTARA kursi bawah kanan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(300, 315, 440);
    glVertex3f(300, -15, 440);
    glVertex3f(-300, -15, 440);
    glVertex3f(-300, 315, 440);
    glEnd();

    /////////kursi//////////////
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.9);
    glVertex3f(330, -15, 150);
    glVertex3f(590, 315, 150);
    glVertex3f(300, 315, 440);
    glVertex3f(300, -15, 180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.9);
    glVertex3f(330, -15, -150);
    glVertex3f(590, 315, -150);
    glVertex3f(300, 315, -440);
    glVertex3f(300, -15, -180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.9);
    glVertex3f(-330, -15, -150);
    glVertex3f(-590, 315, -150);
    glVertex3f(-300, 315, -440);
    glVertex3f(-300, -15, -180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.9);
    glVertex3f(-330, -15, 150);
    glVertex3f(-590, 315, 150);
    glVertex3f(-300, 315, 440);
    glVertex3f(-300, -15, 180);
    glEnd();

    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(460, 150, 150);
    glVertex3f(460, 190, 150);
    glVertex3f(300, 190, 310);
    glVertex3f(300, 150, 310);
    glEnd();

     //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(475, 150, 150);
    glVertex3f(475, 190, 150);
    glVertex3f(300, 190, 325);
    glVertex3f(300, 150, 325);
    glEnd();

    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(460, 190, 150);
    glVertex3f(475, 190, 150);
    glVertex3f(300, 190, 325);
    glVertex3f(300, 190, 325);
    glEnd();

    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(460, 150, 150);
    glVertex3f(475, 150, 150);
    glVertex3f(300, 150, 325);
    glVertex3f(300, 150, 325);
    glEnd();
    //////////////////////////////
    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(460, 150, -150);
    glVertex3f(460, 190, -150);
    glVertex3f(300, 190, -310);
    glVertex3f(300, 150, -310);
    glEnd();

     //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(475, 150, -150);
    glVertex3f(475, 190, -150);
    glVertex3f(300, 190, -325);
    glVertex3f(300, 150, -325);
    glEnd();

    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(460, 190, -150);
    glVertex3f(475, 190, -150);
    glVertex3f(300, 190, -325);
    glVertex3f(300, 190, -325);
    glEnd();

    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(460, 150, -150);
    glVertex3f(475, 150, -150);
    glVertex3f(300, 150, -325);
    glVertex3f(300, 150, -325);
    glEnd();

    //////////////////////////////
    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-460, 150, -150);
    glVertex3f(-460, 190, -150);
    glVertex3f(-300, 190, -310);
    glVertex3f(-300, 150, -310);
    glEnd();

     //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-475, 150, -150);
    glVertex3f(-475, 190, -150);
    glVertex3f(-300, 190, -325);
    glVertex3f(-300, 150, -325);
    glEnd();

    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-460, 190, -150);
    glVertex3f(-475, 190, -150);
    glVertex3f(-300, 190, -325);
    glVertex3f(-300, 190, -325);
    glEnd();

    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-460, 150, -150);
    glVertex3f(-475, 150, -150);
    glVertex3f(-300, 150, -325);
    glVertex3f(-300, 150, -325);
    glEnd();

    //////////////////////////////
    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-460, 150, 150);
    glVertex3f(-460, 190, 150);
    glVertex3f(-300, 190, 310);
    glVertex3f(-300, 150, 310);
    glEnd();

     //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-475, 150, 150);
    glVertex3f(-475, 190, 150);
    glVertex3f(-300, 190, 325);
    glVertex3f(-300, 150, 325);
    glEnd();

    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-460, 190, 150);
    glVertex3f(-475, 190, 150);
    glVertex3f(-300, 190, 325);
    glVertex3f(-300, 190, 325);
    glEnd();

    //pagar pembatas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-460, 150, 150);
    glVertex3f(-475, 150, 150);
    glVertex3f(-300, 150, 325);
    glVertex3f(-300, 150, 325);
    glEnd();

    //1906
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(438, 125, -100);
    glVertex3f(355, 25, -100);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(408, 85, -20);
    glVertex3f(408, 85, -80);
    glVertex3f(438, 125, -80);
    glVertex3f(438, 125, -20);
    glVertex3f(355, 25, -20);
    glVertex3f(355, 25, -80);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(438, 125, 0);
    glVertex3f(438, 125, 50);
    glVertex3f(355, 25, 50);
    glVertex3f(355, 25, 0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(408, 85, 70);
    glVertex3f(408, 85, 120);
    glVertex3f(355, 25, 120);
    glVertex3f(355, 25, 70);
    glVertex3f(438, 125, 70);
    glVertex3f(438, 125, 120);
    glEnd();

}

void tiang_penyangga()
{
     //tiang dinding kanan1 (tiang 1)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(661, 344, 140);
    glVertex3f(661, -15, 140);
    glVertex3f(661, -15, 130);
    glVertex3f(661, 344, 130);
    glEnd();

    //tiang dinding kanan2 (tiang 1)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, 140);
    glVertex3f(661, 344, 140);
    glVertex3f(661, -15, 140);
    glVertex3f(615, -15, 140);
    glEnd();

    //tiang dinding kanan3 (tiang 1)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, 130);
    glVertex3f(661, 344, 130);
    glVertex3f(661, -15, 130);
    glVertex3f(615, -15, 130);
    glEnd();

    //tiang dinding kanan4 (bawah tiang 1)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, -15, 140);
    glVertex3f(661, -15, 140);
    glVertex3f(661, -15, 130);
    glVertex3f(615, -15, 130);
    glEnd();

    //tiang dinding kanan1 (tiang 2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(661, 344, 90);
    glVertex3f(661, -15, 90);
    glVertex3f(661, -15, 80);
    glVertex3f(661, 344, 80);
    glEnd();

    //tiang dinding kanan2 (tiang 2)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, 90);
    glVertex3f(661, 344, 90);
    glVertex3f(661, -15, 90);
    glVertex3f(615, -15, 90);
    glEnd();

    //tiang dinding kanan3 (tiang 2)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, 80);
    glVertex3f(661, 344, 80);
    glVertex3f(661, -15, 80);
    glVertex3f(615, -15, 80);
    glEnd();

    //tiang dinding kanan4 (bawah tiang 2)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, -15, 90);
    glVertex3f(661, -15, 90);
    glVertex3f(661, -15, 80);
    glVertex3f(615, -15, 80);
    glEnd();

    //tiang dinding kanan1 (tiang 3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(661, 344, 40);
    glVertex3f(661, -15, 40);
    glVertex3f(661, -15, 30);
    glVertex3f(661, 344, 30);
    glEnd();

    //tiang dinding kanan2 (tiang 3)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, 40);
    glVertex3f(661, 344, 40);
    glVertex3f(661, -15, 40);
    glVertex3f(615, -15, 40);
    glEnd();

    //tiang dinding kanan3 (tiang 3)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, 30);
    glVertex3f(661, 344, 30);
    glVertex3f(661, -15, 30);
    glVertex3f(615, -15, 30);
    glEnd();

    //tiang dinding kanan4 (bawah tiang 3)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, -15, 40);
    glVertex3f(661, -15, 40);
    glVertex3f(661, -15, 30);
    glVertex3f(615, -15, 30);
    glEnd();

    //tiang dinding kanan1 (tiang 4)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(661, 344, -10);
    glVertex3f(661, -15, -10);
    glVertex3f(661, -15, -20);
    glVertex3f(661, 344, -20);
    glEnd();

    //tiang dinding kanan2 (tiang 4)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, -10);
    glVertex3f(661, 344, -10);
    glVertex3f(661, -15, -10);
    glVertex3f(615, -15, -10);
    glEnd();

    //tiang dinding kanan3 (tiang 4)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, -20);
    glVertex3f(661, 344, -20);
    glVertex3f(661, -15, -20);
    glVertex3f(615, -15, -20);
    glEnd();

    //tiang dinding kanan4 (bawah tiang 4)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, -15, -10);
    glVertex3f(661, -15, -10);
    glVertex3f(661, -15, -20);
    glVertex3f(615, -15, -20);
    glEnd();

    //tiang dinding kanan1 (tiang 5)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(661, 344, -60);
    glVertex3f(661, -15, -60);
    glVertex3f(661, -15, -70);
    glVertex3f(661, 344, -70);
    glEnd();

    //tiang dinding kanan2 (tiang 5)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, -60);
    glVertex3f(661, 344, -60);
    glVertex3f(661, -15, -60);
    glVertex3f(615, -15, -60);
    glEnd();

    //tiang dinding kanan3 (tiang 5)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, -70);
    glVertex3f(661, 344, -70);
    glVertex3f(661, -15, -70);
    glVertex3f(615, -15, -70);
    glEnd();

    //tiang dinding kanan4 (bawah tiang 5)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, -15, -60);
    glVertex3f(661, -15, -60);
    glVertex3f(661, -15, -70);
    glVertex3f(615, -15, -70);
    glEnd();

    //tiang dinding kanan1 (tiang 6)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(661, 344, -110);
    glVertex3f(661, -15, -110);
    glVertex3f(661, -15, -120);
    glVertex3f(661, 344, -120);
    glEnd();

    //tiang dinding kanan2 (tiang 6)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, -110);
    glVertex3f(661, 344, -110);
    glVertex3f(661, -15, -110);
    glVertex3f(615, -15, -110);
    glEnd();

    //tiang dinding kanan3 (tiang 6)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, -120);
    glVertex3f(661, 344, -120);
    glVertex3f(661, -15, -120);
    glVertex3f(615, -15, -120);
    glEnd();

    //tiang dinding kanan4 (bawah tiang 6)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, -15, -110);
    glVertex3f(661, -15, -110);
    glVertex3f(661, -15, -120);
    glVertex3f(615, -15, -120);
    glEnd();
//////////////////////////////////////////////////
//tiang dinding kiri1 (tiang 1)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-661, 344, 140);
    glVertex3f(-661, -15, 140);
    glVertex3f(-661, -15, 130);
    glVertex3f(-661, 344, 130);
    glEnd();

    //tiang dinding kiri2 (tiang 1)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, 300, 140);
    glVertex3f(-661, 344, 140);
    glVertex3f(-661, -15, 140);
    glVertex3f(-615, -15, 140);
    glEnd();

    //tiang dinding kiri3 (tiang 1)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, 300, 130);
    glVertex3f(-661, 344, 130);
    glVertex3f(-661, -15, 130);
    glVertex3f(-615, -15, 130);
    glEnd();

    //tiang dinding kiri4 (bawah tiang 1)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, -15, 140);
    glVertex3f(-661, -15, 140);
    glVertex3f(-661, -15, 130);
    glVertex3f(-615, -15, 130);
    glEnd();

    //tiang dinding kiri1 (tiang 2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-661, 344, 90);
    glVertex3f(-661, -15, 90);
    glVertex3f(-661, -15, 80);
    glVertex3f(-661, 344, 80);
    glEnd();

    //tiang dinding kiri2 (tiang 2)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, 300, 90);
    glVertex3f(-661, 344, 90);
    glVertex3f(-661, -15, 90);
    glVertex3f(-615, -15, 90);
    glEnd();

    //tiang dinding kiri3 (tiang 2)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, 300, 80);
    glVertex3f(-661, 344, 80);
    glVertex3f(-661, -15, 80);
    glVertex3f(-615, -15, 80);
    glEnd();

    //tiang dinding kiri4 (bawah tiang 2)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, -15, 90);
    glVertex3f(-661, -15, 90);
    glVertex3f(-661, -15, 80);
    glVertex3f(-615, -15, 80);
    glEnd();

    //tiang dinding kiri1 (tiang 3)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-661, 344, 40);
    glVertex3f(-661, -15, 40);
    glVertex3f(-661, -15, 30);
    glVertex3f(-661, 344, 30);
    glEnd();

    //tiang dinding kiri2 (tiang 3)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, 300, 40);
    glVertex3f(-661, 344, 40);
    glVertex3f(-661, -15, 40);
    glVertex3f(-615, -15, 40);
    glEnd();

    //tiang dinding kiri3 (tiang 3)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, 300, 30);
    glVertex3f(-661, 344, 30);
    glVertex3f(-661, -15, 30);
    glVertex3f(-615, -15, 30);
    glEnd();

    //tiang dinding kiri4 (bawah tiang 3)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, -15, 40);
    glVertex3f(-661, -15, 40);
    glVertex3f(-661, -15, 30);
    glVertex3f(-615, -15, 30);
    glEnd();

    //tiang dinding kiri1 (tiang 4)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-661, 344, -10);
    glVertex3f(-661, -15, -10);
    glVertex3f(-661, -15, -20);
    glVertex3f(-661, 344, -20);
    glEnd();

    //tiang dinding kiri2 (tiang 4)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, 300, -10);
    glVertex3f(-661, 344, -10);
    glVertex3f(-661, -15, -10);
    glVertex3f(-615, -15, -10);
    glEnd();

    //tiang dinding kiri3 (tiang 4)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, 300, -20);
    glVertex3f(-661, 344, -20);
    glVertex3f(-661, -15, -20);
    glVertex3f(-615, -15, -20);
    glEnd();

    //tiang dinding kiri4 (bawah tiang 4)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, -15, -10);
    glVertex3f(-661, -15, -10);
    glVertex3f(-661, -15, -20);
    glVertex3f(-615, -15, -20);
    glEnd();

    //tiang dinding kiri1 (tiang 5)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-661, 344, -60);
    glVertex3f(-661, -15, -60);
    glVertex3f(-661, -15, -70);
    glVertex3f(-661, 344, -70);
    glEnd();

    //tiang dinding kiri2 (tiang 5)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, 300, -60);
    glVertex3f(-661, 344, -60);
    glVertex3f(-661, -15, -60);
    glVertex3f(-615, -15, -60);
    glEnd();

    //tiang dinding kiri3 (tiang 5)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, 300, -70);
    glVertex3f(-661, 344, -70);
    glVertex3f(-661, -15, -70);
    glVertex3f(-615, -15, -70);
    glEnd();

    //tiang dinding kiri4 (bawah tiang 5)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, -15, -60);
    glVertex3f(-661, -15, -60);
    glVertex3f(-661, -15, -70);
    glVertex3f(-615, -15, -70);
    glEnd();

    //tiang dinding kiri1 (tiang 6)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-661, 344, -110);
    glVertex3f(-661, -15, -110);
    glVertex3f(-661, -15, -120);
    glVertex3f(-661, 344, -120);
    glEnd();

    //tiang dinding kiri2 (tiang 6)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, 300, -110);
    glVertex3f(-661, 344, -110);
    glVertex3f(-661, -15, -110);
    glVertex3f(-615, -15, -110);
    glEnd();

    //tiang dinding kiri3 (tiang 6)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, 300, -120);
    glVertex3f(-661, 344, -120);
    glVertex3f(-661, -15, -120);
    glVertex3f(-615, -15, -120);
    glEnd();

    //tiang dinding kiri4 (bawah tiang 6)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-615, -15, -110);
    glVertex3f(-661, -15, -110);
    glVertex3f(-661, -15, -120);
    glVertex3f(-615, -15, -120);
    glEnd();
///////////////////////////////////////////

    //tiang dinding depan1 (tiang 1)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(661, 344, 140);
    glVertex3f(661, -15, 140);
    glVertex3f(661, -15, 130);
    glVertex3f(661, 344, 130);
    glEnd();

    //tiang dinding depan2 (tiang 1)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, 140);
    glVertex3f(661, 344, 140);
    glVertex3f(661, -15, 140);
    glVertex3f(615, -15, 140);
    glEnd();

    //tiang dinding depan3 (tiang 1)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, 130);
    glVertex3f(661, 344, 130);
    glVertex3f(661, -15, 130);
    glVertex3f(615, -15, 130);
    glEnd();

    //tiang dinding depan4 (bawah tiang 1)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, -15, 140);
    glVertex3f(661, -15, 140);
    glVertex3f(661, -15, 130);
    glVertex3f(615, -15, 130);
    glEnd();

    //tiang dinding depan1 (tiang 2)
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(661, 344, 90);
    glVertex3f(661, -15, 90);
    glVertex3f(661, -15, 80);
    glVertex3f(661, 344, 80);
    glEnd();

    //tiang dinding depan2 (tiang 2)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, 90);
    glVertex3f(661, 344, 90);
    glVertex3f(661, -15, 90);
    glVertex3f(615, -15, 90);
    glEnd();

    //tiang dinding depan3 (tiang 2)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, 300, 80);
    glVertex3f(661, 344, 80);
    glVertex3f(661, -15, 80);
    glVertex3f(615, -15, 80);
    glEnd();

    //tiang dinding depan4 (bawah tiang 2)
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(615, -15, 90);
    glVertex3f(661, -15, 90);
    glVertex3f(661, -15, 80);
    glVertex3f(615, -15, 80);
    glEnd();
}

void atap_stadion()
{
    //atap kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(665, 400, 350);
    glVertex3f(665, 460, 350);
    glVertex3f(330, 460, 350);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(665, 400, -350);
    glVertex3f(665, 460, -350);
    glVertex3f(330, 460, -350);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(1.0, 1.0, 1.0);
    glVertex3f(665, 460, 350);
    glVertex3f(330, 460, 350);
    glVertex3f(330, 460, -350);
    glVertex3f(665, 460, -350);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(665, 400, 350);
    glVertex3f(330, 460, 350);
    glVertex3f(330, 460, -350);
    glVertex3f(665, 400, -350);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(665, 400, 350);
    glVertex3f(665, 400, -350);
    glVertex3f(665, 460, -350);
    glVertex3f(665, 460, 350);
    glEnd();

    //atap kiri
    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-665, 400, 350);
    glVertex3f(-665, 460, 350);
    glVertex3f(-330, 460, 350);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-665, 400, -350);
    glVertex3f(-665, 460, -350);
    glVertex3f(-330, 460, -350);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-665, 460, 350);
    glVertex3f(-330, 460, 350);
    glVertex3f(-330, 460, -350);
    glVertex3f(-665, 460, -350);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-665, 400, 350);
    glVertex3f(-330, 460, 350);
    glVertex3f(-330, 460, -350);
    glVertex3f(-665, 400, -350);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(-665, 400, 350);
    glVertex3f(-665, 400, -350);
    glVertex3f(-665, 460, -350);
    glVertex3f(-665, 460, 350);
    glEnd();
    ///////////////////////
    //atap depan
    //atap kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(500, 400, -515);
    glVertex3f(500, 460, -515);
    glVertex3f(330, 460, -180);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-500, 400, -515);
    glVertex3f(-500, 460, -515);
    glVertex3f(-330, 460, -180);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(1.0, 1.0, 1.0);
    glVertex3f(500, 460, -515);
    glVertex3f(330, 460, -180);
    glVertex3f(-330, 460, -180);
    glVertex3f(-500, 460, -515);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(0.5, 0.5, 0.5);
    glVertex3f(500, 400, -515);
    glVertex3f(330, 460, -180);
    glVertex3f(-330, 460, -180);
    glVertex3f(-500, 400, -515);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, 400, -515);
    glVertex3f(500, 460, -515);
    glVertex3f(-500, 460, -515);
   glVertex3f(-500, 400, -515);
    glEnd();
    /////////////////////
    //atap belakang
    //atap kanan
    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(500, 400, 515);
    glVertex3f(500, 460, 515);
    glVertex3f(330, 460, 180);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-500, 400, 515);
    glVertex3f(-500, 460, 515);
    glVertex3f(-330, 460, 180);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(1.0, 1.0, 1.0);
    glVertex3f(500, 460, 515);
    glVertex3f(330, 460, 180);
    glVertex3f(-330, 460, 180);
    glVertex3f(-500, 460, 515);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(0.5, 0.5, 0.5);
    glVertex3f(500, 400, 515);
    glVertex3f(330, 460, 180);
    glVertex3f(-330, 460, 180);
    glVertex3f(-500, 400, 515);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(500, 400, 515);
    glVertex3f(500, 460, 515);
    glVertex3f(-500, 460, 515);
   glVertex3f(-500, 400, 515);
    glEnd();

    /////////////////
    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(330, 460, 350);
    glVertex3f(665, 400, 350);
     glVertex3f(500, 400, 515);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(330, 460, 350);
    glVertex3f(665, 460, 350);
     glVertex3f(500, 460, 515);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(665, 400, 350);
    glVertex3f(500, 400, 515);
    glVertex3f(500, 460, 515);
    glVertex3f(665, 460, 350);
    glEnd();
    ////////////////////////
    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(330, 460, -350);
    glVertex3f(665, 400, -350);
     glVertex3f(500, 400, -515);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(330, 460, -350);
    glVertex3f(665, 460, -350);
     glVertex3f(500, 460, -515);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(665, 400, -350);
    glVertex3f(500, 400, -515);
    glVertex3f(500, 460, -515);
    glVertex3f(665, 460, -350);
    glEnd();

    ////////////////////////
    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-330, 460, -350);
    glVertex3f(-665, 400, -350);
     glVertex3f(-500, 400, -515);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-330, 460, -350);
    glVertex3f(-665, 460, -350);
     glVertex3f(-500, 460, -515);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(-665, 400, -350);
    glVertex3f(-500, 400, -515);
    glVertex3f(-500, 460, -515);
    glVertex3f(-665, 460, -350);
    glEnd();

    ////////////////////////
    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-330, 460, 350);
    glVertex3f(-665, 400, 350);
     glVertex3f(-500, 400, 515);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-330, 460, 350);
    glVertex3f(-665, 460, 350);
     glVertex3f(-500, 460, 515);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2, 0.3, 0.8);
    glVertex3f(-665, 400, 350);
    glVertex3f(-500, 400, 515);
    glVertex3f(-500, 460, 515);
    glVertex3f(-665, 460, 350);
    glEnd();
}

void er_tampil(void)
{
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
        glClear(GL_COLOR_BUFFER_BIT);

    gedung();
    lapangan();
    kursi_pelatih();
    bendera_lapangan();
    gerbang_masuk();
    gerbang_keluar();
    papan_iklan();
    gawang();
    papan_score();
    kursi_penonton();
    tiang_penyangga();
    atap_stadion();

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
