import java.util.*;

public class RotateMatrix  
{  
  //creating a function to rotate a matrix by 90 degrees Anti-clockwise  
  static void leftRotate(int matrix[][], int n)  
  {  
    //swapping elements of rows by columns that gives the transpose matrix  
    for(int i=0;i<n;i++)  
      {  
      for(int j=i;j<n;j++)  
        {  
          int temp = matrix[i][j];  
          matrix[i][j] = matrix[j][i];  
          matrix[j][i] = temp;  
        }  
      }  
    for(int i=0;i<n;i++)  
    {  
      //logic to swap columns  
      int low = 0;  
      int high = n-1;  
      while(low < high)  
      {  
        int temp = matrix[low][i];  
        matrix[low][i] = matrix[high][i];  
        matrix[high][i] = temp;  
        low++;  
        high--;  
      }  
    }  
    //prints the matrix elements after left rotation  
    System.out.println("Matrix After Left Rotation: ");  
    for(int i=0;i<3;i++)  
      {  
      for(int j=0;j<3;j++)  
        {  
          System.out.print(matrix[i][j]+" "+"\t");  
        }  
      System.out.println();  
      }  
    }  
    //driver code  
  public static void main(String args[])  
    {  
      //initialize number of rows and columns  
      int n=3;  
      //creating a 3*3 matrix  
      int matrix[][] = new int[][]{ {1,2,3}, {4,5,6} , {7,8,9} };  
      //prints the matrix  
      System.out.println("The Original Matrix is: ");  
      //loop for rows  
      for(int i=0;i<3;i++)  
      {  
        //loop for column      
        for(int j=0;j<3;j++)  
          {  
            //prints elements of the matrix       
            System.out.print(matrix[i][j]+" "+"\t");  
          }  
      System.out.println();  
      }  
      //function calling   
      leftRotate(matrix,n);  
  }  
}
