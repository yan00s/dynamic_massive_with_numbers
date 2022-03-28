#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char strd[] = "aboe37ddsa21d vsuv221sda 9s 21sad3s2a";
    int size_symb = sizeof(strd);
    char g;
    char g0;
    int len_suc;
    char succsymb[100];
    char check_space = 0;
    for (int i=0;i<size_symb; i++){
        g0 = strd[i];
        g = g0-0x30;
        if (g<10 && g>0){
            len_suc = strlen(succsymb);
            succsymb[len_suc++] = g0;
    		succsymb[len_suc] = '\0';
    		check_space = 1;
        }
        else if(check_space !=0 ){
            succsymb[len_suc++] = ' ';
    		succsymb[len_suc] = '\0';
            check_space = 0;
        }
    }
    printf("%s",succsymb);
}
