
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

#include "texture.h"

// Define a constant for the value of PI
#define GL_PI 3.1415f

GLfloat xRot = 0.0f;
GLfloat yRot = 0.0f;

GLfloat ballXPos = 0;
GLfloat busXPos = 0;
int bicycleXPos = 0;

GLuint texture1;

// Called to draw scene
void RenderScene(void)
{
  // Clear the window with current clearing color
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  glPushMatrix();
  glRotatef(xRot, 1.0f, 0.0f, 0.0f);
  glRotatef(yRot, 0.0f, 1.0f, 0.0f);
	
	glPushMatrix();

	glColor3f(255,0,0);
	glTranslatef(0,0,-20);
	glScalef(100,1,40);
  glutSolidCube(1);	

	glPopMatrix();

	glPushMatrix();

	glColor3f(255,255,255);
	glTranslatef(0,0,1);
	glScalef(100,1,2);
  glutSolidCube(1);
	
	glPopMatrix();
	
	//buszmegálló	
	//hátsó fal
	glPushMatrix();
	
	glColor4f(255,255,255,0.5);
	glTranslatef(0,17.5,-30);
	glScalef(50,35,1);
  glutSolidCube(1);

	glPopMatrix();

	//oldalfalak
	glPushMatrix();
	
	glColor4f(255,255,255,0.5);
	glTranslatef(-27,17.5,-21.5);
	glScalef(1,35,15);
  glutSolidCube(1);

	glPopMatrix();
	
	
	glPushMatrix();
	
	glColor4f(255,255,255,0.5);
	glTranslatef(27,17.5,-21.5);
	glScalef(1,35,15);
  glutSolidCube(1);

	glPopMatrix();

	//tető
	glPushMatrix();
	glColor3f(0,0,255);
	glTranslatef(0,36,-22.5);
	glScalef(57,2,22);
	glutSolidCube(1);
	
	glPopMatrix();

	glPushMatrix();
	
	glColor3f(255,255,255);
	glTranslatef(-10.5,6,-26.5);
	glScalef(25,1,6);
  glutSolidCube(1);

	glPopMatrix();

	glPushMatrix();
	
	glColor3f(0,255,0);
	glTranslatef(-20,5,-21);
	glScalef(2,8,1);
  glutSolidCube(1);

	glPopMatrix();

	glPushMatrix();
	
	glColor3f(0,255,0);
	glTranslatef(-15,5,-21);
	glScalef(2,8,1);
  glutSolidCube(1);

	glPopMatrix();

	//lábfejek
	glPushMatrix();
	
	glColor3f(0,255,0);
	glTranslatef(-20,1,-20);
	glScalef(2,2,2);
	glutSolidCube(1);
	
	glPopMatrix();

	glPushMatrix();
	
	glColor3f(0,255,0);
	glTranslatef(-15,1,-20);
	glScalef(2,2,2);
	glutSolidCube(1);
	
	glPopMatrix();
	
	//combok
	glPushMatrix();
	
	glColor3f(0,255,0);
	glTranslatef(-20,8,-25);
	glRotatef(-5, 1.0f, 0.0f, 0.0f);
	glScalef(2,2,8);
	
  glutSolidCube(1);

	glPopMatrix();

	glPushMatrix();
	
	glColor3f(0,255,0);
	glTranslatef(-15,8,-25);
	glRotatef(-5, 1.0f, 0.0f, 0.0f);
	glScalef(2,2,8);
	
  glutSolidCube(1);

	glPopMatrix();
	
	//glPushMatrix();
	
	//glRotatef(5,1,0,0);

	//felsőtest

	glPushMatrix();
	
	glColor3f(0,255,0);
	glTranslatef(-17.5,11,-28);
	glScalef(7,10,3);
	
  glutSolidCube(1);

	glPopMatrix();

	//nyak
	glPushMatrix();
	
	glColor3f(0,255,0);
	glTranslatef(-17.5,16,-28);
	glScalef(2,1,2);
	
  glutSolidCube(1);

	glPopMatrix();

	//fej
	glPushMatrix();
	
	glColor3f(0,255,0);
	glTranslatef(-17.5,19,-28);
	//glScalef(3,2,2);
	
  glutSolidSphere(2.5,20,20);

	glPopMatrix();


	//bicikli

	glPushMatrix();

	glTranslatef(bicycleXPos,0,3);	

	//bicikli kerekek
	glPushMatrix();
	
	glColor3f(0,255,0);

	glTranslatef(-25,5,-10);
	glRotatef(-bicycleXPos*3,0,0,1);
	glColor3f(0,255,0);
	glutSolidTorus(.5,5,8,8); 
	
	glPopMatrix();

	glPushMatrix();

	glTranslatef(-42,5,-10);
	glRotatef(-bicycleXPos*3,0,0,1);
	glutSolidTorus(.5,5,8,8);

	glPopMatrix();
	

	//kormányrúd
	glPushMatrix();
	
	glTranslatef(-40,9,-10);
	glRotatef(-30,0,0,1);
	glScalef(1,10,1);
	
	glutSolidCube(1);

	glPopMatrix();


  //váz
	glPushMatrix();

	glTranslatef(-32,8,-10);
	glRotatef(-22,0,0,1);
	glScalef(16,1,1);
	glutSolidCube(1);	

	glPopMatrix();

	//ülésrúd
	glPushMatrix();
	
	glTranslatef(-33,9,-10);
	glRotatef(-15,0,0,1);
	glScalef(1,8,1);
	glutSolidCube(1);	

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-32,13,-10);
	glScalef(2,1,2);
	glutSolidCube(1);

	glPopMatrix();

	//kormányrúd
	glPushMatrix();
	
	glTranslatef(-37,13,-10);
	glScalef(1,1,8);
	glutSolidCube(1);

	glPopMatrix();

	//bal pedál
	glPushMatrix();
	glColor3f(255,0,0);
	glTranslatef(-34,4,-9);
	glScalef(1,4,1);
	glutSolidCube(1);	

	glPopMatrix();

	//jobb pedál
	glPushMatrix();

	glColor3f(255,0,0);
	glTranslatef(-34,4,-11);
	glScalef(1,4,1);
	glutSolidCube(1);	

	glPopMatrix();

	//biciklis ember

	glPushMatrix();

	glColor3f(0,0,255);
	glTranslatef(-34,0,0);

	//bal láb
	glPushMatrix();

	glTranslatef(0,8,-8);
	
	if(bicycleXPos % 10 <= 5) {
		glRotatef(-15,0,0,1);
		glTranslatef(0,2,0);
		glScalef(2,10,2);

	} else {
		glRotatef(-15,0,0,1);
		glScalef(2,12,2);
	}
	
	glutSolidCube(1);

	glPopMatrix();

	//jobb láb
	glPushMatrix();

	glTranslatef(0,8,-12);

	if(bicycleXPos % 10 <= 5) {
		glRotatef(-15,0,0,1);
		glTranslatef(0,2,0);
		glScalef(2,10,2);

	} else {
		glRotatef(-15,0,0,1);
		glScalef(2,12,2);
	}

	glutSolidCube(1);

	glPopMatrix();

	//felső test
	glPushMatrix();

	glTranslatef(1,18,-10);
	glScalef(2,10,6);
	glutSolidCube(1);

	glPopMatrix();

	//nyak
	glPushMatrix();

	glTranslatef(1,23,-10);
	glScalef(2,1,3);
	glutSolidCube(1);

	glPopMatrix();

	//fej
	glPushMatrix();
	
	glTranslatef(1,26,-10);
	glutSolidSphere(2.5,20,20);
	
	glPopMatrix();

	//bal kar
	glPushMatrix();

	glColor3f(255,0,0);
	glTranslatef(-1,18,-6);
	glRotatef(-22,0,0,1);
	glScalef(2,11,2);
	glutSolidCube(1);	

	glPopMatrix();

	//jobb kar
	glPushMatrix();

	glColor3f(255,0,0);
	glTranslatef(-1,18,-14);
	glRotatef(-22,0,0,1);
	glScalef(2,11,2);
	glutSolidCube(1);	

	glPopMatrix();

	glPopMatrix();

	glPopMatrix();

	//lámpaoszlop
	
	glPushMatrix();

	glTranslatef(35,22,-20);
	
	//rúd
	glPushMatrix();
		
	glScalef(2,44,2);
	glutSolidCube(1);

	glPopMatrix();

	//búra
	glPushMatrix();
	
	glColor3f(255,0,0);
	glTranslatef(0,22,2);	
	glScalef(3,2,6);
	glutSolidCube(1);

	glPopMatrix();

	glPopMatrix();

	//busz

	glPushMatrix();
	glTranslatef(100 - busXPos,19.5,19.5);	

	glPushMatrix();
	
	glColor3f(0,255,0);
	
	glScalef(96,35,35);
	glutSolidCube(1);
	
	glPopMatrix();

	//kerekek

	glPushMatrix();
	
	glColor3f(255,0,0);

	glTranslatef(-43,-18.5,16.5);
	glutSolidTorus(1.5,1.5,14,14); 

	glPopMatrix();

	glPushMatrix();
	
	glColor3f(255,0,0);

	glTranslatef(-43,-18.5,-16.5);
	glutSolidTorus(1.5,1.5,14,14); 

	glPopMatrix();

	glPushMatrix();
	
	glColor3f(255,0,0);

	glTranslatef(43,-18.5,-16.5);
	glutSolidTorus(1.5,1.5,14,14); 

	glPopMatrix();

	glPushMatrix();
	
	glColor3f(255,0,0);

	glTranslatef(43,-18.5,16.5);
	glutSolidTorus(1.5,1.5,14,14); 

	glPopMatrix();

	//szélvédő
	glPushMatrix();
	
	glColor3f(0,0,255);
	glTranslatef(-48,6,0);
	glScalef(1,18,33);
	glutSolidCube(1);
	
	glPopMatrix();
	
	//bal oldali ablakok
	glPushMatrix();
	
	glTranslatef(0,6,17.5);
	glScalef(90,18,1);	
	glutSolidCube(1);

	glPopMatrix();

	//hátsó ablak
	glPushMatrix();

	glTranslatef(48,6,0);
	glScalef(1,18,33);
	glutSolidCube(1);

	glPopMatrix();

	//jobb oldali ablakok
	glPushMatrix();
	
	glTranslatef(0,6,-17.5);
	glScalef(50,18,1);	
	glutSolidCube(1);

	glPopMatrix();

	//első ajtó
	glPushMatrix();
	glColor3f(255,0,0);
	glTranslatef(-39,0,-17.5);
	glScalef(15,32,1);	
	glutSolidCube(1);

	glPopMatrix();

	glPushMatrix();
	//hátsó ajtó	

	glColor3f(255,0,0);
	glTranslatef(39,0,-17.5);
	glScalef(15,32,1);	
	glutSolidCube(1);
	
	glPopMatrix();

	glPopMatrix();

	//labda
	glPushMatrix();

	glColor3f(255,255,255);
	glEnable( GL_TEXTURE_2D );
	glBindTexture( GL_TEXTURE_2D, texture1);

	glEnable(GL_TEXTURE_GEN_S);
	glEnable(GL_TEXTURE_GEN_T);
	glTexGeni(GL_S, GL_TEXTURE_GEN_MODE, GL_OBJECT_LINEAR);
	glTexGeni(GL_T, GL_TEXTURE_GEN_MODE, GL_SPHERE_MAP);
	glTranslatef(50-ballXPos,3,-35);
	glutSolidSphere(2.5,20,20);

	glDisable(GL_TEXTURE_2D);

	glPopMatrix();

	glPopMatrix();
  // >> Modellezo programresz

  // ...

  // << Modellezo programresz
  
  // Flush drawing commands
  glutSwapBuffers();
}

