// make three function 1.good morning 2.good afternon 3.good evening


# include<stdio.h>
# include<stdlib.h>
void g_mor();      //function prototype
void g_af();      //function prototype
void g_ev();      //function prototype
int main(){
    g_mor();
    return 0;
}
void g_mor(){
    printf("Good morning!\n");
    g_af(); 
}
void g_af(){
    printf("Good Afternoon!\n");
    g_ev();
}
void g_ev(){
    printf("Good evening!\n");
}