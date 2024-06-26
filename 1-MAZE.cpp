#include<stdio.h>
#define ROWS 8
#define COLS 8
int maze[ROWS][COLS]={
    {0, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 1, 1, 1, 1, 0},
    {0, 1, 1, 1, 0, 1, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 1, 1, 3, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 1, 2, 0, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 0}
 };
  struct Point
 {
 	int x,y;
 };
 int visited[ROWS][COLS]={0};
 void drawMaze()
 {
 	int i,j;
 	for(i=0;i<ROWS;i++){
 		for(j=0;j<COLS;j++){
 			if(maze[i][j] == 0)
			 {
 				printf("##"); }
			 else if(maze[i][j]==1)
			 {
			 	if(visited[i][j])
				 {
			 		printf(". "); //visited path
				 }
				 else
				 {
				 	printf("  "); //unvisited path
				 }
			 }
			 else if(maze[i][j] == 2)
			 {
			 	printf("D"); // DOOR
			 }
			 else if(maze[i][j] == 3)
			 {
			 	printf("K"); //KEY
			 }
		 }
		 printf("\n");}}
 int DFS(int x,int y,struct Point target)
 {
 if(x<0 || x>=ROWS || y<0 || y>=COLS || maze[x][y]==0 || visited[x][y])
 {
 return 0; //INVALID position or wall or already visited	
 } 	
 visited[x][y]=1; //Make current position as visited
 if(x == target.x && y == target.y)
 {
 return 1;	
 }
 if(DFS(x-1,y,target) || DFS(x,y-1,target) || DFS(x+1,y,target) || DFS(x,y+1,target))
 {
 	return 1; // if target is found,propagate result 
 } 
 visited[x][y] = 0;
 return 0;
 }
 int main()
 {
    int i,j;
 	struct Point target = {7,1};
 	struct Point key = {4,6};
 	if(DFS(0,6,key))
	 {
 		printf("Key Found\n\n");
 		drawMaze(); // Print the maze after finding the key
	 }
	 for(i=0;i<ROWS;i++){
	 	for(j=0;j<COLS;j++){
	 		visited[i][j] = 0;
		 }}
	 if(DFS(4,5,target))
	 {
	 printf("\n\n\nEXIT FOUND !\n\n \n");
	 drawMaze(); // Print the maze after finding the target	
	 }
	 else
	 {
	 	printf("KEY is not FOUND .\n");}
	 return 0;
 }
 
 
 
 
 
 
