#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

	// 0 = stdin
	// 1 = stdout
int main(){
    char minC;
    int total = 0;
    read(0,&minC,1);
    while(read(0,&minC,1)){
        if(minC == '\n'){
            ++total;
        }
    }
    printf("%d\n", total);
    return 0;
}
