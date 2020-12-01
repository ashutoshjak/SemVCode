#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
  int gd=DETECT,gm;
  //initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  setcolor(WHITE);
  ellipse(300,150,190,270,102,200); //face
  ellipse(300,150,270,350,102,200);
  ellipse(300,185,360,180,100,80);

  ellipse(300,160,58,206,110,109); //hair
  arc(355,145,300,91,80);

  ellipse(240,200,0,360,17,8);  //eyes
  circle(241,202,5);
  arc(240,206,30,140,22);
  ellipse(350,200,0,360,17,8);
  circle(351,202,5);
  arc(350,206,30,140,22);

  ellipse(199,215,70,330,10,13); //ears
  ellipse(400,215,230,110,10,13);

  line(300,200,290,250);     //nose
  line(290,250,303,252);

  arc(300,275,201,340,30);  //mouth

  getch();
  return 0;
  closegraph();
}
