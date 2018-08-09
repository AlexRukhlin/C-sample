/*
 * The sample program uses functions to play a simple game of tic tac toe.
 */
#include <stdio.h>

#include <stdlib.h>

char matrix[3][3];
void init_matrix();
void get_player_move();
void get_computer_move();
void disp_matrix();
void check();

void main()

{

char done;

printf("This is the game of tic tac toe...\n");

printf("You will be playing against the computer.\n") ;

done = ' ';

init_matrix();

do {

disp_matrix();

get_player_move();

done = check();

if (done != ' ') break;

get_computer_move();

done = check();

} while (done == ' ');

if (done == 'X') printf("\n\nYou won!!!\n");

else printf("I won!!!\n");

disp_matrix();

}

/**********************************************************/

/* fuction to initialise matrix */

/**********************************************************/

void init_matrix()

{

int i , j ;

for (i=0 ; i<3 ; i++)

for (j=0 ; j<3 ; j++)

matrix[i][j] = ' ';

}

/**********************************************************/

/* fuction to get players move */

/**********************************************************/

void get_player_move()

{

int x , y ;

printf("Enter coordinates of your X: ");

scanf("%d%d" , &x , &y);

x--; y--;

if (matrix[x][y] != ' ') {

printf("Invalid move, try again...\n");

get_player_move();

}

else matrix[x][y] = 'X';

}

/**********************************************************/

/* fuction to get computer move */

/**********************************************************/

void get_computer_move()

{

int i , j ;

for (i=0 ; i<3 ; i++) {

for (j=0 ; j<3 ; j++)

if(matrix[i][j]==' ') break;

if (matrix[i][j] == ' ') break;

}

if (i*j == 9) {

printf("draw....\n");

exit(0);

}

else matrix[i][j] = 'O';

}

/**********************************************************/

/* fuction to display matrix */

/**********************************************************/

void disp_matrix()

{

int t ;

printf(" 1 2 3\n");

for (t=0 ; t<3 ; t++) {

printf(" %c | %c | %c %d" , matrix[t][0],

matrix[t][1], matrix[t][2] , t+1);

if (t!=2) printf("\n---|---|---\n");

}

printf("\n");

}

/**********************************************************/

/* fuction to check matrix */

/**********************************************************/

void check()

{

int i ;

for (i=0 ; i<3 ; i++)

if(matrix[i][0] == matrix[i][1] && matrix[i][0] == matrix[i][2])

return matrix[i][0];

for (i=0 ; i<3 ; i++)

if(matrix[0][i] == matrix[1][i] && matrix[0][i] == matrix[2][i])

return matrix[0][i];

if(matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])

return matrix[0][0];

if(matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0])

return matrix[0][2];

return ' ';

}
