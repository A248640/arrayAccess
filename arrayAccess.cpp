// для одномерных массивов y должен быть равен 1
void arrayAccess(char* array, int x, int y = 1)
{
    // cтрока
    for(int iY { }; iY < y; ++iY)
    {
        // cтолбец
        for(int iX { }; iX < x; ++iX)
        {
            // элемент массива по адресу [iY][iX]
            char c = array[iY * x + iX];
        }
    }
}

int main()
{
    /*
          x  * * * * *
        y    0 1 2 3 4
        
        * 0  a b c d e
        * 1  f g h i j
        * 2  k l m n o
        * 3  p q r s t
        * 4  u v w x y
        
        В памяти лежит так:
        0       4 5       9 10     14 15     19 20     24
        a b c d e f g h i j k l m n o p q r s t u v w x y
    */

    const int x { 5 }, y { 5 };

    char array1D[y * x]
    {
        'a', 'b', 'c', 'd', 'e',
        'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o',
        'p', 'q', 'r', 's', 't',
        'u', 'v', 'w', 'x', 'y',
    };

    char array2D[y][x]
    {
        { 'a', 'b', 'c', 'd', 'e' },
        { 'f', 'g', 'h', 'i', 'j' },
        { 'k', 'l', 'm', 'n', 'o' },
        { 'p', 'q', 'r', 's', 't' },
        { 'u', 'v', 'w', 'x', 'y' },
    };

    arrayAccess(&array1D[0]   , x * y);
    arrayAccess(&array1D[0]   , x,  y);
    arrayAccess(&array2D[0][0], x,  y);

    return 0;
}