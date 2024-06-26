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
int visited[8] = {0, 0, 0, 0, 0, 0, 0, 0};
void freeWay(int A[100][100])  
{
	int i,j;
    int x[10], y[10];
    int z = 0;
    for (i = 0; i < 8; i++) 
    {
        for (j = 0; j < 8; j++) 
        {
            if ((A[i][j] == 1 || A[i][j] == 2 || A[i][j] == 3) && A[i][j] != 0)
            {
                x[z] = i;
                y[z] = j;
                z++; }}}
    printf("Coordinates of passages, doors, and keys:\n");
    for (i = 0; i < 10; i++)
    {
        printf("(%d, %d)\n", x[i], y[i]);}}
  
  int findAdjacent(int maze[100][100], int x, int y, int result[100][2])
 {
 	int i;
    int numAdjacent=0;
    int dx[]={-1,1,0,0};
    int dy[]={0,0,-1,1};
    for(i=0; i<4; i++)
	{
        int newX = x + dx[i];
        int newY = y + dy[i];
        if(newX>=0 && newX<8 && newY>=0 && newY<8 && maze[newX][newY]==1){
            result[numAdjacent][0]=newX;
            result[numAdjacent][1]=newY;
            numAdjacent++; }}
    return numAdjacent; }
int main()
{
int adjacentPassages[100][2];
int i,userX, userY;
freeWay(maze);
printf("\nEnter A position whose adjacent passages you want to know: ");
scanf("%d%d", &userX, &userY);
int numAdjacent = findAdjacent(maze, userX, userY, adjacentPassages);
if (numAdjacent == 0){
printf("There are no valid adjacent passages to the position.\n");
} 
else {
printf("The adjacent passages for the position (%d, %d) are:\n", userX, userY);
for (int i = 0; i < numAdjacent; i++){
printf("(%d, %d)\n", adjacentPassages[i][0], adjacentPassages[i][1]); }}
return 0;
}
