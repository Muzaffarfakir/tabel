#include<stdio.h>
#include<conio.h>
int main(){
   
   for(int j=0; j<100;j++){
   int a;
  int t;
   printf("Enter A Number  For Tabel bro -------------------- : ");
   scanf("%d",&a);
  
   for(int i=1;i<=10;i++){
       t=i*a;
       printf("   %d  *  %d  =  %d   \n",a,i,t);
   }
  }
}


