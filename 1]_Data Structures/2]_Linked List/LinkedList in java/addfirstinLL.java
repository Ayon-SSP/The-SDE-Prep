public class addfirstinLL {// class creation
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
  // addfirst function  
  public void addfirst(int data){
    
    // step1-> create  new node 
    Node newNode=new Node(data);
    if(head==null){
        head= tail=newNode;
        return;
      }
    // step2 newNodenext= head
    newNode.next=head;
    // step 3 head = new node
    head=newNode;
    // addlast function
    
  }
  public void addlast(int data){
    // step1 create new node
    Node newNode= new Node(data);
    if(head==null){
        head= tail= newNode;
        return;
    }
    // step 2 newnode.next=tail
    tail.next=newNode;
    // tail= new node
    tail=newNode;
}
// print linklist using function
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

  public static void main(String[] args) {
    addfirstinLL ll= new addfirstinLL();
    ll.addfirst(2);
    
    ll.addfirst(1);
    
    ll.addlast(3);
    
    ll.addlast(4);
    ll.print();

    
  }
  
    
}
