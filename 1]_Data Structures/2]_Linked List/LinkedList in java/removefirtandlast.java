public class removefirtandlast {
    public static class Node{
        int data;
        Node next;
        public Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    public static Node head;
    public static Node tail;
    public static int size;

    // METHOD1-> add first
    public  void addfirst(int data){
        Node newnode=new Node(data);
        if(head==null){
            head=tail=newnode;
            return;
        }
        size++;
        newnode.next=head;
        head=newnode;
    }
    //METHOD2 to add last
    public  void addlast(int data){
        Node newnode=new Node(data);
        if(head==null){
            head=tail=newnode;
            return;
        }
        size++;
        tail.next=newnode;
        tail=newnode;
        
    }
    //Method3 to add in middle
    public  void addmiddle(int idx, int data){
        Node newnode=new Node(data);
        if(idx==0){
            head=tail=newnode;
            return;
        }
        size++;
        Node temp=head;
        int i=0;
        while(i<idx-1){
            temp=temp.next;
            i++;
        }
        newnode=temp.next;
        temp.next=newnode;
        
    }
   // Method 4 to remove first
   public  int removefirst(){
    if(size==0){
     System.out.println("empty");
     return Integer.MIN_VALUE;
    }
    if(size==1){
        int val=head.data;
      head.next=null;
      return val;
   }
    size--;
    int val=head.data;
    head=head.next;
    return val;  
   }
  // method 4to remove lastelement
  public int removelast(){
    if(size==0){
        System.out.println("empty");
        return -1;
    }
   else if(size==1){
    int val=head.data;
    head=tail=null;
    size=0;
    return val;
   }
   Node prev=head;
   for(int i=0;i<size-2;i++){
    prev=prev.next;
   }
   int val=prev.next.data;//tail.data
   prev.next=null;
   tail=prev;
   size--;
   return val;

  }


    //method 5 to print the Linked list
    public void print(){
        Node temp=head;
        if(head==null){
            System.out.println("ll is empty");
            return;
        }
        while(temp!=null){
        System.out.print(temp.data +"->");
        temp= temp.next;
       }
       System.out.println("null");
    }
   public static void main(String[] args) {
    removefirtandlast ll = new removefirtandlast();
    ll.addfirst(2);
    ll.addfirst(1);
    ll.addlast(4);
    ll.addlast(5);
    ll.addmiddle(2, 3);
    ll.print();
    System.out.println(ll.size);
    ll.removefirst();
    ll.print();
    System.out.println(ll.size);
    ll.removelast();
    ll.print();
    System.out.println(ll.size);

    
}
    
}
