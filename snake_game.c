#include <stdio.h>
#include <string.h>
void move_input(void);
void generate_board(void);

int main(int argc, char *argv[]) {

    char vert_frame[51], horizontal_frame[51];
    memset(vert_frame, '_', 50);
    vert_frame[50] = '\0';
    memset(horizontal_frame, ' ', 49);
    horizontal_frame[0] = '|';
    horizontal_frame[49] = '|';
    horizontal_frame[50] = '\0';
    for(;;) {

        printf("%s\n", vert_frame);
        for(int i=0; i<50; i++) {
            printf("%s\n", horizontal_frame);
            
        }
        printf("%s\n", vert_frame);
        fflush(stdout);
    }
    return 0;
}
void generate_board(void){

}
