# IntegritTest
Вот задача для реализации на языке C:

TASK:
Из массива точек выбрать те, которые лежат внутри заданного многоугольника.

Входные данные: многоугольник, заданный массивом вершин, массив точек

//polygon vertice;
static const int xv[]={39,38,12,14,31,27,40,46,46,34,34,49,49,51,15};

static const int yv[]={51,57,43, 7,27,34,25,21,13,13, 8, 8,13,50,37};

//points;
const int xp[]={43,48,18,36,60,46,14,12,35,32,34,18,28,54,47,31,56,14,19,58,15,29,24,13,19,31,24,45,22,58,25,17,38,50,32,60,32,25,22,59,21,30,21,23,31,60,56,38,40,14};

const int yp[]={35,54,28,24,6,39,60,41,26,39,35,45,39,30,57,36,38,42,52,23,43,31,22,26,41,13,59,59,17,20,60,48,48,38,49,27,50,7,31,43,15,32,23,48,40,59,57,35,4,25};


Выходные данные: вывести в stdout номера выбранных точек
