/*
Name       : Manav Alpeshbhai Zadafiya
Student Id : 144095221
Email      : mazadafiya@myseneca.ca
Section    : ZDD
Authenticity Declaration:
I declare this submission is the result of my own work and has not
been shared with any other student or 3rd party content provider.
This submitted piece of work is entirely of my own creation."
*/

#ifndef CUSTOMER_H
#define CUSTOMER_H
#define MAX_LENGTH 20

struct Customer {
    char firstName[MAX_LENGTH];
    char lastName[MAX_LENGTH];
    char address[MAX_LENGTH];
    char city[MAX_LENGTH];
    char province[MAX_LENGTH];
    char postalCode[MAX_LENGTH];
};

void getCustomerInfo(struct Customer* customer);
int checkString(char* str);
int validatePostalCode(char* pos);
int validateString(char* Str);
#endif 
