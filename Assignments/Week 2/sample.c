#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 50

struct Cart {
    int items[10]; 
    int num_items; 
};

int findString(const char str[], const char list[][MAX_STRING_LEN + 1], const int nstrings) {
    for (int i = 0; i < nstrings; i++) {
        if (strcmp(str, list[i]) == 0) {
            return i;  
        }
    }
    return -1; 
}

int add2Cart(struct Cart* cart, const int item) {
    if (cart->num_items >= 10) {
        return -1; 
    }
    cart->items[cart->num_items] = item;
    cart->num_items++;
    return 0;  
}

int main() {
    // set up
    struct Cart cart = {{1, 3, 5}, 3};  
    const char carts[][MAX_STRING_LEN + 1] = {"flour", "sugar", "bananas", "potatoes"};
    const int num_items = 4;
    const char items[] = "cherry"; 

    // execution
    int result = add2Cart(&cart, findString(items, carts, num_items));

    // comparison
    if (result == 0) {
        printf("The items have been successfully added to the cart.\n");
    } else {
        printf("Sorry, items have not been added to the cart.\n");
    }

    return 0;
}
