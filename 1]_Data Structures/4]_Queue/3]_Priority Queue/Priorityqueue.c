#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
  char name[20];
  char secondName[20];
  int age;
  int priority;
  struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;
struct node *temp;

char firstName[20], secondName[20];
int age, pri;
char priority[10];

struct node *createPerson(char name[], char secondName[], int age, int priority)
{
  struct node *newPerson = (struct node *)malloc(sizeof(struct node));
  strcpy(newPerson->name, name);
  strcpy(newPerson->secondName, secondName);
  newPerson->age = age;
  newPerson->priority = priority;
  newPerson->next = NULL;

  return newPerson;
};

void enQueuePerson(char name[], char secondName[], int age, int priority)
{
  struct node *person = createPerson(name, secondName, age, priority);
  // if we have no node, we create head and tail node here
  if (head == NULL && tail == NULL)
  {
    head = person;
    tail = person;
  }
  else
  {
    // if new person priority equal or smaller than head node, we should make it first node
    if (person->priority <= head->priority)
    {
      temp = head;
      head = person;
      person->next = temp;
      return;
    }
    // if new persons priority is equal or bigger than tail node, we should make it tail.
    if (person->priority >= tail->priority)
    {
      tail->next = person;
      tail = person;
    }

    // this is general algoritm for priority queues
    temp = head;
    while (temp->next != NULL)
    {
      if (person->priority < temp->next->priority)
      {
        struct node *newy;
        newy = temp->next;
        temp->next = person;
        person->next = newy;
      }
      temp = temp->next;
    }
  }
}

void deQueue()
{
  temp = head;
  if (head == NULL)
  {
    printf("\nQueue is empty, pls Enqueue");
    return;
  }

  if (head == tail)
  {
    head = NULL;
    tail = NULL;
    return;
  }

  head = temp->next;
  free(temp);
}

struct node *whoNext()
{
  if (head == NULL)
  {
    printf("\nThere is no item in queue...");
    return 0;
  }

  return head;
}

void checkPri(int x)
{
  if (x == 1)
    strcpy(priority, "High");
  else if (x == 2)
    strcpy(priority, "Normal");
  else
    strcpy(priority, "Low");
}
void printQueue()
{

  int i = 1;
  if (head == NULL)
  {
    return;
  }
  temp = head;
  while (temp->next != NULL)
  {
    checkPri(temp->priority);
    printf("\n%d. Position => %s %s %d priority ==> %s ", i, temp->name, temp->secondName, temp->age, priority);
    temp = temp->next;
    i++;
  }
  checkPri(temp->priority);
  printf("\n%d. Position => %s %s %d priority ==> %s ", i, temp->name, temp->secondName, temp->age, priority);
}

void selection(int chosen)
{
  switch (chosen)
  {
  case 1:
    printf("\n Enter First Name ... ");
    scanf("%s", &firstName);
    printf("\n Enter Second Name ... ");
    scanf("%s", &secondName);
    printf("\n Enter Age ... ");
    scanf("%d", &age);
    printf("\n Enter Priority ... (1 is High | 2 is Normal | 3 is Low) ");
    scanf("%d", &pri);
    enQueuePerson(firstName, secondName, age, pri);
    printQueue();
    break;
  case 2:
    deQueue();
    printQueue();
    break;
  case 3:
    temp = whoNext();
    printf("\n ****************** \n");
    if (temp != NULL)
    {
      printf("%s %s %d", temp->name, temp->secondName, temp->age);
    }
    break;
  }
}
void menu()
{
  int choise = -1;
  while (choise != 4)
  {
    printf("\n 1- Enqueue ... ");
    printf("\n 2- Dequeue ... ");
    printf("\n 3- Who's next? ");
    printf("\n 4- To exit");
    printf("\n Make your choise ");
    scanf("%d", &choise);
    selection(choise);
  }
}

int main()
{
  menu();
  return 0;
}