
#include<stdio.h>
#include<conio.h>
void main()
{
int n, A[4][8]={{2,3,6,7,10,11,14,15},{16,19,22,23,26,27,30,31},{34,35,38,39,42,43,46,47},{50,51,54,55,58,59,62,63}} ,

B[4][8]={{1,3,5,7,9,11,13,15},{17,19,21,23,25,27,29,31}, {33,35,37,39,41,43,46,47},{49,51,53,55,57,59,61,63}},

C[4][8]={{8,9,10,11,12,13,14,15},{24,25,26,27,28,29,30,31},{40,41,42,43,44,45,46,47},{56,57,58,59,60,61,62,63}},

D[4][8]={{4,5,6,7,12,13,14,15},{20,21,22,23,28,29,30,31},{36,37,38,39,44,45,46,47},{52,53,54,55,60,61,62,63}},

E[4][8]={{32,33,34,35,36,37,38,39},{40,41,42,43,44,45,46,47},{48,49,50,51,52,53,54,55},{56,57,58,59,60,61,62,63}},

F[4][8]={{16,17,18,19,20,21,22,23},{24,25,26,27,28,29,30,31},{48,49,50,51,52,53,54,55},{56,57,58,59,60,61,62,63}},Number;
long int m;
printf("WELCOME IN THE WORLD OF PUZZLE \n ");
printf("Imagine a number between 1 to 63 \n ");
printf("In how many tables your number lies??? \n " );
scanf("%d",&n);
printf("Please enter the table name in which your number lies!!! \n ");
scanf("%ld", &m);
printf("\n m = %d\n", m);
if(m==123456)
{
Number =A[0][0] +B[0][0] +C[0][0]  +D[0][0]  +E[0][0]+F[0][0];
}
else if(m==12345)
{
Number =A[0][0] +B[0][0] +C[0][0]  +D[0][0]  +E[0][0];
}
else if(m==13456)
{
 Number =A[0][0]  +C[0][0]  +D[0][0]  +E[0][0]+F[0][0];
}
else if(m==23456)
{
 Number =B[0][0] +C[0][0]  +D[0][0]  +E[0][0]+F[0][0] ;
}
else if(m==12346)
{
 Number =A[0][0] +B[0][0] +C[0][0]  +D[0][0]  +F[0][0];
}
else if(m==12456)
{
 Number =A[0][0] +B[0][0] +D[0][0]  +E[0][0]  +F[0][0];
}
else if(m==12356)
{
 Number =A[0][0] +B[0][0] +C[0][0]  +E[0][0]  +F[0][0];
}
else if(m==1234)
{
 Number =A[0][0] +B[0][0] +C[0][0]  +D[0][0] ;
}
else if(m==1235)
{
 Number =A[0][0] +B[0][0] +C[0][0]  +E[0][0]  ;
}
else if(m==1236)
{
 Number =A[0][0] +B[0][0] +C[0][0]   +F[0][0];
}
else if(m==1245)
{
 Number =A[0][0] +B[0][0] +D[0][0]  +E[0][0] ;
}
else if(m==1346)
{
 Number =A[0][0] +C[0][0] +D[0][0]  +F[0][0]  ;
}
else if(m==1256)
{
 Number =A[0][0] +B[0][0]  +E[0][0]  +F[0][0];
}
else if(m==1356)
{
 Number =A[0][0]+C[0][0]  +E[0][0]  +F[0][0];
}
else if(m==2345)
{
 Number =B[0][0] +C[0][0]  +D[0][0]  +E[0][0];
}
else if(m==2456)
{
 Number =B[0][0] +D[0][0]  +E[0][0]  +F[0][0];
}
else if(m==3456)
{
 Number =C[0][0] +D[0][0]  +E[0][0]  +F[0][0];
}
else if(m==1456)
{
 Number =A[0][0] +D[0][0]  +E[0][0]  +F[0][0];
}
else if(m==2356)
{
 Number =B[0][0] +C[0][0]  +E[0][0]  +F[0][0];
}
else if(m==2346)
{
 Number =B[0][0] +C[0][0]  +D[0][0]  +F[0][0];
}
else if(m==1246)
{
 Number =A[0][0] +B[0][0] +D[0][0] +F[0][0];
}
else if(m==1345)
{
 Number =A[0][0] +C[0][0] +D[0][0] +E[0][0];
}
else if(m==123)
{
 Number =A[0][0] +B[0][0] +C[0][0] ;
}
else if(m==124)
{
 Number =A[0][0] +B[0][0] +D[0][0] ;
}
else if(m==125)
{
 Number =A[0][0] +B[0][0]  +E[0][0];
}
else if(m==126)
{
 Number =A[0][0] +B[0][0]+F[0][0];
}
else if(m==134)
{
 Number =A[0][0] +C[0][0] +D[0][0] ;
}
else if(m==156)
{
 Number =A[0][0] +E[0][0]  +F[0][0];
}
else if(m==146)
{
 Number =A[0][0] +D[0][0] +F[0][0];
}
else if(m==145)
{
 Number =A[0][0]  +D[0][0] +E[0][0];
}
else if(m==135)
{
 Number =A[0][0] +C[0][0]  +E[0][0];
}
else if(m==136)
{
 Number =A[0][0] +C[0][0]  +F[0][0];
}
else if(m==234)
{
 Number =B[0][0] +C[0][0] +D[0][0];
}
else if(m==245)
{
 Number =B[0][0]+D[0][0] +E[0][0];
}
else if(m==236)
{
 Number =B[0][0] +C[0][0] +F[0][0];
}
else if(m==235)
{
 Number =B[0][0] +C[0][0] +E[0][0];
}
else if(m==456)
{
 Number =D[0][0] +E[0][0]  +F[0][0];
}
else if(m==346)
{
 Number =C[0][0] +D[0][0] +F[0][0];
}
else if(m==345)
{
 Number =C[0][0] +D[0][0] +E[0][0];
}
else if(m==356)
{
 Number =C[0][0] +E[0][0] +F[0][0];
}
else if(m==256)
{
 Number =B[0][0] +E[0][0] +F[0][0];
}
else if(m==246)
{
 Number =B[0][0] +D[0][0] +F[0][0];
}
else if(m==24)
{
 Number =B[0][0] +D[0][0];
}
else if(m==46)
{
 Number =D[0][0] +F[0][0];
}
else if(m==26)
{
 Number =B[0][0] +F[0][0];
}
else if(m==14)
{
 Number =A[0][0] +D[0][0] ;
}
else if(m==16)
{
 Number =A[0][0] +F[0][0];
}
else if(m==15)
{
 Number =A[0][0]  +E[0][0];
}
else if(m==12)
{
 Number =A[0][0] +B[0][0] ;
}
else if(m==13)
{
 Number =A[0][0] +C[0][0] ;
}
else if(m==25)
{
 Number =B[0][0]  +E[0][0];
}
else if(m==23)
{
 Number =B[0][0] +C[0][0] ;
}
else if(m==36)
{
 Number =C[0][0] +F[0][0];
}
else if(m==35)
{
 Number =C[0][0] +E[0][0] ;
}
else if(m==34)
{
 Number =C[0][0] +D[0][0];
}
else if(m==56)
{
 Number =E[0][0]  +F[0][0];
}
else if(m==45)
{
 Number =D[0][0] +E[0][0];
}
else if(m==5)
{
 Number =E[0][0];
}
else if(m == 4)
{
 Number =D[0][0] ;
}
else if(m == 1)
{
 Number =A[0][0] ;
}
else if(m == 2)
{
 Number =B[0][0] ;
}
else if(m == 3)
{
  Number = C[0][0];
}
//else if(m == 6)
//{
 //Number = F[0][0];
//}
else
{
 printf("YOU HAVE ENTER WRONG NUMBER...... \n ");
}
printf("The number you have imagined is %d  ", Number);
getch();
}
