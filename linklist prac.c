#include <bits/stdc++.h>
#include <string>
using namespace std;

//create the linked list called Lk_List
struct Lk_List {
    // the Lk_List
   int data;  //data 
   struct Lk_List *next; // the link or pointer
};
struct Lk_List *head = NULL;// the head Lk_List 
struct Lk_List *current = NULL;// current Lk_List

//insertion at the beginning
void insertAtBegin(int data){
   
   //create a link
   struct Lk_List *link = (struct Lk_List*) malloc(sizeof(struct Lk_List));
   link->data = data;
   
   // point it to old first Lk_List
   link->next = head;
   
   //point first to new first Lk_List
   head = link;
}
//insertion at the end
void insertAtEnd(int data){
   
   //create a link
   struct Lk_List *link = (struct Lk_List*) malloc(sizeof(struct Lk_List));
   link->data = data;
   struct Lk_List *currentLk_List = head;

   // point it to old first Lk_List
   while(currentLk_List->next != NULL)
      currentLk_List = currentLk_List->next;

   //point first to new first Lk_List
   currentLk_List->next = link;
}
//insertafter node 
void insertAfterNode(struct  Lk_List *list, int data){
   struct  Lk_List *link = (struct  Lk_List*) malloc(sizeof(struct  Lk_List));
   link->data = data;
   link->next = list->next;
   list->next = link;
}
// display the list
void printList(){
   struct Lk_List *link = head;//start from the beginning
   cout << "\n[";
   
   //while there is still a Lk_List print the data
   while(link != NULL) {
      cout << " " << link->data << " ";
      link = link->next;
   }
   cout << "]";
}


int main(){


    return 0;
}