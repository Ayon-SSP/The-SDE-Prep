public class lastoccurence {

    public static int LOcc(int arr[], int key, int i){
//base case
    if(i==arr.length){
        return -1;
    }
    int isfound=LOcc(arr, key, i+1);
    if(isfound==-1&&arr[i]==key){
        return i;
    }
    return isfound;

    }
    public static void main(String args[]){
        int arr[]={1,2,3,4,5,6,7,8,5};
        System.out.println(LOcc(arr, 5, 0));

    }
    
}
