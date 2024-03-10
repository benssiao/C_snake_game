#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define SCREEN_DIMENSION 45
#define VERTICAL_SIZE 25
void move_input(void);
void generate_board(void);

int main(int argc, char *argv[]) {

    char vert_frame[SCREEN_DIMENSION+1], horizontal_frame[SCREEN_DIMENSION+1];
    memset(vert_frame, '_', SCREEN_DIMENSION);
    vert_frame[SCREEN_DIMENSION] = '\0';
    memset(horizontal_frame, ' ', SCREEN_DIMENSION);
    horizontal_frame[0] = '|';
    horizontal_frame[SCREEN_DIMENSION-1] = '|';
    horizontal_frame[SCREEN_DIMENSION] = '\0';
    for(;;) {

        printf("%s\n", vert_frame);
        for(int i=0; i<VERTICAL_SIZE; i++) {
            printf("%s\n", horizontal_frame);
            
        }
        printf("%s\n", vert_frame);
        usleep(500000);
        system("clear"); 

    }
    return 0;
}
void generate_board(void){

}
