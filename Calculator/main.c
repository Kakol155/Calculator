#include <stdio.h>
#include <stdlib.h>

int main()
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

    return 0;
}
