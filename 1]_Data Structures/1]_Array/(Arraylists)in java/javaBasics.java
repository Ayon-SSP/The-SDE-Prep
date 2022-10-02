// public class javaBasics {
//     public static int[] mainarray(int arr[]) {
//         int subarray[] = new int[(arr.length)+2];
//         int n = arr.length;
//         System.out.println(arr.length);

//         for (int i = 0; i < n; i++) {

//             if (i == n) {
//                 arr[i + 1] = 0;
//                 subarray[i] = arr[i + 1] - arr[i];

//             } else {
//                 subarray[i] = arr[(i + 1)%13] - arr[i]; // ?
//             }
//             // System.out.println(i);
//             System.out.print(subarray[i] + " ");
//         }
//         return subarray;
//     }

//     public static int[] finalarray(int subarray[]) {
//         int farray[] = new int[subarray.length];
//         int subs[] = new int[subarray.length];
//         boolean iflag = false;
//         boolean oseq = true;
//         int curdigit;
//         int n = farray.length;
//         System.out.println("[function entered]");
//         int k;
//         for (int i=0; i<n; i++) {
//             System.out.print(subarray[i] + ", ");
//         }
//         System.out.println();

//         for (k=0; k<n; k++) {
//             for (int j=k+1; j<n; j++) {
//                 if (subarray[k] != subarray[j]) {
//                     if (iflag) {
//                         k=j;
//                     }
//                     iflag = false;
//                     break;
//                 }
//                 else {
//                     iflag = true;
//                     curdigit = subarray[k];
//                     if (oseq) {
//                        System.out.print(j-1+ ", ");
//                     }
//                     System.out.print(j +", ");
//                     if (curdigit != subarray[k]) {
//                         oseq = true;
//                     }
//                     else {
//                         oseq = false;
//                     }
//                 }
//             }
//         }

//         // for (int i = 0; i < n; i++) {
//         //     for (int j = i+1; j < n; j++) {
//         //         if (farray[i]==farray[j]) {
//         //             // j++;
//         //             // farray[i] = j;
//         //             // System.out.print(farray[i] + " ");
//         //             System.out.println("/ ");
//         //             iflag = true;
//         //             if (iflag) {
//         //                 System.out.print(j-1);
//         //             }
//         //             System.out.print(j);
//         //         }
//         //         else if (farray[i] != farray[j]){
//         //             iflag = false;
//         //             break;
//         //         }
//         //     }
//         // }
//         return farray;
//     }

//     public static void main(String args[]) {
//         int arr[] = { 22, 2, 4, 6, 8, 3, 1, 2, 3, 4, 5, 6, 7 };
//         int sub[] = mainarray(arr);
//         finalarray(sub);
//     }
// }
import java.util.*;
public class javaBasics {
    public static int printFactorial(int n){
          int fact=1;
          for(int i=1;i<=n;i++){
            fact=fact*i;
          }
          return fact;
    }
    public static void main(String args[])
    {
     Scanner sc= new Scanner(System.in);
     System.out.println(" enter n");
     int n= sc.nextInt();
     System.out.println("factorial of "+ n +" = " + printFactorial(n));
    }
    
}