/* 
Name: IRUNGU JAMES NDIRANGU 
Reg Number: PA106/G/28731/25
Description: Arrays 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int floor, room, occupied, vacant;

    srand(time(0)); // Seed random numbers

    printf("Room occupancy for one branch:\n\n");

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 1 or 0
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}