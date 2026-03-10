void selectionSort(int *x, int n){
    int i, j, min_idx, temp;
    for(i = 0; i < n-1; i++){
        min_idx = i;
        
        for(j = i+1; j < n; j++){
            if(*(x + j) < *(x + min_idx))
                min_idx = j;
        }
        
        if(i!=menor){
            temp = v[i];
            v[i] = v[menor];
            v[menor] = temp;
        }
    }
}
