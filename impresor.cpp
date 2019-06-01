#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    FILE *input;
    input = stdin;
    int numeroAux;
    long int resultado = 0;

    while (true)
    {
        fscanf(input, "%d", &numeroAux);
        resultado = resultado + numeroAux;
        cout << "resultado: " << resultado << endl;
    }
}