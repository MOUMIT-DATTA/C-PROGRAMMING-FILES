#include <stdio.h>
int maze(int cr,int cc,int er,int ec) {
    int ways;
    int upwards=0;
    int downwards=0;
    if(cr==er && cc==ec) {   //eita ultimate jokon er cr er soman hoy tokon number of ways e ek jog kore 
        return 1;
    }
    if(cr==er) {  //row jodi equal hoy taile sudu right ways jawa jabe
        upwards=upwards+maze(cr,cc+1,er,ec);
    }
    else if(cc==ec) { // column jodi equal hoy taile sudu down ei  jawwa jabe.
        downwards=downwards+maze(cr+1,cc,er,ec);
    }
    else if(cr<er&&cc<ec) { // r jodi duitaiequal na hoy tar mane mal upureo jabe r nicheo asbe tai up r down duitatei call hbe.
        upwards=upwards+maze(cr,cc+1,er,ec);
         downwards=downwards+maze(cr+1,cc,er,ec);
    }
     ways= upwards+downwards;
    return ways;

}
int main() {
    int er,ec,ways;
    printf("enter number of rows of the maze : ");
    scanf("%d",&er);
    printf("enter number of columns of the maze: ");
    scanf("%d",&ec);
    ways= maze(1,1,er,ec);
    printf("number of ways is : %d",ways);
    return 0;
}