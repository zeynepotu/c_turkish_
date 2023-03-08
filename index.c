#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish"); // Dili türkçe olarak ayarladık. 
    printf("MERHABA dünya"); // Artık Türkçe karakter içeren bir çıktı problemsiz şekilde çalışacak.
    return 0;
}
