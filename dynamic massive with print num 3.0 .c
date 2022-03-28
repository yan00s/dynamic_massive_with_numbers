#include <stdio.h>
#include <stdlib.h>
int main(){
    char strd[] = "aboe37ddsa21d vsuv221sda 9s 21sad3s2a";
    int size_symb = sizeof(strd);
    char g;
    char g0;
    int len_suc = 1;
    int *succsymb;
    int newsize;
    succsymb = (int*) malloc(2);
    char check_space = 0;
    for (int i=0;i<size_symb; i++){
        g0 = strd[i];
        g = g0-0x30;
        if (g<10 && g>0){
            newsize = len_suc * 4;
            g0 = g0 - '0';
            succsymb = (int*) realloc(succsymb, newsize+1);
    		succsymb[len_suc++] = g0;
    		check_space = 1;
        }
        else if(check_space !=0 ){
            newsize = len_suc * 4;
            succsymb = (int*) realloc(succsymb, newsize+1);
    		succsymb[len_suc++] = 0x0A;
            check_space = 0;
        }
    }
    for (int i = 1; i<len_suc;i++){
        if (succsymb[i] == 0x0A){
            printf(" ");
        }
        else if (succsymb[i] != 0x0A){
            printf("%d",succsymb[i]);
        }
    }
}
