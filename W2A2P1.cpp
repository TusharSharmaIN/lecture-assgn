#include <stdio.h>
int func(int x, int y);

#define func(x, y) x / y + x

int main() {
    int i, j;
    scanf("%d", &i);

    scanf("%d", &j);

    printf("%d ", func(i + j, 3));

	#undef func	//Fill in the blanks

    printf("%d\n", func(i + j, 3));

} //End main()

int func(int x, int y) 
{
    return y / x + y;
}
