#include <stdio.h>
//empty board code
void board (){
int a,x,boardlength ;
char i='A',b='1';
printf("enter a number for board area");
scanf("%d",&boardlength);
for (x=0;x<=boardlength;x++){
    if (x==0) printf("00 ");
    else if(x<27){
        printf(" %c",i);
        i++;
    }else{
        i=i-26;
        printf("A%c ",i);
         i=i+26;
        i++;
    }}
for (x=1;x-1<boardlength;x++){ 
    printf("\n");
    for (a=0;a<=boardlength;a++){
        if (x<=9){
            if (a==0){
                printf(" %c",b);
                b++;
    }else{
        if (a<27){printf(" o"); 
        }else { printf(" o ");}
        }}else
             if (x<20 && x>9){
                if (a==0){
                    b=b-10;
                    printf("1%c",b);
                    b=b+10;
                    b++;
                }
                else if (a<27){printf(" o"); 
                }else {printf(" o ");}
    
}else{
    if (a==0){
        b=b-20;
        printf("2%c",b);
        b=b+20;
        b++;
    }
    else if (a<27){printf(" o"); 
    }else { printf(" o ");}
    
}}}}

int main() {
    char harf;
    int sayi;
    board ();
    printf("\n please enter a horizontal position letter to find the opponent's ship  ");
    scanf(" %c", &harf);
    printf("\nplease enter a vertical position number to find the opponent's ship");
    scanf(" %d",&sayi);
    printf("%c%d", harf, sayi);
    return 0;
}


