public class gridways {
    public static int gridway(int row, int col,int n,int m){
        //base case
    // if the arrow at n-1 and m-1 return 1
    if(row==n-1 || col==m-1){
        return 1;
    }
    // if arrow goes out of boundary like >n or >m
    else if(row >n || col>n){
        return 0;
    }
    // recursion function
    int way1 =gridway(row+1, col, n, m);// right side
    int way2=gridway(row, col+1, n, m);//down side
    return way1+way2;
    }

    public static void main(String args[]){
        int n=3;
        int m=3;
     int totways =gridway(0, 0, n, m);
     System.out.println(totways);

    }
    
}
