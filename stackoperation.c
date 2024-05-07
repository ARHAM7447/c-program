/*write a program in c for push pop peep default display in the stack and use this operation*/
#include <stdio.h>
#define size 10

int arr[size], top = -1;

void push();
void pop();
void display();

int main() {
    int ch;

    do {
        printf("\n[1].push\n[2].pop\n[3].display\n[4].exit");
        printf("\nenter your choice [1-4]: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("\ninvalid option\n");
        }
    } while (ch != 4);

    return 0;
}

void push() {
    if (top == size - 1) {
        printf("stack is overflow\n");
    } else {
        top++;
        printf("enter element to push: ");
        scanf("%d", &arr[top]);
    }
}

void pop() {
    if (top == -1) {
        printf("stack is underflow\n");
    } else {
        printf("\nthe popped element is: %d\n", arr[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("\nstack is underflow\n");
    } else {
        printf("\nthe elements in stack are:\n top");
        for (int i = top; i >= 0; i--) {
            printf("->%d", arr[i]);
        }
        printf("\n");
    }
}
