#include <stdio.h>
#include <stdlib.h>

void Fractions(void)
{
        char v;
    char h;
    int a;
    int b;
    int c;
    int d;

    int e;
    int f;

    int g;
    int y;
    int u;
    int t;
    int q;
    int o;
    int w;
    int r;
    int x;
    int p;
    int zapasowa_1;
    int zapasowa_2;

    printf("What fraction form do you want to do / division * multiplication + addition -subtraction \n");
    scanf("%c",&h);



switch(h)
{
case '/' :
///////////////////////
    printf("\n");
    printf("a   c\n");
    printf("- : -\n");
    printf("b   d\n \n");
//////////////////////////////
//////////////

    printf("Enter data a \n");
    scanf("%d",&a);
    printf("Enter data b \n");
    scanf("%d",&b);
    printf("Enter data c \n");
    scanf("%d",&c);
    printf("Enter data d \n");
    scanf("%d",&d);
//////////////////////////////
////////////////////
    e = a*d;

    f = b*c;
    printf("\n");
    printf("%d     %d \n",a,d);
    printf("-  *  - \n");
    printf("%d     %d \n",b,c);
//////////////////////////////
/////////////////////////
    printf("\n");
    printf("%d \n",e);
    printf("- \n");
    printf("%d \n",f);
///////////////////////////////
break;




case '*' :
/////////////////////////
    printf("\n");
    printf("a   c\n");
    printf("- * -\n");
    printf("b   d\n \n");
///////////////////////////////
///////////////
    printf("Enter data a \n");
    scanf("%d",&a);
    printf("Enter data b \n");
    scanf("%d",&b);
    printf("Enter data c \n");
    scanf("%d",&c);
    printf("Enter data d \n");
    scanf("%d",&d);
///////////////////////////////
/////////////////////
    e = a*c;
    f = b*d;
///////////////////////////////
//////////////////////////

    printf("\n");
    printf("%d \n",e);
    printf("- \n");
    printf("%d \n",f);
///////////////////////////////
break;


case '+' :

    printf("Enter data a \n");
    scanf("%i",&a);
    printf("Enter data b \n");
    scanf("%i",&b);
    printf("Enter data c \n");
    scanf("%i",&c);
    printf("Enter data d \n");
    scanf("%i",&d);

    if(b == d)
    {
      e = a+c;
      f = d;


    printf("\n");
    printf("%d \n",e);
    printf("- \n");
    printf("%d \n",f);

    }

    if(b != d)
    {












    if(b/d >= 2)
    {
////////////////////////////////////////////////////////////////////////

         e = b / d;

         f = e;
         y = f * c;
         u = y + a;
///////////////////////////////////
         printf("\n");
         printf("%d \n",u);
         printf("- \n");
         printf("%d \n",b);

///////////////////////////////////////
break;
    }

    if(d/b >= 2)
    {
////////////////////////////////////////////////////////////////////////

         e = d / b;

         f = e;
         y = f * a;
         u = y - c;
///////////////////////////////////
         printf("\n");
         printf("%d \n",u);
         printf("- \n");
         printf("%d \n",d);
         break;

///////////////////////////////////////
    }


       if(b%d!=0 || d%b!=0)
       {
          o = b;
          w = d;
          e = b * d;

          r = e / b;
          y = e / d;


          x = r * a;
          g = y * c;

          q = x + g;

         printf("\n");
         printf("%d \n",q);
         printf("- \n");
         printf("%d \n",e);


       }












    }




break;

case '-' :







    printf("Enter data a \n");
    scanf("%i",&a);
    printf("Enter data b \n");
    scanf("%i",&b);
    printf("Enter data c \n");
    scanf("%i",&c);
    printf("Enter data d \n");
    scanf("%i",&d);

        if(b == d)
    {
      e = a-c;
      f = d;


    printf("\n");
    printf("%d \n",e);
    printf("- \n");
    printf("%d \n",f);

    }



if(b != d)
{


    if(b/d >= 2)
    {
////////////////////////////////////////////////////////////////////////

         e = b / d;

         f = e;
         y = f * c;
         u = y - a;
///////////////////////////////////
         printf("\n");
         printf("%d \n",u);
         printf("- \n");
         printf("%d \n",b);

///////////////////////////////////////
break;
    }

    if(d/b >= 2)
    {
////////////////////////////////////////////////////////////////////////

         e = d / b;

         f = e;
         y = f * a;
         u = y - c;
///////////////////////////////////
         printf("\n");
         printf("%d \n",u);
         printf("- \n");
         printf("%d \n",d);
         break;

///////////////////////////////////////
    }




       if(b%d!=1 || d%b!=1)
       {
          o = b;
          w = d;
          e = b * d;

          r = e / b;
          y = e / d;


          x = r * a;
          g = y * c;

          q = x - g;

         printf("\n");
         printf("%d \n",q);
         printf("- \n");
         printf("%d \n",e);


       }


}
}
}

