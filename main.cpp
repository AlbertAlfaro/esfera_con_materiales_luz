#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
int material=3;
void init(void)
{
	GLfloat punto_luz[]={-1.0,-2.0,1.0};
	GLfloat luz_ambiental[]={0.5,0.5,0.5};
	// Activamos la fuente de luz
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0); //Activamos las luces en 0
	glDepthFunc(GL_LESS); //comparación de profundidad
	glEnable(GL_DEPTH_TEST); //activa GL_DEPTH_TEST
	//glLightfv(GL_LIGHT0,GL_POSITION,punto_luz);
	//glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER,GL_FALSE);
	//glLightModelfv(GL_LIGHT_MODEL_AMBIENT,luz_ambiental);
	glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei) w, (GLsizei) h);
	// Activamos la matriz de proyeccion.
	glMatrixMode(GL_PROJECTION);
	// "limpiamos" esta con la matriz identidad.
	glLoadIdentity();
	// Usamos proyeccion ortogonal
	glOrtho(-300, 300, -300, 300, -300, 300);
	// Activamos la matriz de modelado/visionado.
	glMatrixMode(GL_MODELVIEW);
	// "Limpiamos" la matriz
	glLoadIdentity();
}
void tipo_material(void){
	if (material==3) {
		// Propiedades del material
		GLfloat mat_ambient[] = { 0.24725,0.1995,0.0745};
		GLfloat mat_diffuse[] = { 0.75164,0.60648,0.22648};
		GLfloat mat_specular[] = { 0.628281,0.555802,0.366065};
		GLfloat shine[]={40.8974f};
		// "Limpiamos" el frame buffer con el color de "Clear", en este
		// caso negro.
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glMatrixMode( GL_MODELVIEW_MATRIX );
		glLoadIdentity();
		// Rotacion de 25 grados en torno al eje x
		glRotated(25.0, 1.0, 0.0, 0.0);
		// Rotacion de -30 grados en torno al eje y
		glRotated(-30.0, 0.0, 1.0, 0.0);
		// Dibujamos una "Tetera" y le aplico el material
		glPushMatrix();
		//setMaterial
		glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
		glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
		glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		//glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		//glTranslatef(200,0,0);
	}
	if (material==1) {
		// Propiedades del material
		GLfloat mat_ambient[] = { 0.19125,0.0735,0.0225};
		GLfloat mat_diffuse[] = { 0.7038,0.27048,0.0828};
		GLfloat mat_specular[] = { 0.256777,0.137622,0.086014};
		GLfloat shine[]={0.1f};
		// "Limpiamos" el frame buffer con el color de "Clear", en este
		// caso negro.
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glMatrixMode( GL_MODELVIEW_MATRIX );
		glLoadIdentity();
		// Rotacion de 25 grados en torno al eje x
		glRotated(25.0, 1.0, 0.0, 0.0);
		// Rotacion de -30 grados en torno al eje y
		glRotated(-30.0, 0.0, 1.0, 0.0);
		// Dibujamos una "Tetera" y le aplico el material
		glPushMatrix();
		//setMaterial
		glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
		glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
		glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		//glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		//glTranslatef(200,0,0);
	}
	if (material==2) {
		// Propiedades del material
		GLfloat mat_ambient[] = { 0.0,0.0,0.0};
		GLfloat mat_diffuse[] = { 0.5,0.0,0.0};
		GLfloat mat_specular[] = { 0.7,0.6,0.6};
		GLfloat shine[]={0.25f};
		// "Limpiamos" el frame buffer con el color de "Clear", en este
		// caso negro.
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glMatrixMode( GL_MODELVIEW_MATRIX );
		glLoadIdentity();
		// Rotacion de 25 grados en torno al eje x
		glRotated(25.0, 1.0, 0.0, 0.0);
		// Rotacion de -30 grados en torno al eje y
		glRotated(-30.0, 0.0, 1.0, 0.0);
		// Dibujamos una "Tetera" y le aplico el material
		glPushMatrix();
		//setMaterial
		glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
		glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
		glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		//glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		//glTranslatef(200,0,0);
	}
	if (material==4) {
		// Propiedades del material
		GLfloat mat_ambient[] = {0.329412,0.223529,0.027451};
		GLfloat mat_diffuse[] = { 0.780392,0.568627,0.113725};
		GLfloat mat_specular[] = { 0.992157,0.941176,0.807843};
		GLfloat shine[]={0.21794872f};
		// "Limpiamos" el frame buffer con el color de "Clear", en este
		// caso negro.
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glMatrixMode( GL_MODELVIEW_MATRIX );
		glLoadIdentity();
		// Rotacion de 25 grados en torno al eje x
		glRotated(25.0, 1.0, 0.0, 0.0);
		// Rotacion de -30 grados en torno al eje y
		glRotated(-30.0, 0.0, 1.0, 0.0);
		// Dibujamos una "Tetera" y le aplico el material
		glPushMatrix();
		//setMaterial
		glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
		glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
		glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		//glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		//glTranslatef(200,0,0);
	}
	if (material==5) {
		// Propiedades del material
		GLfloat mat_ambient[] = {0.19225,0.19225,0.19225};
		GLfloat mat_diffuse[] = { 0.50754,0.50754,0.50754};
		GLfloat mat_specular[] = { 0.508273,0.508273,0.508273};
		GLfloat shine[]={0.4f};
		// "Limpiamos" el frame buffer con el color de "Clear", en este
		// caso negro.
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glMatrixMode( GL_MODELVIEW_MATRIX );
		glLoadIdentity();
		// Rotacion de 25 grados en torno al eje x
		glRotated(25.0, 1.0, 0.0, 0.0);
		// Rotacion de -30 grados en torno al eje y
		glRotated(-30.0, 0.0, 1.0, 0.0);
		// Dibujamos una "Tetera" y le aplico el material
		glPushMatrix();
		//setMaterial
		glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
		glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
		glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		//glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		//glTranslatef(200,0,0);
	}

}

void display(void)
{
	tipo_material();
	glShadeModel(GL_SMOOTH);
	glutSolidSphere(150,20,20);
	glFlush();
}
// Función para controlar teclas normales del teclado.
void keyboard(unsigned char key, int x, int y)
{
    //control de teclas que hacen referencia a Escalar y transladar el cubo en los ejes X,Y,Z.
    switch (key)
    {
    case 'c':
        material=1;
        break;
    case 'r':
		material=2;
		break;
	case 'g':
		material=3;
		break;
	case 'b':
		material=4;
		break;
	case 's':
		material=5;
		break;
     }
    glutPostRedisplay();
}

int main(int argc, char **argv)
{
	// Inicializo OpenGL
	glutInit(&argc, argv);
	// Activamos buffer simple y colores del tipo RGB
	glutInitDisplayMode (GLUT_RGB | GLUT_DEPTH);
	// Definimos una ventana de medidas 800 x 600 como ventana
	// de visualizacion en pixels
	glutInitWindowSize (800, 600);
	// Posicionamos la ventana en la esquina superior izquierda de
	// la pantalla.
	glutInitWindowPosition (0, 0);
	// Creamos literalmente la ventana y le adjudicamos el nombre que se
	// observara en su barra de titulo.
	glutCreateWindow ("Esfera con materiales");
	// Inicializamos el sistema
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}