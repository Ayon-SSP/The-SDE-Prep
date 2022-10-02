public class searchinLL {
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
    public void print(){    
        Node temp=head;
        if(head==null){
            System.out.println("null");
            return;
        } 
            while(temp!=null){
                System.out.print(temp.data+"->");
            temp=temp.next;
        }
        System.out.println("null");
    
    }

    // method for searching an key
    public int search(int key){
        int idx=0;
        Node temp=head;
        while(temp!=null){
            if(temp.data==key){
                return idx;
            }
            temp=temp.next;
            idx++;   
        }
        return -1;

    }
    public static void main(String[] args) {
        searchinLL ll=new searchinLL();
        ll.addfirst(5);
        ll.addfirst(4);
        ll.addfirst(3);
        ll.addfirst(2);
        ll.addfirst(1);
        ll.print();
       System.out.println( ll.search(3));

        
    }
    
}
