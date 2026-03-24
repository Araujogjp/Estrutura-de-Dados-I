void quickSort(int *v, int inicio, int fim){
    int pivo;
    if(fim > inicio){
        pivo = particiona(v, inicio, fim);
        quickSort(v, inicio, pivo - 1);
        quickSort(v, pivo+1, fim);
    }
}

int particiona(int *v, int inicio, int final){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final;
    pivo = v[inicio];
    while(esq < dir){
        while(esq <= final && v[esq] <= pivo)
            esq++
        while(dir >= 0 && v[dir] > pivo)
            dir--;
        if(esq < dir){
            aux = v[esq];
            v[esq] = v[dir];
            v[dir] = aux;
        }
    }
    v[inicio] = v[dir];
    v[dir] = pivo;
    return dir;
}
