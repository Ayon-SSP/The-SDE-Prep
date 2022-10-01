public class addinmiddeleLL {
    //create a claas node
    public static class Node{
        int data;
        Node next;
        // calling values using constructer
        public Node( int data){
         this.data=data;
         this.next=null;
        }
    }
     // create head and tail
    public static Node head;
    public static Node tail;
    public static int size; // for calculating size
           
     // methods 
        //method 1 to add data in ll
    public void addfirst(int data){
        // create a new node
        Node newnode=new Node(data);
        size++; // increase size after creating a new node
        //if  ll  is empty
        if(head==null){
            head=tail=newnode;
            return;
        }
        newnode.next=head;
        head=newnode;
        
    }
    // method 2 to add last in ll 
    public void addlast(int data){
        // create new node
        Node newnode=new Node(data);
        size++;//increase size after creating a new node
        // if ll is empty
        if(head==null){
            head=tail=newnode;
            return;
        }
        tail.next=newnode;
        tail=newnode;
      

    }
    // method 3 to insert in the middle
    public void addmiddle( int idx ,int data){
    Node newnode=new Node(data);
    
    // base case
    if(idx==0){
        addfirst(data);
    }
    size++;// insert after the base case so that no need to increment 2 times
    Node temp=head;
    int i=0;
    while(i<idx-1){
        temp=temp.next;
        i++;
    }
    // now we get the previous element idx-1==prev
    newnode.next=temp.next;
    temp.next=newnode;

    }

    //method 4 to print the Linked list
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
        addinmiddeleLL LL= new addinmiddeleLL();
         LL.addfirst(2);
         LL.addfirst(1);
         LL.addlast(3);
         LL.addlast(4);
         LL.addmiddle(2, 10);
         LL.print();
         System.out.println(LL.size);
        
    }

    
}
