#include <iostream>
#include"Maze.h"

using namespace std;




int main()
{

    Maze maze;
    int amatrix[5][5]={
        {0,1,1,0,0},
        {0,0,1,0,0},
        {0,0,0,0,0},
        {0,1,0,1,0},
        {0,0,1,0,0}
    };
    maze.InitMaze(*amatrix,5);
    cout<<"************Show the Maze******************"<<endl;
    maze.PrintMaze();
    cout<<"**************find the path****************"<<endl;
    // maze.PrintPathDFS();
    //maze.PrintPathStack();
    maze.PrintPathBFS();
    return 0;
}