// This function does any needed initialization on the rendering
// context. 
void SetupRC()
{
  // Black background
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f );
  glEnable(GL_DEPTH_TEST);	
	
  glEnable (GL_BLEND);
  glBlendFunc (GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);

	texture1 = TextureLoad("football.bmp", GL_FALSE, GL_LINEAR, GL_LINEAR, GL_REPEAT);
  glEnable(GL_TEXTURE_2D);
}

void SpecialKeys(int key, int x, int y)
{
  // ...
  int state;

  if(key == GLUT_KEY_UP)
    xRot-= 5.0f;
  
  if(key == GLUT_KEY_DOWN)
    xRot += 5.0f;
  
  if(key == GLUT_KEY_LEFT)
    yRot -= 5.0f;
  
  if(key == GLUT_KEY_RIGHT)
    yRot += 5.0f;

	if(key == GLUT_KEY_F3) {
		bicycleXPos -= 1;
	}

	if(key == GLUT_KEY_F4) {
		bicycleXPos += 1;
	}
  
  if(xRot > 356.0f)
    xRot = 0.0f;
  
  if(xRot < 0.0f)
    xRot = 355.0f;
  
  if(yRot > 356.0f)
    yRot = 0.0f;
  
  if(yRot < -1.0f)
    yRot = 355.0f;

  printf("Funkciobillentyu lenyomva, kodja %d, pozicio (%d,%d). ", key, x, y);
  state = glutGetModifiers();
  if(state & GLUT_ACTIVE_SHIFT)
    printf("SHIFT lenyomva. ");
  if(state & GLUT_ACTIVE_CTRL)
    printf("CTRL lenyomva. ");
  if(state & GLUT_ACTIVE_ALT)
    printf("ALT lenyomva. ");
  printf("\n");
  fflush(stdout);

  // Refresh the Window
  glutPostRedisplay();
}

