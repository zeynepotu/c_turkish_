### DERLEYİCİDE TÜRKÇE KARAKTERİ OLUŞTURMA

```c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    printf("MERHABA dünya");
    return 0;
}
```
