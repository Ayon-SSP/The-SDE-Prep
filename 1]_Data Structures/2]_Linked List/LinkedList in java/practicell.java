public class practicell {
    public  static class Node{
        int data;
        Node next;
        public Node(int data){//constructer to pass values
            this.data=data;
            this.next=null;
        }
    }
    public static Node head;
    public static Node tail;

    // method for add first
    public void addfirst(int data){
        // create new node
        Node newnode=new Node(data);
        if(head==null){
            head=tail=newnode;
            return;
        }
        //newnode next=head
        newnode.next=head;
        head=newnode;
        }
    

    //method for add last
    public void addlast(int data){
        //create new node
        Node newnode=new Node(data);
        if(head==null){
            head=tail=newnode;
            return;
        }
        tail.next=newnode;
        tail=newnode;
    }
    public void print(){
        Node temp=head;
        if(head==null){
            System.out.println("empty ll");
            return;
        }
        while(temp!=null){
            System.out.print(temp.data+"->");
            temp= temp.next;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {
        practicell LL=new practicell();
        // LL.addfirst(2);
        // LL.addfirst(1);
        // LL.addlast(3);
        // LL.addlast(4);
        LL.print();
        
    }
    
}
