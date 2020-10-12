
#include <stdio.h>
main(){



    printf(" write marks to know whether you are pass or fail by which grade \n");

int marks,var ;
scanf(  " %d " , &marks );
if(marks<=50){
    var = 1;
}
else if( marks>50 && marks<=60)
{

    var = 2;
}
else if( marks>60 && marks<=70)
{

    var = 3;
}
else if( marks>70 && marks<=80)
{

    var = 4;
}
else if( marks>80 && marks<=90)
{

    var = 5;
}
else if( marks>90 && marks<=100)
{

    var = 6;
}
else {
    printf("something went wrong\n");
}



switch( var ){
case 6 :
    printf("you got A1 by getting  %d marks ", marks   );
    break ;

case 5 : printf("you got A2 by getting  %d marks ", marks   );
break ;


case 4 : printf("you got B1 by getting  %d marks ", marks   );
break ;


case 3 : printf("you got B2 by getting  %d marks ", marks   );
break ;

case 2 : printf("you got C1 by getting  %d marks ", marks   );
break ;

case 1 : printf("you got C2 by getting  %d marks ", marks   );
break ;

}


return 0;

}
