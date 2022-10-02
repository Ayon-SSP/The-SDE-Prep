public class cbvcbr  {
    //call by value(copied value)
    public static int product(int a,int b){
        return a*b;
    }
// --------------anathor function outside main function------
     //call by reference(original value)
     public static int changeA(int n)
     {
          n=10;
         return n;
     }

    public static void main(String args[])
    { 
     System.out.println("product = "+ product(2,5)); //2,5 are values copied to a,b
       
     System.out.println( changeA(5));//5 is not copied value it prints 10 instead of 5
   
    }

   
    
    
}
