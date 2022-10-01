public class recursivesearchinll {
    
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
        public int helper(Node head,int key){
            if(head==null){
                return -1;
            }
            if(head.data==key){
                return 0;
            }
            int idx=helper(head.next, key);
            if(idx==-1){
                return -1;
            }
            return idx+1;
        }
        public int recursivesearch(int key){
            return helper(head,key);
        }
        public static void main(String[] args) {
            recursivesearchinll ll=new  recursivesearchinll();
            ll.addfirst(5);
            ll.addfirst(4);
            ll.addfirst(3);
            ll.addfirst(2);
            ll.addfirst(1);
            ll.print();
           System.out.println( ll.recursivesearch(3));
    
            
        }
        
    }
    

