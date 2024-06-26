#include<stdio.h>
#define ROWS 100
#define COLS 100
int maze[ROWS][COLS]={
    {0, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 1, 1, 1, 1, 0},
    {0, 1, 1, 1, 0, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 1, 1, 3, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 1, 2, 0, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 0} };
struct Point
 {
 	int x,y;
 };
int visited[8][8]={0};
void drawMaze(int A[100][100], int x[10], int y[10])
 {
int i,j;
printf("Initial maze where agent is at (0,6)\n");
for(i=0;i<8;i++){
for(j=0;j<8;j++){
if(maze[i][j] == 0){
printf("##");}
else if(maze[i][j]==1){
if (i == 0 && j == 6){
printf(". "); //visited path
}
else{
printf("  "); }}
else if(maze[i][j] == 2){
printf("D"); // DOOR
}
else if(maze[i][j] == 3){
printf("K"); //KEY
}}
printf("\n");}
printf("\n");
x[7] = 7;
y[7] = 1; }
void solve_maze_with_agent(int A[100][100], int x[10], int y[10]) {
int z=0;
drawMaze(maze, x, y);
printf("The Maze is solved :\n");
for(int i=0;i<8;i++){
for(int j=0;j<8;j++){
if (A[i][j] == 0) {
printf("#"); } 
else if (A[i][j] == 1) {
if (i == 0 && j == 6){
printf("*");
x[0] = i;
y[0] = j; }
else if (A[x[z]][y[z] + 1] == 1) {
printf("*");
x[z + 1] = x[z];
y[z + 1] = y[z] + 1; } 
else if (A[x[z] + 1][y[z]] == 1) {
printf("*");
x[z + 1] = x[z] + 1;
y[z + 1] = y[z];} 
else if (A[x[z] - 1][y[z]] == 1) {
printf("*");
x[z + 1] = x[z] - 1;
y[z + 1] = y[z];} 
else if (A[x[z]][y[z] - 1] == 1) {
printf("*");
x[z + 1] = x[z];
y[z + 1] = y[z] - 1;}
else {
printf("Agent is stuck!\n");
break; }} 
else if (A[i][j] == 2) {
printf("O");} 
else if (A[i][j] == 3) {
printf("-"); }}
printf("\n"); }}
int main()
{
int x[10] ,y[10];
solve_maze_with_agent(maze,x,y);
return 0;
}
