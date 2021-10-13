#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#define MAX 100
#define sf scanf
#define pf printf
#define endl pf("\n");
#define EXIT "0"
typedef struct node Node;
typedef struct node *NodePointer;

struct node{
    char songName[MAX];
    char artistName[MAX];
    char duration[MAX];
    struct node *next;
};

void insertIntoLinkedList(char song_name[], char artist_name[], char dur[], NodePointer *head2){
    NodePointer newNode = NULL;
    NodePointer previous = NULL;
    NodePointer current = *head2;
    newNode = (struct node *)malloc(sizeof(Node));

    if (newNode != NULL){
        strcpy(newNode->songName, song_name);
        strcpy(newNode->artistName, artist_name);
        strcpy(newNode->duration, dur);
        while (NULL != current){
            previous = current;
            current = current->next;
        }
        if (NULL == previous){
            newNode->next = current;
            *head2 = newNode;
        }
        else{
            previous->next = newNode;
            newNode->next = current;
        }
    }
}

void displayLinkedList(NodePointer current){
    if (NULL == current){
        printf("The linked list is empty!\n\n");
        return;
    }
    int count = 1;
    printf("\nThe music playlist: \n");
    while (NULL != current){
        printf("%d. %s - %s [%s]\n", count, current->songName, current->artistName, current->duration);
        current = current->next;
        count++;
    }
    printf("\n");
}

void sortLinkedList(NodePointer current){
    char temp1[MAX], temp2[MAX], temp3[MAX];
    NodePointer index = NULL;
    while(current != NULL) {
        index = current->next;
        while(index != NULL) {
            if(strcmp(current->songName, index->songName) > 0) {
                // temp = current->songName;
                // current->songName = index->songName;
                // index->songName = temp;
                strcpy(temp1, current->songName);
                strcpy(temp2, current->artistName);
                strcpy(temp3, current->duration);

                strcpy(current->songName, index->songName);
                strcpy(current->artistName, index->artistName);
                strcpy(current->duration, index->duration);

                strcpy(index->songName, temp1);
                strcpy(index->artistName, temp2);
                strcpy(index->duration, temp3);
            }
            index = index->next;
        }
        current = current->next;
    }
}

void deleteFromLinkedList(int index, NodePointer *head3){
    NodePointer tempNode = NULL;
    NodePointer previous = NULL;
    NodePointer current = *head3;
    int counter = 1;

    if (NULL == current){
        printf("Cannot delete from empty list.\n");
        return;
    }

    if (index == counter){
        tempNode = current;
        *head3 = current->next;
        free(tempNode);
    }
    else{
        while (NULL != current && counter != index){
            previous = current;
            current = current->next;
            counter++;
        }
        if (NULL != current){
            tempNode = current;
            //printf("tempNode = %s\n", tempNode->songName);
            previous->next = current->next;
            free(tempNode);
        }
    }
}

int main(){
    char word1[MAX] = {'\0'};
    char word2[MAX] = {'\0'};
    char word3[MAX] = {'\0'};
    NodePointer head = NULL;
    while (0 != strcmp(word1, EXIT)){
        printf("Enter the song name to add to the playlist(or enter '0' to exit): \n");
        gets(word1);
        if (0 != strcmp(word1, EXIT)){
            printf("Enter the artist's name: ");
            gets(word2);
            pf("Enter the duration of the song: ");
            gets(word3);
            insertIntoLinkedList(word1, word2, word3, &head);
            displayLinkedList(head);
        }
    }
    displayLinkedList(head);
    pf("After sorting the playlist alphabetically: \n");
    sortLinkedList(head);
    displayLinkedList(head);
    strncpy(word1, "don't EXIT", MAX);
    printf("\n");
    int choice;
    while (0 != strcmp(word1, EXIT) && NULL != head){
        printf("Enter the position of the song to delete from the playlist(enter '0' to exit): \n");
        sf("%d", &choice);
        if (choice != 0){
            deleteFromLinkedList(choice, &head);
            displayLinkedList(head);
        }
        else{
            break;
        }
    }
    return 0;
}