void Keyboard(unsigned char key, int x, int y)
{
  // ...
  int state;

  printf("Billentyu lenyomva, kodja %c, pozicio (%d,%d). ", key, x, y);
  state = glutGetModifiers();
  if(state & GLUT_ACTIVE_SHIFT)
    printf("SHIFT lenyomva. ");
  if(state & GLUT_ACTIVE_CTRL)
    printf("CTRL lenyomva. ");
  if(state & GLUT_ACTIVE_ALT)
    printf("ALT lenyomva. ");
  printf("\n");
  fflush(stdout);

  glutPostRedisplay();
}

void Timer(int value)
{
  printf("Timer esemeny (%d)\n", value);

  ballXPos += 1;

  if(ballXPos <= 70) {
  	glutPostRedisplay();
  	glutTimerFunc(100 + ballXPos, Timer, value + 1);

  }
}

void Timer2(int value) {

	//busXPos += 1;

	if(busXPos <= 100) {
  	//	glutPostRedisplay();
  	//	glutTimerFunc(100, Timer2, value + 1);
  	}
}

void Idle()
{

  glutPostRedisplay();
}

void ChangeSizeOrtho(int w, int h)
{
  GLfloat nRange = 50.0f;
  
  // Prevent a divide by zero
  if(h == 0)
    h = 1;
  
  // Set Viewport to window dimensions
  glViewport(0, 0, w, h);
  
  // Reset projection matrix stack
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  
  // Establish clipping volume (left, right, bottom, top, near, far)
  if (w <= h) 
    glOrtho (-nRange, nRange, -nRange*h/w, nRange*h/w, -nRange, nRange);
  else 
    glOrtho (-nRange*w/h, nRange*w/h, -nRange, nRange, -nRange, nRange);
  
  // Reset Model view matrix stack
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
}

