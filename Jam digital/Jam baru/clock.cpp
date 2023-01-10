#include <glut.h>
#include <time.h>
int detik=0,menit=0,jam=0;
int mode=1;
int pause=1;
int angka[10][8];
void gambarDigit(int nilai,int awal)
{
int panjangSetengahGaris=15,jarakTerluar=40,posisiVertikalSamping=20,jarakSamping=20;
glLineWidth(10);
glBegin(GL_LINES);
if(angka[nilai][4]==1)
{
glVertex2i(awal-panjangSetengahGaris,0);
glVertex2i(awal+panjangSetengahGaris,0);
}
if(angka[nilai][1]==1)
{
glVertex2i(awal-panjangSetengahGaris,jarakTerluar);
glVertex2i(awal+panjangSetengahGaris,jarakTerluar);
}
if(angka[nilai][7]==1)
{
glVertex2i(awal-panjangSetengahGaris,-jarakTerluar);
glVertex2i(awal+panjangSetengahGaris,-jarakTerluar);
}
if(angka[nilai][2]==1)
{
glVertex2i(awal-jarakSamping,panjangSetengahGaris+posisiVertikalSamping);
glVertex2i(awal-jarakSamping,-panjangSetengahGaris+posisiVertikalSamping);
}
if(angka[nilai][3]==1)
{
glVertex2i(awal+jarakSamping,panjangSetengahGaris+posisiVertikalSamping);
glVertex2i(awal+jarakSamping,-panjangSetengahGaris+posisiVertikalSamping);
}
if(angka[nilai][5]==1)
{
glVertex2i(awal-jarakSamping,panjangSetengahGaris-posisiVertikalSamping);
glVertex2i(awal-jarakSamping,-panjangSetengahGaris-posisiVertikalSamping);
}
if(angka[nilai][6]==1)
{
glVertex2i(awal+jarakSamping,panjangSetengahGaris-posisiVertikalSamping);
glVertex2i(awal+jarakSamping,-panjangSetengahGaris-posisiVertikalSamping);
}
glEnd();
}
void pecah(int status,int kanan,int kiri)
{
int nilai,digit1,digit2;
if(status==1)
nilai=detik;
else if(status==2)
nilai=menit;
else if(status==3)
nilai=jam;
if(nilai<10)
{
digit1=nilai;
digit2=0;
}
else
{
if(nilai<20)
{
digit1=nilai-10;
digit2=1;
}
else if(nilai>=20 && nilai<30)
{
digit1=nilai-20;
digit2=2;
}
else if(nilai>=30 && nilai<40)
{
digit1=nilai-30;
digit2=3;
}
else if(nilai>=40 && nilai<50)
{
digit1=nilai-40;
digit2=4;
}
else if(nilai>=50 && nilai<60)
{
digit1=nilai-50;
digit2=5;
}
else
{
digit1=nilai-60;
digit2=6;
}
}
gambarDigit(digit1,kanan);
gambarDigit(digit2,kiri);
}
void gambarAngka(int status)
{
if(status==1)
pecah(status,135,85);
else if(status==2)
pecah(status,25,-25);
else
pecah(status,-85,-135);
}
void gambarTitik()
{
if(mode==1)
{
if(detik%2==0)
glColor3f(1,1,1);
else
glColor3f(0,0,0);
}
if(mode==0)
{
if(menit%2==0)
glColor3f(1,1,1);
else
glColor3f(0,0,0);
}
glPointSize(12);
glBegin(GL_POINTS);
glVertex2i(-55,-30);
glVertex2i(-55,30);
glVertex2i(55,-30);
glVertex2i(55,30);
glEnd();
glColor3f(1,1,1);
}
void gambar(void)
{
glClear(GL_COLOR_BUFFER_BIT);
gambarAngka(1);
gambarAngka(2);
gambarAngka(3);
gambarTitik();
glFlush();
}
void waktu(int value)
{
if(mode==1)
{
time_t rawtime;
struct tm * timeinfo;
time ( &rawtime );
timeinfo = localtime ( &rawtime );
jam=timeinfo->tm_hour;
menit=timeinfo->tm_min;
detik=timeinfo->tm_sec;
}
else if(mode==0)
{
if(pause==0)
{
detik++;
if(detik==60)
{
detik=0;
menit++;
}
if(menit==60)
{
menit=0;
jam++;
}
if(jam==60)
jam=0;
}
}
glutPostRedisplay();
glutTimerFunc(10,waktu,value);
}
void inisialisasi()
{
for(int x=0;x<=10;x++)
{
for(int y=0;y<=8;y++)
{
angka[x][y]=0;
}
}
}
void isiNilai()
{
angka[0][1]=angka[0][2]=angka[0][3]=angka[0][5]=angka[0][6]=angka[0][7]=1;
angka[1][3]=angka[1][6]=1;
angka[2][1]=angka[2][3]=angka[2][4]=angka[2][5]=angka[2][7]=1;
angka[3][1]=angka[3][3]=angka[3][4]=angka[3][6]=angka[3][7]=1;
angka[4][2]=angka[4][3]=angka[4][4]=angka[4][6]=1;
angka[5][1]=angka[5][2]=angka[5][4]=angka[5][6]=angka[5][7]=1;
angka[6][2]=angka[6][4]=angka[6][5]=angka[6][6]=angka[6][7]=1;
angka[7][1]=angka[7][3]=angka[7][6]=1;
angka[8][1]=angka[8][2]=angka[8][3]=angka[8][4]=angka[8][5]=angka[8][6]=angka[8][7]=1;
angka[9][1]=angka[9][2]=angka[9][3]=angka[9][4]=angka[9][6]=1;
}
void keyboard(unsigned char key,int x,int y)
{
if(key==’j’)
mode=1;
if(key==’t’)
{
detik=0;
menit=0;
jam=0;
mode=0;
}
if(mode==0)
{
if(key==’p’)
pause=1;
else if(key==’s’)
pause=0;
else if(key==’r’)
{
detik=0;
menit=0;
jam=0;
}
}
}
void main (int __argc, char **__argv)
{
inisialisasi();
isiNilai();
glutInit(&__argc, __argv);
glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
glutInitWindowPosition(400,250);
glutInitWindowSize(650,200);
glutCreateWindow(“Jam Digital Oleh Brammuda Darwan Pradana”);
gluOrtho2D(-170,170,-60,60);
glutDisplayFunc(gambar);
glutTimerFunc(1,waktu,0);
glutKeyboardFunc(keyboard);
glutMainLoop();
}
