public class mazeproblem{
    public static boolean solvemaze(int maze[][]){
        int n=maze.length;
        int sol[][]=new int [n][n];
        if(solvemazeutil(maze,0,0,sol)== false){
            System.out.println("soln does not exist");
            return false;
        }
        printSolution(sol);
        return true;
    }
    public static boolean solvemazeutil(int maze[][],int x,int y,int sol[][]){
        if(x==maze.length-1 &&y==maze.length-1&&maze[x][y]==1){
            sol[x][y]=1;
            return true;
        }
        // check if maze [x][y] is valid
        if(issafe(maze,x,y)== true){
            if(sol[x][y]==1)
                return false;
                sol[x][y]=1;
                if(solvemazeutil(maze, x+1, y, sol))
                return true;
                if(solvemazeutil(maze, x, y+1, sol))
                return true;
                sol[x][y]=0;
                return false;   
           
        }
        return false;
    }

    public static boolean issafe(int maze[][], int x ,int y){
        // if(x,y outside maze)return false
        return(x>=0 && x<maze.length && y>=0 && y<maze.length && maze[x][y]==1);
    }
    public static void printSolution(int sol[][]){
        for(int i=0;i<sol.length;i++){
            for(int j=0;j<sol.length;j++){
                System.out.print(" "+sol[i][j]+" ");
            }
            System.out.println();
        }
    }

    public static void main(String args[]){
        int maze[][]={{1,0,0,0},
                      {1,1,0,1},
                      {0,1,0,0},
                      {1,1,1,1}};

    solvemaze(maze);
    }
}