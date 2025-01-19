/* Names: Ashton, Ethan, Nerwin, Minh
 * Date: 1/22/25
 */

#include <stdio.h>
#include "age.h"

int main(void) {
    struct Person yourStruct = { "Group6", 15 };
    setMyAge(&yourStruct, 20);
    setMyAge(&yourStruct, yourStruct.age + 5);

    yourStruct.age = yourStruct.age & 0x36;  // 25 (0001 1001) & 0x36 (0011 0110) = 16 (0001 0000)

    printf("Name: %s, Age: %d\n", yourStruct.first_name, yourStruct.age);

    return 0;
}