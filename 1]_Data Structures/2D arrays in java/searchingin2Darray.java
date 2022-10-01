import java.util.*;
public class searchingin2Darray {
public static void Searchinmatrix(int arr[][],int key){
    for(int i=0;i<arr.length;i++){
        for(int j=0;j<arr[0].length;j++){
            if(arr[i][j]==key){
                System.out.println("found at index ("+i+" "+j+")");
            }
        }
    }
}

    public static void main(String args[]){
        int arr[][]=new int[3][3];
               Scanner sc= new Scanner(System.in);
               
        //input
        for(int i=0;i<arr.length;i++ ){//rows     n=3 == arr.length
            for(int j=0;j<arr[0].length;j++){//columns   m=3 == arr[0].length
                arr[i][j]=sc.nextInt();
                
            }

        }
         //output
        for(int i=0;i<arr.length;i++ ){//rows     n=3 == arr.length
            for(int j=0;j<arr[0].length;j++){//columns   m=3 == arr[0].length
               System.out.print(arr[i][j]+" ");
                
            }
            System.out.println();// new space to devide out matrix into rows and columns

        }
        System.out.println("enter key");
               int key=sc.nextInt();
        Searchinmatrix( arr, key);
       



    }
    
}
