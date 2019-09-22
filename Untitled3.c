/* This programme is prepared by ZAGIM MURTZA AWAN Reg no.: SP19-BCS-
148 Section: B on 11/9/2019. This programme calculates the area and perimeter of the triangle*/
#include<stdio.h>
int main()
{
    int base,width,hyp,vh,perimeter;
    float tarea;
    printf("input base,vh,width,hyp");
    scanf("%d%d%d%d",&base,&vh,&width,&hyp);
    /*formula to find area of triangle*/
    tarea=0.5*base*vh;
    /*formula to find perimeter*/
    perimeter=base+hyp+width;
    printf("area of triangle=%f\n",tarea);
    printf("perimeter of triangle=%d",perimeter);
    return 0;

}

