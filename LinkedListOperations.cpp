 #include<bits/stdc++.h>
using namespace std;


class Node{ 
    public:
    int data;
    Node * next;

    Node(int data){

        this->data=data;
        //defference betweeen  this->data=data; and data = this->data;
        next=NULL;

    }
};

// COUNT NUMBER OF ELEMENT_()

int getCount(Node* head){

Node* temp=head;

    if(temp==NULL){
        return 0;
    }
    return 1+ getCount(temp->next);
}


// COUNT NUMBER OF ELEMENTusing _(loops):

/*

 int count(Node * head){
 
     int count =0;
     Node* current = head;
     while(current != NULL){
         current = current->next;
         count++;

     }

     return count;

 }

 */

// INSERTION AT iTH POSITION:
/*
Node * insertiThPosi(Node* head, int i, int data){


            Node *newNode= new Node(data);
            Node * temp=head;
            int count= 0;

            if(i==0){
                newNode->next=head;
                head = newNode;
                return head;
            }

            while(temp != NULL && count<i-1){

               temp=temp->next;
            
            count++;    
                
            }
            if(temp!=NULL){

                  Node * a= temp->next;
                temp->next = newNode;
                newNode->next=a;

                // newNode->next=temp->next;
                // temp->

            }

          
    return head;
}                               */


// DELETE AT i NODE:

/*

Node* deleteAti(Node * head,int i){


   int  count =0;
   Node * temp= head;
   if(i==0){
       head= head->next;
       return head;
   }

   while(temp!=NULL && count<i-1){
       temp=temp->next;
       count++;
   }

   if(temp!=NULL){
       Node *a=temp->next;
       Node* b= a->next;
       temp->next=b;
       delete a;
   }

   return head;

}

*/


// MAKE LINKED LIST AUTOMATIC (WITHOUT INSERTING EACH ELEMENT )
     /*   Node * autoInput(){
            int data;
            cin>>data;
            Node*head=NULL;
            while(data!=-1){
                Node *newNode=new Node(data);
                if(head==NULL){
                    head=newNode;
                }
                else{
                    Node *temp= head;
                    while(temp->next!=NULL){
                        temp=temp->next;
                    }
                    temp->next=newNode;
                }
                cin>>data;

            }
            return head;
        } */
        

    //    BETTER TIME COMPLEXITY:

  Node * autoInput_better()
  {
            int data;
            cin>>data;
            Node*head=NULL;
            Node*tail=NULL;
            while(data!=-1)
            {
                Node *newNode=new Node(data);
                if(head==NULL)
                {
                    head=newNode;
                    tail=newNode;
                }
                else
                {
                    tail->next=newNode;
                    tail=tail->next;
                    //or
                    // tail=newNode


                    
                
                }
                cin>>data;

            }
            return head;
     }
/*

// PRINT 1:

void println(Node*n){

    while(n!=NULL){

        cout<<n->data<<"\n";
        n=n->next;

    }

}
*/
// PRINY 2:

void printlnD(Node*n){

    cout<<"\n";

    while(n!=NULL){

        cout<<n->data<<"\n" ;
        n=n->next;

    }

}

// PRINT 3:
 /*   void printKar(Node * head){
        Node * temp= head;

        while(temp!=NULL){
            cout<<temp->data<<"\n";
            temp=temp->next;

        }
    }
    */

// PRINT 4:
  /*void printKar(Node * head){
        Node * temp= head;

        while(temp!=NULL){
            cout<<temp->data<<"\n";
            temp=temp->next;

        }
    }   */

   


int main(){

// STATIC LINKED LIST:

 /*    Node n1(1);
     Node *head=&n1;
     Node n2(2);
     Node n3(3);
     Node n4(4);
     Node n5(5);

    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
 */
     

    Node*head=autoInput_better();

     printlnD(head);

     int c= getCount(head);
     cout<<c;
     

//    int c = count(head);
    
    // int i;
    // cin>>i;
  //    head= deleteAti(head,i);
  //  head= insertiThPosi(head,i,data);
  //   printlnD(head);

 //    cout<<c;
     


  /*      Node n1;
        Node *head=&n1;
        Node n2;
        Node n3;
        n1.data=1;
        n1.next=&n2;
        n2.data=2;
        n2.next=&n3;
        n3.data=3;
        n3.next=NULL;

        printKar(head);   */
        

        // DYNAMIC LINKED LIST:
        
/*
        Node * n4= new Node();
        Node *hiead=n4;
        Node * n5= new Node();

        n4->data=4;
        n4->next=n5;

        n5->data=5;
        n5->next=NULL;
        printlnD(hiead);  */  

}
