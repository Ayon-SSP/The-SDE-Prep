import java.util.*;
public class basicarraydeclaration {
    public static void updatearray( int arr[]){
        for(int i=0;i<arr.length;i++){
         arr[i]=arr[i]+1;}
    }
    public static void main(String args[])
     {
    //     Scanner sc= new Scanner(System.in);
    //     int marks[]=new int[50];
    //     marks[0]=sc.nextInt();
    //     marks[1]= sc.nextInt();
    //     System.out.println(marks[0]+" "+ marks[1]);
    //     System.out.println(marks.length);
    //      -----------------------------
    // int arr[]=new int[10];
    // arr[0]=1;
    // arr[1]=2;
    // arr[3]=4;
    // arr[2]=3;
    // for(int i=0;i<arr.length;i++){
    //     System.out.print(arr[i] + " ");
    // }
//============================================
   Scanner sc= new Scanner(System.in);
   //int arr[]= new int[5];
   //System.out.println("enter array eleents");
    int arr[]={1,2,3,4,5};
    updatearray(arr);
    
    for(int i=0;i<arr.length;i++){
        System.out.println( " array elements are : "+arr[i]+" ");
    }

     }

     
}
