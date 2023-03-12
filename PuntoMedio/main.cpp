#include <GL/glut.h>
#include <cmath>
#include <iostream>
#include <stdio.h>
using namespace std;

void Inicio(void){
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,640.0,0.0,480.0);
}
void PintarPixel(int x, int y){
	glBegin(GL_POINTS);
	glVertex2i(x,y);
	glEnd();
}

void PuntoMedio(int Xc,int Yc,int R){
	float Po;
	int DobleRadio;
	int K;
	int PK;
	int X=0;
	int Y;
	
	Po=lround(Yc/Xc)-R;
	cout << "X" <<" | "<< "Y"<<endl;
	
	PK=Po;
	Y=R;
	
	while(X<Y)
	{

		
		if(PK<0)
		{
			X++;
			PK=PK+(2*X)+1;
		}
		else
		{
		
			X++;
			Y--;
			PK=PK+(2*X)+1-(2*Y);
		
		}	
		int x2=Y;
		int y2=X;
		
		int x3=Y;
		int y3=-(X);
		
		int x4=X;
		int y4=-(Y);
		
		int x5=-(Y);
		int y5=-(X);
		
		int x6=-(X);
		int y6=-(Y);
		
		int x7=-(Y);
		int y7=X;
		
		int x8=-(X);
		int y8=	Y;	
		
		//cout<<x2<<" _ "<<y2<<endl;
		
		PintarPixel(X+300,Y+300);
		PintarPixel(x2+300,y2+300);
		PintarPixel(x3+300,y3+300);
		PintarPixel(x4+300,y4+300);
		PintarPixel(x5+300,y5+300);
		PintarPixel(x6+300,y6+300);
		PintarPixel(x7+300,y7+300);
		PintarPixel(x8+300,y8+300);
		
		//cout<<X<<" | "<<Y<<endl;
		
	}	
	DobleRadio=2*R;
	cout<<DobleRadio;
	int x1=0,y1=0;
	for(int i=1;i<=DobleRadio;i++){
		PintarPixel(x1+300,y1+300);
		x1=x1+1;
		y1=y1+1;
		cout<<x1<<" _ "<<y1<<endl;
		
	}
			
}
void display(){
	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glPointSize(5);
	PuntoMedio(250,250,125);
	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc,argv);
	glutInitWindowSize(640,480);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Demo 1");
	Inicio();		
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
