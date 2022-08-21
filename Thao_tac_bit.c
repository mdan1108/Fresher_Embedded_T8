//viet ham digitalWrite trong Arduino
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define HIGH 1
#define LOW 0

int PORT_A=0b00000000;

void digitalWrite(int PIN, int STATUS)
{
    if(STATUS==HIGH)
    {
        PORT_A=PORT_A|(0b00000001<<PIN);
        printf("X: %d\n", PORT_A);
        return PORT_A;
    }
    else
    {
        PORT_A=PORT_A&~(0b00000001<<PIN);
        printf("X: %d\n", PORT_A);
        return PORT_A;
    }
}

int main(int argc, char const *argv[])
{
    system("cls");
    digitalWrite(3, HIGH);
    digitalWrite(3, LOW);
    return 0;
}