void figures_field(void)
{
    char no;
    float er;
    float et;
    float ey;

    float qe;
    float qr;
    float qt;

    float ty;
    float tu;

    float ui;
    float uo;
    float up;

    float ua;
    float us;
    float ud;
    float uf;

    printf("Choose what you want to calculate field figures t-triangle , r-rectangle , s-square , p-parallelogram , a-trapeze \n");
    scanf("%c",&no);
    fflush(stdin);

switch(no)
{

case 't':

    printf("\n \n");
    printf("Enter the dimensions of the base in cm\n");
    scanf("%f",&er);

    printf("Enter height in cm\n");
    scanf("%f",&et);

    ey = er * et / 2;

    printf("Result %f cm2 \n",ey);

break;

case 'r':
    printf("\n \n");

    printf("Enter the dimensions of the longer side in cm\n");
    scanf("%f",&qe);

    printf("Enter the dimensions of the shorter side in cm\n");
    scanf("%f",&qr);

    qt = qe * qr;

    printf("Result %f cm2 \n",qt);

break;

case 's':
    printf("\n \n");

    printf("Enter the dimensions of one side in cm\n");
    scanf("%f",&ty);

    tu = ty * ty;

    printf("Result %f cm2 \n",tu);

break;

case 'p':
    printf("\n \n");

    printf("Enter the dimensions of the base  in cm\n");
    scanf("%f",&ui);

    printf("Enter height in cm\n");
    scanf("%f",&uo);

    up = ui * uo;

    printf("Result %f cm2 \n",up);

break;

case 'a':
    printf("\n \n");
    printf("Enter the dimensions of the base in cm\n");
    scanf("%f",&ua);

    printf("Enter the dimensions of the side at the top in cm\n");
    scanf("%f",&us);

    printf("Enter height \n");
    scanf("%f",&ud);

    uf = ua + us * ud / 2;

    printf("Result %f cm2 \n",uf);

break;

}
}

void circumference_of_the_figure(void)
{
    char bv;

    float no;
    float nu;
    float ny;
    float np;

    float bo;
    float bu;
    float by;

    float qw;
    float qe;

    float tr;
    float tre;
    float tree;

    float opw;
    float opwe;
    float opwee;
    float opweee;
    float opert;

    printf("What perimeter do you want to calculate t-triangle , r-rectangle , s-square , p-parallelogram , a-trapeze \n");
    scanf("%c",&bv);

switch(bv)
{
case 't':
    printf("\n \n");

    printf("Enter the dimensions of the base \n");
    scanf("%f",&no);

    printf("Enter the dimensions of the first side  in cm\n");
    scanf("%f",&nu);

    printf("Enter the dimensions of the second side  in cm\n");
    scanf("%f",&ny);

    np = no + nu + ny;

    printf("The circumference is %f cm \n",np);

break;

case 'r':

    printf("\n \n");

    printf("Enter the dimensions of the longer side in cm\n");
    scanf("%f",&bo);

     printf("Enter the dimensions of the longer side  in cm\n");
    scanf("%f",&bu);

    by = bo + bo + bu + bu;

    printf("The circumference is %f cm \n",by);
break;

case 's':

    printf("\n \n");

    printf("Enter one side in cm \n");
    scanf("%f",&qw);

    qe = qw * 4;

    printf("The circumference is %f cm \n",qe);
break;

case 'p':

   printf("\n \n");

   printf("Enter the first side in cm \n");
   scanf("%f",&tr);

   printf("Enter the other side in cm \n");
   scanf("%f",&tre);

   tree = tr * 2 + tre * 2;

   printf("The circumference is %f cm \n",tree);

break;

case 'a':

    printf("\n \n");

    printf("Enter the dimensions of the base in cm \n");
    scanf("%f",&opw);

    printf("Enter the dimensions of the first side in cm \n");
    scanf("%f",&opwe);

    printf("Enter the dimensions of the second side in cm \n");
    scanf("%f",&opwee);

    printf("Enter the dimensions of the third side in cm \n");
    scanf("%f",&opweee);

    opert = opw + opwe + opwee + opweee;

    printf("The circumference is %f cm \n",opert);

}

}

int main()
{
    char cr;

    printf("Choose what you want to make f-fractions , p-figures field , c-circumference of the figure\n");
    scanf("%c",&cr);
    fflush(stdin);

switch(cr)
{

case 'f':

    Fractions();

break;

case 'p':

    figures_field();

break;

case 'c':

    circumference_of_the_figure();

break;


}




    return 0;
}