void ChangeSizePerspective(GLsizei w, GLsizei h)
{
  GLfloat fAspect;
  
  // Prevent a divide by zero
  if(h == 0)
    h = 1;
  
  // Set Viewport to window dimensions
  glViewport(0, 0, w, h);
  
  fAspect = (GLfloat)w/(GLfloat)h;
  
  // Reset coordinate system
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  
  // Produce the perspective projection
  gluPerspective(60.0f,    // fovy
		 fAspect,  // aspect
		 10.0,     // zNear
		 100.0     // zFar
		 );
  gluLookAt(0.0, 0.0, 50.0, // eye
	    0.0, 0.0, 0.0,  // center
	    0.0, 1.0, 0.0   // up
	    );
  
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
}

int main(int argc, char* argv[])
{
  // >> Inicializalas

  glutInit(&argc, argv);
	glutInitWindowSize(600,600);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  //glutInitWindowSize(300, 300);
  glutCreateWindow("GLUT Alap");

  // << Inicializalas

  // >> Callback fuggvenyek

  glutReshapeFunc(ChangeSizeOrtho); // Parhuzamos vetites
  //glutReshapeFunc(ChangeSizePerspective); // Perspektiv vetites

  glutSpecialFunc(SpecialKeys);
  glutKeyboardFunc(Keyboard);
  glutDisplayFunc(RenderScene);
  glutTimerFunc(100, Timer, 1);
  glutTimerFunc(1000, Timer2, 1);
  //glutTimerFunc(1000, Timer, 1); // 1 mp mulva meghivodik a Timer() fuggveny
  //glutIdleFunc(Idle); // Idle(), ha nem tortenik semmi
  
  // << Callback fuggvenyek

  SetupRC();
  glutMainLoop();
  
  return 0;
}

