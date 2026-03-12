void insertionSort(int *x, int n){
    int i, j, aux;
    for(i=1; i<n; i++){
        aux = x[i];
        for(j = i; (j>0) && (aux<x[j-1]);j--){
            x[j] = x[j-1];
        }
        x[j] = aux;
    }
}
